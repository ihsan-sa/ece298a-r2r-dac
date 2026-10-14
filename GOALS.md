# ece298a-r2r-dac goals

This repository is an R-2R DAC for ECE 298A (Integrated Circuit Design and Tapeout) at the University of Waterloo: an 8-bit R-2R ladder of GF180 poly resistors switched by standard-cell drivers at 3.3 V, on one Tiny Tapeout analog tile, with a small digital front end that holds a code register, a ramp mode and a 256-entry sine-table mode. Its analog half lives in `blocks/r2r_dac/analog`, its digital half in `blocks/r2r_dac/digital`, and the hardened tile in `blocks/r2r_dac/top`. `bash tests/check.sh` is the fast check every pull request has to pass. This is coursework, so runs never submit anything to a course system.

## Proposed goals

Filed by runs. Each says what done looks like as something a run can check, and keeps its status (open, done, failed, dropped) with the pull requests that moved it. At most three are open at once.

### Bring main up to the DAC's current state

- **Status:** open
- **What:** Main still holds the second shakedown round from [#1](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/1). The work since then, about 80 commits that take the DAC through hardening, DRC, LVS and the Tiny Tapeout precheck, sits on the `track/r2r-dac` branch. Open one pull request that brings that branch's tree onto main, check that what it carries matches what the recorded gate reports describe, and leave out anything that only the flow's scratch runs need. Runs start from main, so until this lands they work from a stale design.
- **Done when:** main's tree under `blocks/r2r_dac` matches the last commit of `track/r2r-dac`, less any scratch the pull request names as left out, and `bash tests/check.sh` passes on main. With the scratch named below, that is `git diff --quiet origin/track/r2r-dac origin/main -- blocks/r2r_dac ':!**/state_snapshots/**' ':!**/__pycache__/**' ':!**/harden/runs/run/[0-9]*/**' ':!**/harden/runs/run/tmp/**'`.
- **Scratch to leave out** (run 3, 2026-10-14, against `track/r2r-dac` at `dff4609`): of the 8,324 files that differ under `blocks/r2r_dac`, most are flow scratch: `digital/state_snapshots/` (four pre-fix-timing copies of the harden run), `__pycache__/`, and the numbered step directories and `tmp/` under each `harden/runs/run/`. Keep `harden/runs/run/final/`, because the tile's signed-off GDS, LEF and netlist live only there (`top/harden/runs/run/final/gds/tt_um_r2r_dac_digital.gds`), and keep `flow.log` and `resolved.json` beside it. With those left out, 710 files still differ, the recorded gate reports under `reports/recorded/` among them.
- **Blocked on:** a dispatch run can't take this step. It may run only `bash tests/check.sh`, `git add -A` and `git commit`, so it can't `git checkout origin/track/r2r-dac -- blocks/r2r_dac` or `git rm` the scratch, and Edit/Write can't carry the GDS binaries. The owner, or a run allowed those two git commands, has to make the sync commit.
- **Pull requests:** none yet

### Release the R-2R DAC and write its design document

- **Status:** open, waiting on the owner's sign-offs
- **What:** Every check on the DAC passes, including hardening, DRC, LVS and the Tiny Tapeout precheck. Its release waits on three sign-offs from the owner, one each for the whole tile, its analog half and its digital half, and the design document comes only after them. They have been asked for, and his answers arrive as asks. A run records each answer as he gave it and never records a sign-off he hasn't given. Once all three are in, the run records them in this repository and writes the design document: what the DAC does, how the ladder and its drivers were sized, the DNL, INL, settling and glitch results over the corners with the worst corner named, and how the tile was verified.
- **Done when:** the three sign-offs are recorded in this repository, and its design document is on main.
- **Pull requests:** none yet

## Later

Goals waiting for an open slot. When a proposed goal closes, the run that closed it moves the top one here up into Proposed goals as open.

### Make the repository build as a Tiny Tapeout analog project

- **Status:** proposed
- **What:** The tile is hardened by the design flow under `blocks/r2r_dac/top`, but the repository has none of the files the Tiny Tapeout analog template expects at its root (`info.yaml`, `src/`, `docs/info.md`, the gds and docs workflows). Add them from the released tile, importing the template rather than forking it, so GitHub builds and checks the same tile the flow signed off.
- **Done when:** the root holds the Tiny Tapeout analog project files for this tile, and the template's gds and docs workflows pass on main.

## Closed

What has landed, from the git history (a line per PR).

- [#1](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/1) R-2R DAC: second shakedown round on the analog tile
