#!/usr/bin/env bash
# The fast check for this repo. GitHub runs it as the `check` job on every pull
# request and every push to main, and you can run the same thing locally:
#
#   bash tests/check.sh
#
# It needs python3 with PyYAML, and Icarus Verilog: the iverilog on PATH when
# there is one (CI installs it), or else chip-flow's eda wrapper, which runs
# iverilog from the EDA toolchain ($CHIP_FLOW_HOME/bin/eda, then
# /opt/chip-flow/bin/eda). It runs:
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

if ! command -v python3 >/dev/null; then
  echo "check: python3 is not on PATH; see the top of tests/check.sh" >&2
  exit 2
fi
if command -v iverilog >/dev/null; then
  iverilog=(iverilog)
else
  iverilog=()
  for eda in ${CHIP_FLOW_HOME:+"$CHIP_FLOW_HOME/bin/eda"} /opt/chip-flow/bin/eda; do
    if [ -x "$eda" ]; then iverilog=("$eda" iverilog); break; fi
  done
  if [ ${#iverilog[@]} -eq 0 ]; then
    echo "check: iverilog is not on PATH and no chip-flow eda wrapper was found; see the top of tests/check.sh" >&2
    exit 2
  fi
  echo "check: no iverilog on PATH, so running it through ${iverilog[0]}"
fi

lint() {
  local name=$1; shift
  local out
  out=$("${iverilog[@]}" -g2012 -Wall -t null "$@" 2>&1) || { echo "$out"; echo "lint: iverilog failed on $name"; exit 1; }
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
