CC = xcrun clang
CFLAGS ?= -O2
VERSION ?= dev
ARCH ?= arm64
PREFIX ?= /usr/local
OBJCFLAGS = -fobjc-arc -Wall -Wextra -Werror -Wno-deprecated-declarations -mmacosx-version-min=15.0 -arch $(ARCH) -Ivendor
LIBS = -framework Foundation -larchive

.PHONY: all install clean
all: build/momos

build:
	mkdir -p $@

build/momos: main.m Makefile vendor/archive.h vendor/archive_entry.h | build
	$(CC) $(CPPFLAGS) $(CFLAGS) $(OBJCFLAGS) -DMOMOS_VERSION='"$(VERSION)"' main.m $(LDFLAGS) $(LIBS) -o $@

install: build/momos
	install -d "$(DESTDIR)$(PREFIX)/bin" "$(DESTDIR)$(PREFIX)/share/bash-completion/completions" "$(DESTDIR)$(PREFIX)/share/zsh/site-functions" "$(DESTDIR)$(PREFIX)/share/fish/vendor_completions.d"
	install -m 755 build/momos "$(DESTDIR)$(PREFIX)/bin/momos"
	install -m 644 completions/momos.bash "$(DESTDIR)$(PREFIX)/share/bash-completion/completions/momos"
	install -m 644 completions/_momos "$(DESTDIR)$(PREFIX)/share/zsh/site-functions/_momos"
	install -m 644 completions/momos.fish "$(DESTDIR)$(PREFIX)/share/fish/vendor_completions.d/momos.fish"

clean:
	rm -rf build
