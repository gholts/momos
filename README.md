# momos

Offline IPA decryption and enrollment export for macOS 15+ on Apple Silicon.
Enrollment requires a Mac already authorized for the app's Apple account.

```sh
brew install --HEAD gholts/tap/momos
sudo momos enroll input.ipa ~/momos-enrollment.bin
momos --model ~/momos-enrollment.bin input.ipa output.ipa
```

Keep enrollment files private and outside repositories. Exports use `0600`.
Inputs stay untouched; existing outputs are refused.
Decrypted apps need re-signing and may not launch.

## Build

Install Xcode Command Line Tools, then run `make -j4`.
`make install PREFIX=/path` installs the CLI and shell completions.

## Release

Run **Release** manually in GitHub Actions. Copy the generated `momos.rb` to
[the tap](https://github.com/gholts/homebrew-tap).

Copyright 2026 gholts. [Apache-2.0](LICENSE) ·
[Third-party notices](THIRD-PARTY-NOTICES.txt) · [Recovery notes](recovery/PROVENANCE.md)
