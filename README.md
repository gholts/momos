# momos

Offline IPA decryption for macOS 15+ on Apple Silicon. Native Objective-C;
uses Apple's system crypto and archive libraries.

```sh
brew install gholts/tap/momos
momos --model /private/path/enrollment.bin input.ipa output.ipa
```

Until the first release formula is published, install with `--HEAD`.
Bash, zsh, and fish completions are included.

A matching, owner-only (`chmod 600`) FPSENR2 enrollment model is required.
Models are neither supplied nor recovered by this tool. Keep them outside
this repository. Existing outputs are refused; inputs remain untouched.
Decrypted apps need re-signing. Launch compatibility is not guaranteed.

## Build

With Xcode Command Line Tools installed:

```sh
make
```

Builds and decryption work offline.
`make install PREFIX=/path` installs the CLI and completions.

## Release

Run **Release** manually in GitHub Actions with a version such as `v0.1.0`.
It builds the selected commit, then publishes an ARM64 archive, checksums, and
`momos.rb`. Copy that formula into
[the tap](https://github.com/gholts/homebrew-tap).
No workflow runs on pushes, pull requests, or a schedule.

Copyright 2026 gholts. [Apache-2.0](LICENSE).
See [third-party notices](THIRD-PARTY-NOTICES.txt) for upstream MIT code
and BSD-2-Clause headers. Source checks validate encrypted CodeDirectory hashes,
not Apple CMS trust or the signatures of the decrypted output.
