#!/usr/bin/env python3
"""Package only public release files and emit a checksum-bound Homebrew formula."""
import gzip
import hashlib
import io
from pathlib import Path
import re
import subprocess
import sys
import tarfile

if len(sys.argv) != 3:
    raise SystemExit("usage: package.py vMAJOR.MINOR.PATCH OWNER/REPOSITORY")
tag, repository = sys.argv[1:]
if not re.fullmatch(r"v(0|[1-9][0-9]*)\.(0|[1-9][0-9]*)\.(0|[1-9][0-9]*)", tag):
    raise SystemExit("invalid release version")
if not re.fullmatch(r"[A-Za-z0-9_.-]+/[A-Za-z0-9_.-]+", repository):
    raise SystemExit("invalid GitHub repository")
root = Path(__file__).resolve().parents[1]
binary = root / "build/momos"
version = tag[1:]
if subprocess.check_output([binary, "--version"], text=True).strip() != f"momos {version}":
    raise SystemExit(f"rebuild with: make clean all VERSION={version}")
if subprocess.check_output(["lipo", "-archs", binary], text=True).strip() != "arm64":
    raise SystemExit("release binary must contain only arm64")
for line in subprocess.check_output(["otool", "-L", binary], text=True).splitlines()[1:]:
    library = line.strip().split(" (", 1)[0]
    if not library.startswith(("/usr/lib/", "/System/Library/Frameworks/")):
        raise SystemExit(f"non-system runtime dependency: {library}")

destination = root / "dist" / tag
destination.mkdir(parents=True, exist_ok=False)
asset = f"momos-{tag}-macos-arm64.tar.gz"
files = [
    ("build/momos", "momos"),
    ("LICENSE", "LICENSE"),
    ("README.md", "README.md"),
    ("THIRD-PARTY-NOTICES.txt", "THIRD-PARTY-NOTICES.txt"),
    ("completions/momos.bash", "completions/momos.bash"),
    ("completions/_momos", "completions/_momos"),
    ("completions/momos.fish", "completions/momos.fish"),
]
with (destination / asset).open("xb") as raw:
    with gzip.GzipFile(filename="", fileobj=raw, mode="wb", mtime=0) as stream:
        with tarfile.open(fileobj=stream, mode="w") as archive:
            for source, name in files:
                path = root / source
                if not path.is_file() or path.is_symlink():
                    raise SystemExit(f"invalid release input: {source}")
                data = path.read_bytes()
                info = tarfile.TarInfo(f"momos-{tag}/{name}")
                info.size = len(data)
                info.mode = 0o755 if name == "momos" else 0o644
                info.mtime = 0
                archive.addfile(info, io.BytesIO(data))
checksum = hashlib.sha256((destination / asset).read_bytes()).hexdigest()
formula = f'''class Momos < Formula
  desc "Offline IPA decryption with a local enrollment model"
  homepage "https://github.com/{repository}"
  url "https://github.com/{repository}/releases/download/{tag}/{asset}"
  sha256 "{checksum}"
  version "{version}"
  license all_of: ["Apache-2.0", "MIT", "BSD-2-Clause"]

  depends_on arch: :arm64
  depends_on macos: :sequoia

  def install
    bin.install "momos"
    bash_completion.install "completions/momos.bash" => "momos"
    zsh_completion.install "completions/_momos"
    fish_completion.install "completions/momos.fish"
    pkgshare.install "LICENSE", "THIRD-PARTY-NOTICES.txt"
  end
end
'''
(destination / "momos.rb").write_text(formula)
checksums = []
for name in (asset, "momos.rb"):
    checksums.append(f"{hashlib.sha256((destination / name).read_bytes()).hexdigest()}  {name}\n")
(destination / "SHA256SUMS").write_text("".join(checksums))
print(destination)
