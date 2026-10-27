# Recovery notes

Native C derived from [unfairplay](https://github.com/DrWhax/unfairplay/tree/6022acd8b694be578bf92edf51173bda67b9f65c)
and the 26A428 ARM64 reference image. See [notices](../THIRD-PARTY-NOTICES.txt).

`data.gz`: 964 whole 4 KiB pages—472 upstream public pages plus static image
data and zero pages. SINF constants are public; account data stays external.

SHA-256:

- Reference image: `1e58d37e9602dd0ca5e24b14762063b6c310248b4d3a94272771d815e4ea1784`
- `data.gz`: `d9333c0e7ff41db86585354bce80d99db1392d62550f97465501b4504603339f`

`--capture DIR` reads `fpsd/` and `shared/` containing existing
`SC Info.sidb`, `SC Info.sidd`, and `SC Info.sids`, plus six-byte `iomac.bin`.
All capture files and directories must be owner-only and belong to the caller.

Enrollment is validated on one Mac. Unsupported layouts fail without output.
Recovery uses a temporary SINF request with the original media type and native
mode `0x1000`. Original selectors and encrypted payload stay intact; the original
SINF validates the result before the model is written.
Decryption checks encrypted-code hashes, not Apple signature trust.
