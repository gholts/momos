CC = xcrun clang
CFLAGS ?= -O2
VERSION ?= dev
ARCH ?= arm64
PREFIX ?= /usr/local
OBJCFLAGS = -fobjc-arc -Wall -Wextra -Werror -Wno-deprecated-declarations -mmacosx-version-min=15.0 -arch $(ARCH) -Ivendor
LIBS = -framework Foundation -framework IOKit -larchive -lz
RECOVERY_SOURCES = $(wildcard recovery/native-blocks/*.c recovery/native-known/*.c) recovery/recovery.c
RECOVERY_OBJECTS = $(patsubst %.c,build/%.o,$(RECOVERY_SOURCES)) build/recovery/data.o
RECOVERY_HEADERS = $(wildcard recovery/*.h recovery/*.inc recovery/native-blocks/*.inc recovery/native-known/*.inc recovery/native-known/*.h)

.PHONY: all install clean FORCE
all: build/momos

build:
	mkdir -p $@

build/momos: main.m enroll.inc Makefile build/version vendor/archive.h vendor/archive_entry.h $(RECOVERY_OBJECTS) | build
	$(CC) $(CPPFLAGS) $(CFLAGS) $(OBJCFLAGS) -DMOMOS_VERSION='"$(VERSION)"' main.m $(RECOVERY_OBJECTS) $(LDFLAGS) $(LIBS) -o $@

build/version: FORCE | build
	@printf '%s\n' '$(VERSION)' > $@.tmp
	@cmp -s $@.tmp $@ && rm $@.tmp || mv $@.tmp $@

build/recovery/%.o: recovery/%.c $(RECOVERY_HEADERS) Makefile
	mkdir -p "$(@D)"
	$(CC) $(CPPFLAGS) $(CFLAGS) -Irecovery -std=c11 -Wall -Wextra -Werror -Wno-parentheses-equality -Wno-unused-function -Wno-unused-variable -Wno-unused-parameter -mmacosx-version-min=15.0 -arch $(ARCH) -c $< -o $@

build/recovery/data.o: recovery/data.S recovery/data.gz
	mkdir -p "$(@D)"
	$(CC) -arch $(ARCH) -c $< -o $@

install: build/momos
	install -d "$(DESTDIR)$(PREFIX)/bin" "$(DESTDIR)$(PREFIX)/share/bash-completion/completions" "$(DESTDIR)$(PREFIX)/share/zsh/site-functions" "$(DESTDIR)$(PREFIX)/share/fish/vendor_completions.d"
	install -m 755 build/momos "$(DESTDIR)$(PREFIX)/bin/momos"
	install -m 644 completions/momos.bash "$(DESTDIR)$(PREFIX)/share/bash-completion/completions/momos"
	install -m 644 completions/_momos "$(DESTDIR)$(PREFIX)/share/zsh/site-functions/_momos"
	install -m 644 completions/momos.fish "$(DESTDIR)$(PREFIX)/share/fish/vendor_completions.d/momos.fish"

clean:
	rm -rf build
