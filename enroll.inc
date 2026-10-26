// Included after archive/crypto helpers in main.m.
#include "recovery/recovery.h"
#include <IOKit/IOKitLib.h>
#include <IOKit/IOBSD.h>
#include <grp.h>
static unsigned long SudoID(const char *name) {
    const char *text = getenv(name);
    Check(text && *text && strspn(text, "0123456789") == strlen(text),
          @"Use sudo from your normal user account to export enrollment");
    errno = 0;
    unsigned long value = strtoul(text, NULL, 10);
    Check(!errno && value < UINT32_MAX, @"Invalid sudo ownership metadata");
    return value;
}
static void DropEnrollmentPrivileges(uid_t uid, gid_t gid) {
    if (geteuid() != 0) {
        Check(getuid() == geteuid() && getgid() == getegid(), @"Set-ID execution unsupported");
        return;
    }
    Check(setgroups(0, NULL) == 0 && setgid(gid) == 0 && setuid(uid) == 0 &&
          getuid() == uid && geteuid() == uid && getgid() == gid && getegid() == gid &&
          setuid(0) == -1, @"Cannot permanently drop root privileges");
}
static NSMutableData *EnrollmentFile(int directory, const char *name, bool private) {
    int fd = openat(directory, name, O_RDONLY | O_NOFOLLOW | O_CLOEXEC | O_NONBLOCK);
    if (fd < 0 && errno == ENOENT) return nil;
    Check(fd >= 0, @"Cannot read enrollment file: %s", strerror(errno));
    NSMutableData *data = nil;
    @try {
        struct stat before, after;
        Check(fstat(fd, &before) == 0 && S_ISREG(before.st_mode) &&
              before.st_size >= 0 && (uint64_t)before.st_size <= MetadataLimit,
              @"Enrollment files must be regular files, at most 64 MiB");
        Check(!private || (before.st_uid == getuid() && !(before.st_mode & 077)),
              @"Captured enrollment must belong to you with owner-only permissions");
        data = [NSMutableData dataWithLength:(NSUInteger)before.st_size];
        ReadAt(fd, data.mutableBytes, data.length, 0);
        Check(fstat(fd, &after) == 0 && Unchanged(before, after),
              @"Enrollment file changed while reading");
        return data;
    } @catch (NSException *error) {
        Wipe(data.mutableBytes, data.length);
        @throw;
    } @finally { close(fd); }
}
static int EnrollmentDirectory(NSString *path, bool private) {
    // Privileged callers use fixed system paths; capture paths are opened after dropping root.
    int fd = open(path.fileSystemRepresentation, O_RDONLY | O_DIRECTORY | O_NOFOLLOW | O_CLOEXEC);
    Check(fd >= 0, @"Cannot open enrollment directory: %s", strerror(errno));
    @try {
        struct stat st;
        Check(fstat(fd, &st) == 0 && (!private || (st.st_uid == getuid() && !(st.st_mode & 077))),
              @"Capture directory must belong to you with owner-only permissions");
        return fd;
    } @catch (NSException *error) { close(fd); @throw; }
}
static void HostMAC(uint8_t bytes[6]) {
    io_service_t service = IOServiceGetMatchingService(kIOMainPortDefault,
        IOBSDNameMatching(kIOMainPortDefault, 0, "en0"));
    io_registry_entry_t parent = IO_OBJECT_NULL;
    CFTypeRef builtin = NULL, mac = NULL;
    @try {
        Check(service, @"Cannot find built-in en0 interface");
        builtin = IORegistryEntryCreateCFProperty(service, CFSTR("IOBuiltin"), kCFAllocatorDefault, 0);
        Check(builtin && CFGetTypeID(builtin) == CFBooleanGetTypeID() && CFBooleanGetValue(builtin),
              @"en0 must be built-in");
        Check(IORegistryEntryGetParentEntry(service, kIOServicePlane, &parent) == KERN_SUCCESS,
              @"Cannot read en0 hardware identity");
        mac = IORegistryEntryCreateCFProperty(parent, CFSTR("IOMACAddress"), kCFAllocatorDefault, 0);
        Check(mac && CFGetTypeID(mac) == CFDataGetTypeID() && CFDataGetLength(mac) == 6,
              @"Missing en0 hardware identity");
        memcpy(bytes, CFDataGetBytePtr(mac), 6);
    } @finally {
        if (mac) CFRelease(mac);
        if (builtin) CFRelease(builtin);
        if (parent) IOObjectRelease(parent);
        if (service) IOObjectRelease(service);
    }
}
static NSDictionary<NSString *, NSMutableData *> *EnrollmentApp(int fd, NSString **executable) {
    struct archive *reader = NULL;
    NSMutableDictionary *files = [NSMutableDictionary dictionary];
    NSString *app = nil, *name = nil;
    NSArray<NSString *> *wanted = nil;
    @try {
        for (unsigned pass = 0; pass < 2; ++pass) {
            reader = OpenZIP(fd);
            NSMutableDictionary *seen = [NSMutableDictionary dictionary];
            struct archive_entry *entry;
            int status; uint64_t retained = 0;
            ArchiveBudget budget = {0};
            while ((status = archive_read_next_header(reader, &entry)) == ARCHIVE_OK) {
                @autoreleasepool {
                    NSString *path = EntryPath(entry);
                    if (!AcceptEntry(entry, path, seen, &budget)) {
                        Check(archive_read_data_skip(reader) == ARCHIVE_OK, @"ZIP skip failed");
                        continue;
                    }
                    uint64_t size = (uint64_t)archive_entry_size(entry);
                    NSArray *parts = path.pathComponents;
                    bool info = parts.count == 3 && [parts[0] isEqualToString:@"Payload"] &&
                        [parts[1] hasSuffix:@".app"] && [parts[2] isEqualToString:@"Info.plist"];
                    NSString *target = nil;
                    if (pass) {
                        for (NSString *suffix in wanted)
                            if ([path isEqualToString:[app stringByAppendingPathComponent:suffix]]) target = suffix;
                    }
                    if ((!pass && info) || target) {
                        Check(archive_entry_filetype(entry) == AE_IFREG, @"Enrollment app inputs must be regular files");
                        Check(size <= MetadataLimit && retained <= MetadataLimit - size,
                              @"Enrollment app inputs exceed 64 MiB");
                        retained += size;
                        Check(pass || (!app && size <= (1ULL << 20)), @"Expected one main app with bounded Info.plist");
                        NSMutableData *data = (NSMutableData *)ReadMetadata(reader, size);
                        if (!pass) {
                            id plist = [NSPropertyListSerialization propertyListWithData:data options:NSPropertyListImmutable format:NULL error:NULL];
                            Check([plist isKindOfClass:NSDictionary.class], @"Invalid app Info.plist");
                            id value = plist[@"CFBundleExecutable"];
                            Check([value isKindOfClass:NSString.class] && [value length] &&
                                  ![value containsString:@"/"] && ![value isEqualToString:@"."] &&
                                  ![value isEqualToString:@".."] && strlen([value UTF8String]) == [value lengthOfBytesUsingEncoding:NSUTF8StringEncoding],
                                  @"Invalid CFBundleExecutable");
                            name = value; app = path.stringByDeletingLastPathComponent;
                        } else files[target] = data;
                    } else Check(archive_read_data_skip(reader) == ARCHIVE_OK, @"ZIP skip failed");
                }
            }
            Check(status == ARCHIVE_EOF, @"ZIP read failed: %s", archive_error_string(reader));
            archive_read_free(reader); reader = NULL;
            Check(app && name, @"IPA lacks main app Info.plist");
            if (!pass) wanted = @[name, [@"SC_Info/" stringByAppendingFormat:@"%@.sinf", name],
                                       [@"SC_Info/" stringByAppendingFormat:@"%@.supf", name],
                                       [@"SC_Info/" stringByAppendingFormat:@"%@.v5.supf", name]];
        }
        Check(files[wanted[0]] && files[wanted[1]] && (files[wanted[2]] || files[wanted[3]]),
              @"IPA requires main executable and matching SINF/SUPF");
        *executable = name;
        return files;
    } @catch (NSException *error) {
        for (NSMutableData *data in files.allValues) Wipe(data.mutableBytes, data.length);
        @throw;
    } @finally { if (reader) archive_read_free(reader); }
}
static void Enroll(NSString *input, NSString *output, NSString *capture) {
    NSMutableDictionary<NSString *, NSMutableData *> *files = [NSMutableDictionary dictionary];
    uint8_t mac[6] = {0}, raw[4184] = {0}; Model model = {0};
    int inputFD = -1, outputFD = -1; NSString *temporary = nil;
    uid_t uid = getuid(); gid_t gid = getgid();
    if (geteuid() == 0) {
        uid = (uid_t)SudoID("SUDO_UID"); gid = (gid_t)SudoID("SUDO_GID");
        Check(uid != 0, @"Run sudo from a non-root account");
    }
    @try {
        if (capture) DropEnrollmentPrivileges(uid, gid);
        else Check(geteuid() == 0, @"Run sudo momos enroll INPUT.ipa OUTPUT.bin to read existing Mac enrollment");
        uint64_t total = 0;
        for (NSString *kind in @[@"fpsd", @"shared"]) {
            bool fpsd = [kind isEqualToString:@"fpsd"];
            NSString *path = capture ? [capture stringByAppendingPathComponent:kind] :
                (fpsd ? @"/private/var/db/fpsd/SC Info" : @"/Users/Shared/SC Info");
            int directory = EnrollmentDirectory(path, capture != nil);
            @try {
                for (NSString *name in @[@"SC Info.sidb", @"SC Info.sidd", @"SC Info.sids"]) {
                    NSMutableData *data = EnrollmentFile(directory, name.UTF8String, capture != nil);
                    if (!data) continue;
                    NSString *suffix = [(fpsd ? @"/var/db/fpsd/SC Info/" : @"/Users/Shared/SC Info/") stringByAppendingString:name];
                    files[suffix] = data;
                    Check(total <= MetadataLimit - data.length, @"Enrollment data exceeds 64 MiB");
                    total += data.length;
                }
            } @finally { close(directory); }
        }
        if (capture) {
            int directory = EnrollmentDirectory(capture, true);
            @try {
                NSMutableData *data = EnrollmentFile(directory, "iomac.bin", true);
                @try { Check(data.length == 6, @"Capture requires six-byte iomac.bin"); memcpy(mac, data.bytes, 6); }
                @finally { Wipe(data.mutableBytes, data.length); }
            } @finally { close(directory); }
        } else HostMAC(mac);
        DropEnrollmentPrivileges(uid, gid);
        Check(files.count, @"No existing Mac FairPlay enrollment found");
        struct stat st, before, after;
        Check(lstat(output.fileSystemRepresentation, &st) != 0 && errno == ENOENT,
              @"Output already exists or cannot be inspected");
        inputFD = open(input.fileSystemRepresentation, O_RDONLY | O_NOFOLLOW | O_CLOEXEC | O_NONBLOCK);
        Check(inputFD >= 0, @"Cannot open input IPA: %s", strerror(errno));
        Check(fstat(inputFD, &before) == 0 && S_ISREG(before.st_mode), @"Input IPA must be a regular file");
        NSString *executable;
        NSDictionary *app = EnrollmentApp(inputFD, &executable);
        [files addEntriesFromDictionary:app];
        Check(fstat(inputFD, &after) == 0 && Unchanged(before, after), @"Input IPA changed during enrollment");
        NSData *sinf = files[[@"SC_Info/" stringByAppendingFormat:@"%@.sinf", executable]];
        const uint8_t *b = sinf.bytes;
        Check(sinf.length >= 8 && BE32(b) == sinf.length && !memcmp(b + 4, "sinf", 4), @"Invalid SINF root");
        NSRange schi = Atom(b, NSMakeRange(8, sinf.length - 8), "schi");
        NSRange user = Atom(b, schi, "user"), key = Atom(b, schi, "key "), payload = Atom(b, schi, "priv");
        Check(user.length == 4 && key.length == 4 && payload.length >= 432, @"Unsupported SINF enrollment geometry");
        RFile inputs[64]; size_t count = 0;
        __attribute__((objc_precise_lifetime)) NSMutableArray<NSString *> *suffixes = [NSMutableArray array];
        for (NSString *name in files) {
            NSString *suffix = [name hasPrefix:@"/"] ? name : [@"/" stringByAppendingString:name.lastPathComponent];
            [suffixes addObject:suffix];
            NSData *data = files[name]; inputs[count++] = (RFile){suffix.UTF8String, data.bytes, data.length};
        }
        NSString *path = [NSString stringWithFormat:@"/Applications/%@.app/%@", executable, executable];
        char error[160];
        Check(RecoverEnrollment(inputs, count, mac, path.UTF8String, b + payload.location,
                                BE32(b + user.location), BE32(b + key.location), &cancelled, raw, error),
              @"Enrollment recovery failed: %s", error);
        DecodeModel(raw, &model);
        NSMutableData *mask = DecodeLicense(sinf, &model);
        Wipe(mask.mutableBytes, mask.length);
        temporary = CreateTemporary(output.stringByDeletingLastPathComponent, &outputFD);
        Check(fchmod(outputFD, 0600) == 0, @"Cannot protect enrollment output");
        WriteAt(outputFD, raw, sizeof(raw), 0);
        Check(fsync(outputFD) == 0, @"Cannot flush enrollment output");
        CheckCancelled();
        Check(link(temporary.fileSystemRepresentation, output.fileSystemRepresentation) == 0,
              @"Cannot publish enrollment without overwriting: %s", strerror(errno));
    } @finally {
        if (inputFD >= 0) close(inputFD);
        if (outputFD >= 0) close(outputFD);
        if (temporary) unlink(temporary.fileSystemRepresentation);
        for (NSMutableData *data in files.allValues) Wipe(data.mutableBytes, data.length);
        Wipe(mac, sizeof(mac)); Wipe(raw, sizeof(raw)); Wipe(&model, sizeof(model));
    }
}
