// Offline IPA decryptor. FairPlay transforms adapted from DrWhax/ipatool.
// See THIRD-PARTY-NOTICES.txt. No network APIs, subprocesses, or account login.
#import <Foundation/Foundation.h>
#include <CommonCrypto/CommonCrypto.h>
#include <archive.h>
#include <archive_entry.h>
#include <libkern/OSByteOrder.h>
#include <sys/stat.h>
#include <sys/mount.h>
#include <fcntl.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>
#include <stdarg.h>
#include <string.h>

enum { PageBytes = 4096, BufferBytes = 65536 };
#ifndef MOMOS_VERSION
#define MOMOS_VERSION "dev"
#endif
static const uint64_t MetadataLimit = 64ULL << 20;
static volatile sig_atomic_t cancelled;
static void Cancel(int signum) {
    cancelled = signum;
}
static void Wipe(void *memory, size_t size) {
    volatile uint8_t *p = memory;
    while (size--)
        *p++ = 0;
}

__attribute__((noreturn)) static void Fail(NSString *format, ...) NS_FORMAT_FUNCTION(1, 2);
static void Fail(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    @throw [NSException exceptionWithName:@"MomosError" reason:message userInfo:nil];
}
#define Check(test, ...)                                                                           \
    do {                                                                                           \
        if (!(test))                                                                               \
            Fail(__VA_ARGS__);                                                                     \
    } while (0)
static void CheckCancelled(void) {
    Check(!cancelled, @"Cancelled");
}
static uint16_t BE16(const void *p) {
    uint16_t n;
    memcpy(&n, p, 2);
    return OSSwapBigToHostInt16(n);
}
static uint32_t BE32(const void *p) {
    uint32_t n;
    memcpy(&n, p, 4);
    return OSSwapBigToHostInt32(n);
}
static uint64_t BE64(const void *p) {
    uint64_t n;
    memcpy(&n, p, 8);
    return OSSwapBigToHostInt64(n);
}
static uint32_t LE32(const void *p) {
    uint32_t n;
    memcpy(&n, p, 4);
    return OSSwapLittleToHostInt32(n);
}
static uint64_t LE64(const void *p) {
    uint64_t n;
    memcpy(&n, p, 8);
    return OSSwapLittleToHostInt64(n);
}
static void PutBE16(void *p, uint16_t n) {
    n = OSSwapHostToBigInt16(n);
    memcpy(p, &n, 2);
}
static void PutBE32(void *p, uint32_t n) {
    n = OSSwapHostToBigInt32(n);
    memcpy(p, &n, 4);
}
static void PutBE64(void *p, uint64_t n) {
    n = OSSwapHostToBigInt64(n);
    memcpy(p, &n, 8);
}
static void PutLE32(void *p, uint32_t n) {
    n = OSSwapHostToLittleInt32(n);
    memcpy(p, &n, 4);
}

static void ReadAt(int fd, void *buffer, size_t size, uint64_t offset) {
    uint8_t *p = buffer;
    while (size) {
        CheckCancelled();
        ssize_t n = pread(fd, p, size, (off_t)offset);
        if (n < 0 && errno == EINTR)
            continue;
        Check(n > 0, @"Read failed or file truncated: %s", strerror(errno));
        p += n;
        size -= (size_t)n;
        offset += (uint64_t)n;
    }
}
static void WriteAt(int fd, const void *buffer, size_t size, uint64_t offset) {
    const uint8_t *p = buffer;
    while (size) {
        CheckCancelled();
        ssize_t n = pwrite(fd, p, size, (off_t)offset);
        if (n < 0 && errno == EINTR)
            continue;
        Check(n > 0, @"Write failed: %s", strerror(errno));
        p += n;
        size -= (size_t)n;
        offset += (uint64_t)n;
    }
}
static NSMutableData *ReadRange(int fd, uint64_t offset, size_t size) {
    NSMutableData *data = [NSMutableData dataWithLength:size];
    ReadAt(fd, data.mutableBytes, size, offset);
    return data;
}

typedef struct {
    uint32_t user, keyID;
    uint8_t key[16], whitening[16], tables[16][256];
} Model;
static void LoadModel(NSString *path, Model *model) {
    int fd = open(path.fileSystemRepresentation, O_RDONLY | O_NOFOLLOW | O_CLOEXEC);
    Check(fd >= 0, @"Cannot open private model: %s", strerror(errno));
    uint8_t raw[4184] = {0};
    @try {
        struct stat st;
        Check(fstat(fd, &st) == 0 && S_ISREG(st.st_mode), @"Model must be a regular file");
        Check((st.st_mode & 077) == 0, @"Model must be owner-only; run chmod 600 on it");
        Check((uint64_t)st.st_size == sizeof(raw),
              @"Expected a 4,184-byte FPSENR2 enrollment model");
        ReadAt(fd, raw, sizeof(raw), 0);
        Check(memcmp(raw, "FPSENR2\0", 8) == 0 && LE32(raw + 8) == 2 &&
                  LE32(raw + 12) == sizeof(raw),
              @"Invalid FPSENR2 model header");
        model->user = LE32(raw + 0x30);
        model->keyID = LE32(raw + 0x34);
        memcpy(model->key, raw + 0x38, 16);
        memcpy(model->whitening, raw + 0x48, 16);
        memcpy(model->tables, raw + 0x58, 4096);
        for (int i = 0; i < 16; i++) {
            bool seen[256] = {0};
            for (int j = 0; j < 256; j++) {
                uint8_t v = model->tables[i][j];
                Check(!seen[v], @"Invalid model permutation");
                seen[v] = true;
            }
        }
    } @finally {
        Wipe(raw, sizeof(raw));
        close(fd);
    }
}

static NSRange Atom(const uint8_t *bytes, NSRange range, const char name[4]) {
    NSRange found = NSMakeRange(NSNotFound, 0);
    for (NSUInteger p = range.location, end = NSMaxRange(range); p < end;) {
        Check(end - p >= 8, @"Truncated SINF atom");
        uint32_t size = BE32(bytes + p);
        Check(size >= 8 && size <= end - p, @"Invalid SINF atom bounds");
        if (!memcmp(bytes + p + 4, name, 4)) {
            Check(found.location == NSNotFound, @"Duplicate SINF atom");
            found = NSMakeRange(p + 8, size - 8);
        }
        p += size;
    }
    Check(found.location != NSNotFound, @"Missing SINF atom %.4s", name);
    return found;
}

static void AppMask(const uint8_t logical[16], uint8_t out[16]) {
    static const uint32_t writers[4] = {0x1467cdb1, 0xbea0cbf9, 0xea98d9d3, 0x477a1e20};
    static const uint8_t mask[16] = {0xe6, 0x3d, 0xc3, 0x4e, 0x30, 0x8b, 0xb3, 0x1f,
                                     0x0c, 0xb2, 0xa1, 0x33, 0xca, 0x49, 0x1b, 0xc0};
    // The reference's MixColumns followed by InvMixColumns cancels exactly.
    for (unsigned column = 0; column < 4; column++) {
        uint32_t value = 0;
        for (unsigned pass = 0; pass < 4; pass++)
            value = (((value & 0xffffff) << 8) | logical[column * 4 + 3 - pass]) + 0x7db82c18;
        uint32_t result =
            (value + (column + 13) * 0x594ec277U + 0x8603bbe8U) ^ 0x07d2f11eU ^ writers[column];
        PutBE32(out + column * 4, result);
    }
    for (unsigned i = 0; i < 16; i++)
        out[i] ^= mask[i];
}

static NSMutableData *DecodeLicense(NSData *data, const Model *model) {
    const uint8_t *b = data.bytes;
    Check(data.length >= 8 && BE32(b) == data.length && !memcmp(b + 4, "sinf", 4),
          @"Invalid SINF root");
    NSRange schi = Atom(b, NSMakeRange(8, data.length - 8), "schi");
    NSRange user = Atom(b, schi, "user"), keyID = Atom(b, schi, "key "),
            priv = Atom(b, schi, "priv");
    Check(user.length == 4 && keyID.length == 4, @"Invalid SINF selector");
    Check(BE32(b + user.location) == model->user && BE32(b + keyID.location) == model->keyID,
          @"Enrollment model does not match this SINF selector");
    Check(priv.length >= 48, @"SINF private payload too short");
    NSUInteger trailer = (priv.length - 16) % 16, cipherBytes = priv.length - 16 - trailer;
    Check((trailer == 0 || trailer == 8) && cipherBytes >= 32,
          @"Unsupported SINF private geometry");
    NSMutableData *decoded = [NSMutableData dataWithLength:16 + cipherBytes];
    NSMutableData *plain = [NSMutableData dataWithLength:cipherBytes + trailer];
    uint8_t logical[16] = {0};
    @try {
        uint8_t *d = decoded.mutableBytes;
        for (NSUInteger i = 0; i < decoded.length; i++)
            d[i] = model->tables[i % 16][b[priv.location + i] ^ model->whitening[i % 16]];
        for (NSUInteger i = decoded.length; i < priv.length; i++)
            Check(b[priv.location + i] == 0, @"Invalid SINF trailer");
        size_t written = 0;
        Check(CCCrypt(kCCDecrypt, kCCAlgorithmAES, 0, model->key, 16, d, d + 16, cipherBytes,
                      plain.mutableBytes, cipherBytes, &written) == kCCSuccess &&
                  written == cipherBytes,
              @"SINF AES decryption failed");
        static const char tags[5][4] = {{'k', 'e', 'y', ' '},
                                        {'i', 'v', 'i', 'v'},
                                        {'t', 'm', 'p', 'r'},
                                        {'r', 'i', 'g', 'h'},
                                        {'n', 'a', 'm', 'e'}};
        const uint8_t *p = plain.bytes;
        NSUInteger cursor = 0;
        for (unsigned i = 0; i < 5; i++) {
            Check(plain.length - cursor >= 8, @"Model does not decode SINF atoms");
            uint32_t n = BE32(p + cursor);
            bool sizeOK =
                (i < 3 && n == 24) || (i == 3 && (n == 88 || n == 96)) || (i == 4 && n == 264);
            Check(sizeOK && n <= plain.length - cursor && !memcmp(p + cursor + 4, tags[i], 4),
                  @"Model does not decode SINF atoms");
            cursor += n;
        }
        Check(cursor == plain.length, @"Unexpected SINF plaintext tail");
        for (unsigned i = 0; i < 4; i++)
            PutLE32(logical + 4 * i, BE32(p + 8 + 4 * i) + (13 + i) * 0xa6b13d89U);
        NSMutableData *mask = [NSMutableData dataWithLength:16];
        AppMask(logical, mask.mutableBytes);
        return mask;
    } @finally {
        Wipe(logical, sizeof(logical));
        Wipe(decoded.mutableBytes, decoded.length);
        Wipe(plain.mutableBytes, plain.length);
    }
}

static uint32_t MaskedSelect(uint32_t value, uint32_t gate) {
    return (((value ^ 0x2919f272U) & ~gate) | (gate & 0xd6e60000U)) ^ 0x29192e1eU;
}
static uint32_t FeedTerm(uint16_t value, uint16_t maskSource) {
    uint32_t high = ((uint32_t)value << 16) ^ 0xff99de03U,
             mask = (uint32_t)maskSource ^ 0xffff2207U;
    return ((high & mask) | ((uint32_t)maskSource & 0x21fcU)) ^ 0x23f5de6fU;
}
static uint64_t PostSquare(uint32_t value, uint32_t constant) {
    uint64_t product = (uint64_t)value * value, high = product >> 32;
    uint64_t correction = high - 0x0d09f9b1421db190ULL - ((high << 1) & 0x17bc49ce0ULL);
    return product ^ (uint64_t)constant ^ correction;
}
static void PageFold(const uint8_t input[16], uint8_t out[16]) {
    static const unsigned permutation[4][8] = {{0, 1, 2, 3, 4, 5, 6, 7},
                                               {2, 1, 0, 3, 4, 7, 6, 5},
                                               {2, 0, 4, 1, 6, 3, 7, 5},
                                               {1, 2, 4, 0, 7, 3, 5, 6}};
    static const uint32_t pairXor[4] = {0x1e2a7432, 0x087be9c2, 0xa2eb0b97, 0x7ccc42c1};
    static const uint32_t outputXor[4] = {0x0b770182, 0xbb5b7b69, 0x5f8c31bf, 0xa6e7227a};
    uint16_t initial[8], state[8];
    for (int i = 0; i < 8; i++)
        initial[i] = state[i] = BE16(input + 2 * i) ^ 0xdc6c;
    for (unsigned round = 0; round < 4; round++) {
        uint16_t next[8];
        for (unsigned pair = 0; pair < 4; pair++) {
            uint32_t left = state[permutation[round][2 * pair]] ^ 0xdc6c,
                     right = state[permutation[round][2 * pair + 1]] ^ 0xdc6c;
            uint32_t sum = left + right, square = (uint32_t)((uint64_t)sum * sum) ^ pairXor[pair],
                     carry = sum >> 16;
            next[2 * pair] = (uint16_t)(square ^ (carry * carry) ^ 0xd470);
            next[2 * pair + 1] = (uint16_t)((square >> 16) ^ 0xaa12);
        }
        memcpy(state, next, sizeof(state));
    }
    uint32_t g3 = (uint32_t)(state[3] ^ 0xdc6c) << 16, g6 = (uint32_t)(state[6] ^ 0xdc6c) << 16,
             g7 = (uint32_t)(state[7] ^ 0xdc6c) << 16;
    uint32_t combined[4] = {MaskedSelect(state[2], g3) + FeedTerm(state[1], state[0]),
                            MaskedSelect(state[4], g6) + FeedTerm(state[2], state[0]),
                            MaskedSelect(state[5], g7) + FeedTerm(state[3], state[0]),
                            MaskedSelect(state[6], g7) + FeedTerm(state[5], state[4])};
    for (unsigned i = 0; i < 4; i++) {
        uint64_t v = PostSquare(combined[i], outputXor[i]);
        PutBE16(out + 4 * i, initial[2 * i] ^ (uint16_t)v ^ 0x0b59);
        PutBE16(out + 4 * i + 2, initial[2 * i + 1] ^ (uint16_t)(v >> 16) ^ 0x3188);
    }
}
static void DerivePageKey(CCCryptorRef wrapper, const uint8_t wrapped[16], uint64_t offset,
                          uint8_t key[16]) {
    uint8_t source[48], encrypted[48], state[16], next[16];
    memcpy(source, wrapped + 8, 8);
    PutBE64(source + 8, offset);
    memcpy(source + 16, wrapped, 16);
    PutBE64(source + 32, offset);
    memcpy(source + 40, wrapped, 8);
    size_t written = 0;
    Check(CCCryptorUpdate(wrapper, source, 48, encrypted, 48, &written) == kCCSuccess &&
              written == 48,
          @"Page-key AES failed");
    PageFold(encrypted, state);
    for (unsigned i = 0; i < 16; i++)
        state[i] ^= encrypted[16 + i];
    PageFold(state, next);
    for (unsigned i = 0; i < 16; i++)
        next[i] ^= encrypted[32 + i];
    PageFold(next, key);
    Wipe(encrypted, sizeof(encrypted));
    Wipe(state, sizeof(state));
    Wipe(next, sizeof(next));
}

static const uint8_t *SUPFRecords(NSData *data, uint32_t cpu, uint32_t subtype, uint64_t pages) {
    const uint8_t *b = data.bytes;
    uint64_t length = data.length;
    Check(length >= 12 && (b[0] == 3 || b[0] == 5), @"Expected SUPF version 3 or 5");
    uint64_t end = 8ULL + BE32(b + 4);
    uint32_t count = BE32(b + 8);
    Check(end >= 12 && end <= length && count > 0 && count <= 32, @"Invalid SUPF header");
    uint64_t cursor = 12;
    const uint8_t *result = NULL;
    for (uint32_t i = 0; i < count; i++) {
        Check(cursor <= end && end - cursor >= 4, @"Truncated SUPF architecture");
        uint64_t start = cursor + 4, stop = start + BE32(b + cursor);
        Check(stop <= end && stop >= start + 8, @"Invalid SUPF architecture size");
        uint64_t payload = start + 8 + (b[0] == 3 ? 20 : 0);
        Check(payload <= stop && stop - payload >= 4, @"Truncated SUPF page count");
        uint32_t n = BE32(b + payload);
        uint64_t keys = payload + 4;
        Check((uint64_t)n * 32 == stop - keys, @"Invalid SUPF page table");
        if (BE32(b + start) == cpu && BE32(b + start + 4) == subtype) {
            Check(!result, @"Duplicate SUPF architecture");
            Check(n == pages, @"SUPF page count does not match Mach-O encryption range");
            result = b + keys;
        }
        cursor = stop;
    }
    Check(cursor == end && result, @"SUPF has no matching architecture");
    return result;
}

static void HashRange(int fd, uint64_t offset, uint64_t size, uint8_t type, uint8_t out[48]) {
    union {
        CC_SHA1_CTX s1;
        CC_SHA256_CTX s256;
        CC_SHA512_CTX s384;
    } ctx;
    if (type == 1)
        CC_SHA1_Init(&ctx.s1);
    else if (type == 4)
        CC_SHA384_Init(&ctx.s384);
    else
        CC_SHA256_Init(&ctx.s256);
    uint8_t buffer[BufferBytes];
    while (size) {
        size_t n = (size_t)MIN(size, sizeof(buffer));
        ReadAt(fd, buffer, n, offset);
        if (type == 1)
            CC_SHA1_Update(&ctx.s1, buffer, (CC_LONG)n);
        else if (type == 4)
            CC_SHA384_Update(&ctx.s384, buffer, (CC_LONG)n);
        else
            CC_SHA256_Update(&ctx.s256, buffer, (CC_LONG)n);
        offset += n;
        size -= n;
    }
    if (type == 1)
        CC_SHA1_Final(out, &ctx.s1);
    else if (type == 4)
        CC_SHA384_Final(out, &ctx.s384);
    else
        CC_SHA256_Final(out, &ctx.s256);
}
typedef struct {
    uint64_t base, size;
    uint32_t cpu, subtype;
} Slice;
typedef struct {
    uint64_t images, pages, signatureSlots;
} Totals;

static void VerifySignature(int fd, Slice slice, uint32_t sigOffset, uint32_t sigSize,
                            uint32_t cryptOffset, uint32_t cryptSize, Totals *totals) {
    Check(sigSize >= 12 && sigSize <= MetadataLimit && sigOffset <= slice.size &&
              sigSize <= slice.size - sigOffset,
          @"Invalid code-signature range");
    NSData *data = ReadRange(fd, slice.base + sigOffset, sigSize);
    const uint8_t *b = data.bytes;
    Check(BE32(b) == 0xfade0cc0, @"Missing embedded code-signature superblob");
    uint64_t total = BE32(b + 4), count = BE32(b + 8);
    Check(total >= 12 && total <= sigSize && count <= (total - 12) / 8,
          @"Invalid signature superblob");
    unsigned directories = 0;
    for (uint64_t i = 0; i < count; i++) {
        uint64_t pos = BE32(b + 16 + 8 * i);
        Check(pos <= total && total - pos >= 8, @"Invalid signature item offset");
        uint64_t length = BE32(b + pos + 4);
        Check(length >= 8 && length <= total - pos, @"Invalid signature item size");
        if (BE32(b + pos) != 0xfade0c02)
            continue;
        directories++;
        const uint8_t *d = b + pos;
        Check(length >= 44, @"Truncated CodeDirectory");
        uint32_t version = BE32(d + 8);
        uint64_t header = 44, limit = BE32(d + 32);
        if (version >= 0x20100) {
            header = 48;
            Check(length >= header && BE32(d + 44) == 0, @"Scattered CodeDirectory unsupported");
        }
        if (version >= 0x20300) {
            header = 64;
            Check(length >= header, @"Truncated extended CodeDirectory");
            if (!limit)
                limit = BE64(d + 56);
        }
        uint64_t hashes = BE32(d + 16), slots = BE32(d + 28),
                 cryptEnd = (uint64_t)cryptOffset + cryptSize;
        uint8_t hashSize = d[36], type = d[37], shift = d[39];
        unsigned expected = type == 1 ? 20 : type == 2 ? 32 : type == 3 ? 20 : type == 4 ? 48 : 0;
        Check(expected && hashSize == expected && shift <= 30,
              @"Unsupported CodeDirectory hash geometry");
        Check(limit >= cryptEnd && limit <= slice.size,
              @"CodeDirectory does not cover encrypted bytes");
        uint64_t page = shift ? 1ULL << shift : limit;
        Check(page > 0 && slots == (limit + page - 1) / page && hashes >= header &&
                  hashes <= length && slots * hashSize <= length - hashes,
              @"Invalid CodeDirectory table");
        uint64_t first = cryptOffset / page, last = (cryptEnd + page - 1) / page;
        Check(last <= slots, @"CodeDirectory range overflow");
        for (uint64_t slot = first; slot < last; slot++) {
            uint8_t actual[48];
            uint64_t start = slot * page, size = MIN(page, limit - start);
            HashRange(fd, slice.base + start, size, type, actual);
            Check(!memcmp(actual, d + hashes + slot * hashSize, hashSize),
                  @"Encrypted source fails CodeDirectory hash at slot %llu",
                  (unsigned long long)slot);
            totals->signatureSlots++;
        }
    }
    Check(directories > 0, @"No CodeDirectory found");
}

static NSMutableData *LicenseFor(NSString *member, NSDictionary *licenses) {
    NSString *directory = member.stringByDeletingLastPathComponent;
    NSString *exact = [[directory stringByAppendingPathComponent:@"SC_Info"]
        stringByAppendingPathComponent:[member.lastPathComponent stringByAppendingString:@".sinf"]];
    if (licenses[exact])
        return licenses[exact];
    while (directory.length && ![directory isEqualToString:@"."]) {
        NSString *prefix =
            [[directory stringByAppendingPathComponent:@"SC_Info"] stringByAppendingString:@"/"];
        NSMutableData *found = nil;
        for (NSString *name in licenses) {
            if ([name hasPrefix:prefix] &&
                [[name substringFromIndex:prefix.length] rangeOfString:@"/"].location ==
                    NSNotFound) {
                Check(!found || [found isEqualToData:licenses[name]],
                      @"Ambiguous SINF licenses for %@", member);
                found = licenses[name];
            }
        }
        if (found)
            return found;
        NSString *parent = directory.stringByDeletingLastPathComponent;
        if ([parent isEqualToString:directory])
            break;
        directory = parent;
    }
    Fail(@"No matching SINF license for %@", member);
}

static void DecryptSlice(int fd, Slice slice, NSString *member, NSDictionary *licenses,
                         NSDictionary *supfs, Totals *totals) {
    uint8_t header[32];
    Check(slice.size >= 28, @"Truncated Mach-O slice");
    ReadAt(fd, header, (size_t)MIN(slice.size, 32), slice.base);
    uint32_t magic = LE32(header);
    bool is64 = magic == 0xfeedfacf;
    Check(is64 || magic == 0xfeedface, @"Unsupported Mach-O byte order");
    size_t headerBytes = is64 ? 32 : 28;
    uint32_t count = LE32(header + 16), commandBytes = LE32(header + 20);
    Check(commandBytes <= 4U * 1024 * 1024 && headerBytes <= slice.size &&
              commandBytes <= slice.size - headerBytes && count <= commandBytes / 8,
          @"Invalid Mach-O load commands");
    uint32_t cpu = LE32(header + 4), subtype = LE32(header + 8);
    Check(slice.base == 0 || (slice.cpu == cpu && slice.subtype == subtype),
          @"Fat architecture does not match Mach-O slice");
    slice.cpu = cpu;
    slice.subtype = subtype;
    NSData *commands = ReadRange(fd, slice.base + headerBytes, commandBytes);
    const uint8_t *b = commands.bytes;
    uint32_t cryptOffset = 0, cryptSize = 0, cryptID = 0, sigOffset = 0, sigSize = 0;
    uint64_t idOffset = 0;
    bool hasEncryption = false, hasSignature = false;
    size_t cursor = 0;
    for (uint32_t i = 0; i < count; i++) {
        Check(cursor <= commandBytes && commandBytes - cursor >= 8, @"Truncated Mach-O command");
        uint32_t cmd = LE32(b + cursor), size = LE32(b + cursor + 4);
        Check(size >= 8 && size <= commandBytes - cursor, @"Invalid Mach-O command size");
        if (cmd == 0x21 || cmd == 0x2c) {
            Check(!hasEncryption && size >= (cmd == 0x2c ? 24U : 20U),
                  @"Invalid encryption command");
            hasEncryption = true;
            cryptOffset = LE32(b + cursor + 8);
            cryptSize = LE32(b + cursor + 12);
            cryptID = LE32(b + cursor + 16);
            idOffset = headerBytes + cursor + 16;
        }
        if (cmd == 0x1d) {
            Check(!hasSignature && size >= 16, @"Invalid signature command");
            hasSignature = true;
            sigOffset = LE32(b + cursor + 8);
            sigSize = LE32(b + cursor + 12);
        }
        cursor += size;
    }
    Check(cursor == commandBytes, @"Mach-O commands do not fill declared size");
    if (!hasEncryption || cryptID == 0)
        return;
    Check(cryptID == 1 && (slice.cpu == 0x0100000c || slice.cpu == 0x0200000c),
          @"Unsupported encrypted Mach-O architecture/scheme: %@", member);
    Check(cryptSize > 0 && cryptOffset % PageBytes == 0 && cryptSize % PageBytes == 0 &&
              cryptOffset <= slice.size && cryptSize <= slice.size - cryptOffset &&
              idOffset + 4 <= cryptOffset,
          @"Invalid encrypted page range");
    Check(hasSignature, @"Encrypted image lacks code signature");
    NSString *base =
        [[member.stringByDeletingLastPathComponent stringByAppendingPathComponent:@"SC_Info"]
            stringByAppendingPathComponent:member.lastPathComponent];
    NSData *supf = supfs[[base stringByAppendingString:@".v5.supf"]];
    if (!supf)
        supf = supfs[[base stringByAppendingString:@".supf"]];
    Check(supf != nil, @"Missing SUPF for %@", member);
    uint64_t pages = cryptSize / PageBytes;
    const uint8_t *records = SUPFRecords(supf, slice.cpu, slice.subtype, pages);
    NSMutableData *mask = LicenseFor(member, licenses);
    VerifySignature(fd, slice, sigOffset, sigSize, cryptOffset, cryptSize, totals);
    static const uint8_t fixed[16] = {0xf5, 0x88, 0xff, 0xe1, 0x89, 0xf9, 0x89, 0xf8,
                                      0xe1, 0xf8, 0x89, 0xfe, 0x8a, 0xe1, 0xf4, 0xfe};
    uint8_t effective[16], key[16] = {0}, cipher[PageBytes], plain[PageBytes];
    for (unsigned i = 0; i < 16; i++)
        effective[i] = fixed[i] ^ ((const uint8_t *)mask.bytes)[i];
    CCCryptorRef wrapper = NULL;
    Check(CCCryptorCreate(kCCEncrypt, kCCAlgorithmAES, kCCOptionECBMode, effective, 16, NULL,
                          &wrapper) == kCCSuccess,
          @"Cannot create page-key cipher");
    Wipe(effective, sizeof(effective));
    @try {
        for (uint64_t page = 0; page < pages; page++) {
            CheckCancelled();
            const uint8_t *record = records + page * 32;
            uint64_t offset = slice.base + cryptOffset + page * PageBytes;
            DerivePageKey(wrapper, record, offset, key);
            ReadAt(fd, cipher, sizeof(cipher), offset);
            size_t written = 0;
            Check(CCCrypt(kCCDecrypt, kCCAlgorithmAES, 0, key, 16, record + 16, cipher,
                          sizeof(cipher), plain, sizeof(plain), &written) == kCCSuccess &&
                      written == sizeof(plain),
                  @"Page AES failed");
            WriteAt(fd, plain, sizeof(plain), offset);
        }
        uint32_t zero = 0;
        WriteAt(fd, &zero, sizeof(zero), slice.base + idOffset);
        totals->images++;
        totals->pages += pages;
    } @finally {
        CCCryptorRelease(wrapper);
        Wipe(key, sizeof(key));
        Wipe(plain, sizeof(plain));
    }
}

static bool IsMachO(const uint8_t *p, size_t n) {
    if (n < 4)
        return false;
    uint32_t le = LE32(p), be = BE32(p);
    return le == 0xfeedface || le == 0xfeedfacf || be == 0xfeedface || be == 0xfeedfacf ||
           le == 0xcafebabe || le == 0xcafebabf || be == 0xcafebabe || be == 0xcafebabf;
}
static void DecryptMachO(int fd, uint64_t size, NSString *member, NSDictionary *licenses,
                         NSDictionary *supfs, Totals *totals) {
    uint8_t head[8];
    Check(size >= 8, @"Truncated Mach-O");
    ReadAt(fd, head, 8, 0);
    uint32_t be = BE32(head), le = LE32(head);
    bool fat = be == 0xcafebabe || be == 0xcafebabf || le == 0xcafebabe || le == 0xcafebabf;
    if (!fat) {
        DecryptSlice(fd, (Slice){0, size, 0, 0}, member, licenses, supfs, totals);
        return;
    }
    bool big = be == 0xcafebabe || be == 0xcafebabf, wide = (big ? be : le) == 0xcafebabf;
    uint32_t count = big ? BE32(head + 4) : LE32(head + 4);
    size_t recordBytes = wide ? 32 : 20;
    Check(count > 0 && count <= 128 && 8 + (uint64_t)count * recordBytes <= size,
          @"Invalid fat Mach-O header");
    NSData *table = ReadRange(fd, 8, count * recordBytes);
    const uint8_t *bytes = table.bytes;
    Slice slices[128];
    for (uint32_t i = 0; i < count; i++) {
        const uint8_t *p = bytes + i * recordBytes;
        uint64_t offset =
            wide ? (big ? BE64(p + 8) : LE64(p + 8)) : (big ? BE32(p + 8) : LE32(p + 8));
        uint64_t length =
            wide ? (big ? BE64(p + 16) : LE64(p + 16)) : (big ? BE32(p + 12) : LE32(p + 12));
        Check(offset >= 8 + (uint64_t)count * recordBytes && offset <= size && length >= 28 &&
                  length <= size - offset,
              @"Invalid fat slice bounds");
        for (uint32_t j = 0; j < i; j++)
            Check(offset + length <= slices[j].base || slices[j].base + slices[j].size <= offset,
                  @"Overlapping fat slices");
        slices[i] =
            (Slice){offset, length, big ? BE32(p) : LE32(p), big ? BE32(p + 4) : LE32(p + 4)};
    }
    for (uint32_t i = 0; i < count; i++)
        DecryptSlice(fd, slices[i], member, licenses, supfs, totals);
}

static struct archive *OpenZIP(int fd) {
    Check(lseek(fd, 0, SEEK_SET) == 0, @"Cannot rewind input IPA");
    struct archive *a = archive_read_new();
    Check(a != NULL, @"Cannot allocate ZIP reader");
    archive_read_support_filter_none(a);
    archive_read_support_format_zip(a);
    if (archive_read_open_fd(a, fd, BufferBytes) != ARCHIVE_OK) {
        NSString *error = @(archive_error_string(a) ? archive_error_string(a) : "ZIP open failed");
        archive_read_free(a);
        Fail(@"%@", error);
    }
    return a;
}
static NSString *EntryPath(struct archive_entry *entry) {
    const char *raw = archive_entry_pathname_utf8(entry);
    Check(raw != NULL, @"ZIP contains a non-UTF-8 path");
    NSString *path = @(raw);
    Check(path.length && path.length <= 4096 && ![path hasPrefix:@"/"] &&
              [path rangeOfString:@"\\"].location == NSNotFound,
          @"Unsafe ZIP path");
    NSArray *parts = [path componentsSeparatedByString:@"/"];
    for (NSUInteger i = 0; i < parts.count; i++)
        Check(![parts[i] isEqualToString:@".."] && ![parts[i] isEqualToString:@"."] &&
                  ([parts[i] length] || i == parts.count - 1),
              @"Unsafe ZIP path");
    return path;
}
static bool AcceptEntry(struct archive_entry *entry, NSString *path, NSMutableDictionary *seen) {
    mode_t type = archive_entry_filetype(entry);
    Check(type == AE_IFREG || type == AE_IFDIR || type == AE_IFLNK,
          @"Unsupported ZIP entry type: %@", path);
    Check(archive_entry_hardlink(entry) == NULL, @"Hard links unsupported in IPA");
    Check(archive_entry_size(entry) >= 0, @"Invalid ZIP entry size");
    Check(type != AE_IFDIR || archive_entry_size(entry) == 0, @"Directory entry contains data");
    Check(![path hasSuffix:@"/"] || type == AE_IFDIR, @"Non-directory path ends in slash");
    NSString *key = [path hasSuffix:@"/"] ? [path substringToIndex:path.length - 1] : path;
    if (seen[key]) {
        Check([seen[key] unsignedIntValue] == AE_IFDIR && type == AE_IFDIR,
              @"Duplicate ZIP file: %@", path);
        return false;
    }
    seen[key] = @(type);
    return true;
}
static NSData *ReadMetadata(struct archive *a, uint64_t expected) {
    Check(expected <= MetadataLimit, @"License metadata too large");
    NSMutableData *data = [NSMutableData dataWithLength:(NSUInteger)expected];
    size_t offset = 0;
    while (offset < data.length) {
        CheckCancelled();
        la_ssize_t n =
            archive_read_data(a, (uint8_t *)data.mutableBytes + offset, data.length - offset);
        Check(n > 0, @"Truncated metadata or ZIP CRC error: %s", archive_error_string(a));
        offset += (size_t)n;
    }
    uint8_t extra;
    Check(archive_read_data(a, &extra, 1) == 0, @"Invalid metadata size or ZIP CRC");
    return data;
}
static void ArchiveWrite(struct archive *a, const void *data, size_t size) {
    const uint8_t *p = data;
    while (size) {
        CheckCancelled();
        la_ssize_t n = archive_write_data(a, p, size);
        Check(n > 0, @"ZIP write failed: %s", archive_error_string(a));
        p += n;
        size -= (size_t)n;
    }
}

static NSString *CreateTemporary(NSString *directory, int *fd) {
    char *name = strdup([[directory stringByAppendingPathComponent:@".momos-XXXXXX"]
        fileSystemRepresentation]);
    Check(name != NULL, @"Out of memory");
    int created = mkstemp(name), error = errno;
    if (created < 0) {
        free(name);
        Fail(@"Cannot create private temporary file: %s", strerror(error));
    }
    NSString *path = @(name);
    free(name);
    *fd = created;
    return path;
}

static Totals DecryptArchive(NSString *input, NSString *output, const Model *model) {
    NSMutableDictionary *licenses = [NSMutableDictionary dictionary],
                        *supfs = [NSMutableDictionary dictionary];
    struct archive *reader = NULL, *writer = NULL;
    int inputFD = -1, outputFD = -1, spoolFD = -1;
    NSString *temporary = nil, *spool = nil;
    Totals totals = {0};
    @try {
        struct stat st;
        Check(lstat(output.fileSystemRepresentation, &st) != 0 && errno == ENOENT,
              @"Output already exists or cannot be inspected");
        inputFD = open(input.fileSystemRepresentation, O_RDONLY | O_CLOEXEC);
        Check(inputFD >= 0, @"Cannot open input IPA: %s", strerror(errno));
        struct stat initial;
        Check(fstat(inputFD, &initial) == 0 && S_ISREG(initial.st_mode),
              @"Input IPA must be a regular file");
        reader = OpenZIP(inputFD);
        struct archive_entry *entry;
        int status;
        NSMutableDictionary *seen = [NSMutableDictionary dictionary];
        uint64_t metadataBytes = 0, totalBytes = 0, largest = 0;
        while ((status = archive_read_next_header(reader, &entry)) == ARCHIVE_OK) {
            @autoreleasepool {
                NSString *path = EntryPath(entry);
                if (!AcceptEntry(entry, path, seen)) {
                    archive_read_data_skip(reader);
                    continue;
                }
                uint64_t size = (uint64_t)archive_entry_size(entry);
                Check(size <= (16ULL << 30) && totalBytes <= (64ULL << 30) - size,
                      @"IPA exceeds processing size limit");
                totalBytes += size;
                largest = MAX(largest, size);
                bool regular = archive_entry_filetype(entry) == AE_IFREG;
                bool info = [[path.stringByDeletingLastPathComponent lastPathComponent]
                    isEqualToString:@"SC_Info"];
                if (regular && info && ([path hasSuffix:@".sinf"] || [path hasSuffix:@".supf"])) {
                    Check(size <= MetadataLimit && metadataBytes <= MetadataLimit - size,
                          @"IPA has excessive license metadata");
                    metadataBytes += size;
                    NSData *data = ReadMetadata(reader, size);
                    if ([path hasSuffix:@".sinf"])
                        licenses[path] = DecodeLicense(data, model);
                    else
                        supfs[path] = data;
                } else
                    Check(archive_read_data_skip(reader) == ARCHIVE_OK, @"ZIP skip failed");
            }
        }
        Check(status == ARCHIVE_EOF, @"ZIP read failed: %s", archive_error_string(reader));
        Check(licenses.count && supfs.count, @"IPA lacks SINF/SUPF metadata");
        archive_read_free(reader);
        reader = NULL;
        NSString *parent = output.stringByDeletingLastPathComponent;
        struct statfs space;
        Check(statfs(parent.fileSystemRepresentation, &space) == 0,
              @"Output directory does not exist");
        Check((uint64_t)space.f_bavail * (uint64_t)space.f_bsize >
                  totalBytes + largest + (64ULL << 20),
              @"Insufficient free space for safe temporary processing");
        temporary = CreateTemporary(parent, &outputFD);
        spool = CreateTemporary(parent, &spoolFD);
        writer = archive_write_new();
        Check(writer != NULL, @"Cannot allocate ZIP writer");
        Check(archive_write_set_format_zip(writer) == ARCHIVE_OK &&
                  archive_write_set_format_option(writer, "zip", "compression", "deflate") ==
                      ARCHIVE_OK,
              @"Cannot configure ZIP writer");
        Check(archive_write_open_fd(writer, outputFD) == ARCHIVE_OK, @"Cannot open ZIP output");
        reader = OpenZIP(inputFD);
        [seen removeAllObjects];
        uint8_t buffer[BufferBytes];
        while ((status = archive_read_next_header(reader, &entry)) == ARCHIVE_OK) {
            @autoreleasepool {
                CheckCancelled();
                NSString *path = EntryPath(entry);
                if (!AcceptEntry(entry, path, seen)) {
                    archive_read_data_skip(reader);
                    continue;
                }
                uint64_t expected = (uint64_t)archive_entry_size(entry);
                if (archive_entry_filetype(entry) != AE_IFREG) {
                    Check(expected == 0, @"Non-file ZIP entry contains data");
                    Check(archive_write_header(writer, entry) == ARCHIVE_OK,
                          @"ZIP header write failed");
                    Check(archive_read_data_skip(reader) == ARCHIVE_OK, @"ZIP skip failed");
                    continue;
                }
                size_t prefix = 0;
                while (prefix < 32 && prefix < expected) {
                    la_ssize_t n = archive_read_data(reader, buffer + prefix,
                                                     (size_t)MIN(32 - prefix, expected - prefix));
                    Check(n > 0, @"Truncated ZIP member: %@", path);
                    prefix += (size_t)n;
                }
                bool macho = IsMachO(buffer, prefix);
                uint64_t bytes = prefix;
                if (macho) {
                    Check(ftruncate(spoolFD, 0) == 0, @"Cannot reset spool");
                    WriteAt(spoolFD, buffer, prefix, 0);
                } else {
                    Check(archive_write_header(writer, entry) == ARCHIVE_OK,
                          @"ZIP header write failed: %s", archive_error_string(writer));
                    ArchiveWrite(writer, buffer, prefix);
                }
                la_ssize_t n;
                while ((n = archive_read_data(reader, buffer, sizeof(buffer))) > 0) {
                    Check(bytes <= expected && (uint64_t)n <= expected - bytes,
                          @"ZIP member exceeds declared size");
                    if (macho)
                        WriteAt(spoolFD, buffer, (size_t)n, bytes);
                    else
                        ArchiveWrite(writer, buffer, (size_t)n);
                    bytes += (uint64_t)n;
                }
                Check(n == 0 && bytes == expected, @"ZIP CRC/read error for %@: %s", path,
                      archive_error_string(reader));
                if (macho) {
                    DecryptMachO(spoolFD, bytes, path, licenses, supfs, &totals);
                    Check(archive_write_header(writer, entry) == ARCHIVE_OK,
                          @"ZIP header write failed");
                    for (uint64_t offset = 0; offset < bytes;) {
                        size_t chunk = (size_t)MIN(sizeof(buffer), bytes - offset);
                        ReadAt(spoolFD, buffer, chunk, offset);
                        ArchiveWrite(writer, buffer, chunk);
                        offset += chunk;
                    }
                }
                Check(archive_write_finish_entry(writer) == ARCHIVE_OK, @"Cannot finish ZIP entry");
            }
        }
        Check(status == ARCHIVE_EOF, @"ZIP read failed: %s", archive_error_string(reader));
        Check(totals.images > 0, @"No encrypted ARM64 images found");
        struct stat final;
        Check(fstat(inputFD, &final) == 0 && initial.st_size == final.st_size &&
                  initial.st_mtimespec.tv_sec == final.st_mtimespec.tv_sec &&
                  initial.st_mtimespec.tv_nsec == final.st_mtimespec.tv_nsec &&
                  initial.st_ctimespec.tv_sec == final.st_ctimespec.tv_sec &&
                  initial.st_ctimespec.tv_nsec == final.st_ctimespec.tv_nsec,
              @"Input IPA changed during processing");
        archive_read_free(reader);
        reader = NULL;
        Check(archive_write_close(writer) == ARCHIVE_OK, @"Cannot finish ZIP output: %s",
              archive_error_string(writer));
        archive_write_free(writer);
        writer = NULL;
        Check(fsync(outputFD) == 0, @"Cannot flush output");
        close(outputFD);
        outputFD = -1;
        CheckCancelled();
        Check(link(temporary.fileSystemRepresentation, output.fileSystemRepresentation) == 0,
              @"Cannot publish output without overwriting: %s", strerror(errno));
    } @finally {
        if (reader)
            archive_read_free(reader);
        if (writer)
            archive_write_free(writer);
        if (inputFD >= 0)
            close(inputFD);
        if (outputFD >= 0)
            close(outputFD);
        if (spoolFD >= 0)
            close(spoolFD);
        if (spool)
            unlink(spool.fileSystemRepresentation);
        if (temporary)
            unlink(temporary.fileSystemRepresentation);
        for (NSMutableData *mask in licenses.allValues)
            Wipe(mask.mutableBytes, mask.length);
    }
    return totals;
}
static NSString *AbsolutePath(NSString *path) {
    if (!path.isAbsolutePath)
        path =
            [NSFileManager.defaultManager.currentDirectoryPath stringByAppendingPathComponent:path];
    return path.stringByStandardizingPath;
}
static void Usage(void) {
    puts("Usage: momos --model FILE INPUT.ipa OUTPUT.ipa\n"
         "Offline ARM64/arm64e/arm64_32 IPA decryption using a matching FPSENR2 model.\n"
         "--model FILE is required; the model must have owner-only permissions (0600).\n"
         "--help (-h) shows this help; --version prints the version.\n"
         "SINF/SUPF and encrypted CodeDirectory hashes are checked. Originals are\n"
         "never modified; existing output is refused. Output requires re-signing.");
}
int main(int argc, const char *argv[]) {
    @autoreleasepool {
        Model model = {0};
        int result = 1;
        signal(SIGINT, Cancel);
        signal(SIGTERM, Cancel);
        umask(077);
        @try {
            NSMutableArray<NSString *> *paths = [NSMutableArray array];
            NSString *modelPath = nil;
            bool positional = false;
            for (int i = 1; i < argc; i++) {
                NSString *arg = @(argv[i]);
                if (!positional && [arg isEqualToString:@"--"]) {
                    positional = true;
                    continue;
                }
                if (!positional &&
                    ([arg isEqualToString:@"--help"] || [arg isEqualToString:@"-h"])) {
                    Usage();
                    return 0;
                }
                if (!positional && [arg isEqualToString:@"--version"]) {
                    printf("momos %s\n", MOMOS_VERSION);
                    return 0;
                }
                if (!positional && [arg isEqualToString:@"--model"]) {
                    Check(++i < argc && !modelPath, @"--model requires one file");
                    modelPath = @(argv[i]);
                    continue;
                }
                Check(positional || ![arg hasPrefix:@"-"], @"Unknown option: %@", arg);
                [paths addObject:arg];
            }
            if (paths.count != 2) {
                Usage();
                return 2;
            }
            Check(modelPath.length > 0, @"Missing required --model FILE");
            LoadModel(AbsolutePath(modelPath), &model);
            Totals totals = DecryptArchive(AbsolutePath(paths[0]), AbsolutePath(paths[1]), &model);
            printf("Decrypted %llu images / %llu pages; %llu source signature slots verified.\n",
                   (unsigned long long)totals.images, (unsigned long long)totals.pages,
                   (unsigned long long)totals.signatureSlots);
            result = 0;
        } @catch (NSException *error) {
            fprintf(stderr, "momos: %s\n", error.reason.UTF8String);
            if (cancelled)
                result = 128 + cancelled;
        } @finally {
            Wipe(&model, sizeof(model));
        }
        return result;
    }
}
