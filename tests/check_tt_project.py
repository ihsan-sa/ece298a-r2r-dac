#!/usr/bin/env python3
"""Check the Tiny Tapeout analog project files at the repository root.

Run from the repository root: python3 tests/check_tt_project.py. It is not yet
a step of tests/check.sh; wiring it in is left to the owner. Until there is an
info.yaml at the root it prints that it skipped and exits 0, without needing
PyYAML. Once there is one, it needs PyYAML, and the project has to be whole and
has to be the tile the flow signed off under blocks/r2r_dac/top:
  - info.yaml parses, and its top_module, tiles and analog_pins match
    blocks/r2r_dac/top/harden/info.yaml;
  - docs/info.md exists;
  - a .v file under src/ declares the top module;
  - gds/<top>.gds and lef/<top>.lef exist, the signed-off GDS exists in
    blocks/r2r_dac/top/harden/runs/run/final/gds/, and the root GDS is byte
    for byte that one.

Prints one line and exits 0 when all is sound; prints each problem and exits 1.
"""
import re
import sys
from pathlib import Path

TILE = Path("blocks/r2r_dac/top/harden")
KEYS = ("top_module", "tiles", "analog_pins")


def main() -> int:
    info = Path("info.yaml")
    if not info.is_file():
        print("tt project: skipped, no info.yaml at the root yet")
        return 0
    try:
        import yaml
    except ImportError:
        print("tt project: info.yaml exists but PyYAML is not installed, so it can't be checked")
        return 1

    problems = []
    try:
        project = (yaml.safe_load(info.read_text()) or {}).get("project") or {}
    except yaml.YAMLError as err:
        print(f"tt project: info.yaml does not parse ({str(err).splitlines()[0]})")
        return 1
    tile = yaml.safe_load((TILE / "info.yaml").read_text())["project"]
    for key in KEYS:
        if str(project.get(key)) != str(tile[key]):
            problems.append(f"info.yaml: {key} is {project.get(key)!r}, but the hardened tile's is {tile[key]!r}")
    top = str(tile["top_module"])

    if not Path("docs/info.md").is_file():
        problems.append("docs/info.md is missing")

    declares = re.compile(rf"^\s*module\s+{re.escape(top)}\b", re.M)
    if not any(declares.search(v.read_text()) for v in sorted(Path("src").glob("*.v"))):
        problems.append(f"no .v file under src/ declares module {top}")

    gds, lef = Path("gds") / f"{top}.gds", Path("lef") / f"{top}.lef"
    signed = TILE / "runs/run/final/gds" / f"{top}.gds"
    for path in (gds, lef):
        if not path.is_file():
            problems.append(f"{path} is missing")
    if not signed.is_file():
        problems.append(f"the signed-off {signed} is missing, so the root GDS can't be compared with it")
    elif gds.is_file() and gds.read_bytes() != signed.read_bytes():
        problems.append(f"{gds} differs from the signed-off {signed}")

    if problems:
        for p in problems:
            print(f"tt project: {p}")
        return 1
    print(f"tt project: ok ({top}, {tile['tiles']} tiles, GDS matches the signed-off tile)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
