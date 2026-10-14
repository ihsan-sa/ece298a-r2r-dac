#!/usr/bin/env bash
# The fast check for this repo. GitHub runs it as the `check` job on every pull
# request and every push to main, and you can run the same thing locally:
#
#   bash tests/check.sh
#
# It needs Icarus Verilog (iverilog) on PATH and python3 with PyYAML. It runs:
#   1. A lint of the Verilog: the DAC's digital RTL on its own, and the Tiny
#      Tapeout top with its RTL and the analog macro's stub, each compile under
#      iverilog -Wall, and any warning fails the check.
#   2. tests/check_netlists.py: the analog netlist, testbenches, bounds and
#      spec files are well formed (no PDK or simulator needed).
# The SPICE corners, formal proof, hardening, DRC, LVS and the Tiny Tapeout
# precheck still run on their own.
set -euo pipefail
root=$(cd "$(dirname "$0")/.." && pwd)
cd "$root"

for tool in python3 iverilog; do
  if ! command -v "$tool" >/dev/null; then
    echo "check: $tool is not on PATH; see the top of tests/check.sh" >&2
    exit 2
  fi
done

lint() {
  local name=$1; shift
  local out
  out=$(iverilog -g2012 -Wall -t null "$@" 2>&1) || { echo "$out"; echo "lint: iverilog failed on $name"; exit 1; }
  if [ -n "$out" ]; then
    echo "$out"
    echo "lint: iverilog printed warnings on $name, and a warning fails the check"
    exit 1
  fi
  echo "lint: ok, $name"
}

echo "== 1/2 lint (iverilog -Wall)"
block=blocks/r2r_dac
shopt -s nullglob
rtl=("$block"/digital/rtl/*.v)
top=("$block"/top/harden/tt_um_*.v "$block"/top/rtl/*.v "$block"/top/macros/*.v)
if [ ${#rtl[@]} -eq 0 ] || [ ! -f "$block/top/harden/tt_um_r2r_dac_digital.v" ]; then
  echo "lint: the DAC's digital RTL or its Tiny Tapeout top is missing under $block"
  exit 1
fi
lint "the DAC digital RTL" "${rtl[@]}"
lint "the Tiny Tapeout top with the analog macro stub" "${top[@]}"

echo "== 2/2 analog netlists and specs"
python3 tests/check_netlists.py
echo "check: ok"
