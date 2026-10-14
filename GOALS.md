# ece298a-r2r-dac goals

This repository is an R-2R DAC for ECE 298A (Integrated Circuit Design and Tapeout) at the University of Waterloo: an 8-bit R-2R ladder of GF180 poly resistors switched by standard-cell drivers at 3.3 V, on one Tiny Tapeout analog tile, with a small digital front end that holds a code register, a ramp mode and a 256-entry sine-table mode. Its analog half lives in `blocks/r2r_dac/analog`, its digital half in `blocks/r2r_dac/digital`, and the hardened tile in `blocks/r2r_dac/top`. `bash tests/check.sh` is the fast check every pull request has to pass. This is coursework, so runs never submit anything to a course system.

## Commands a run may use

Besides `bash tests/check.sh` and git, a run here may run the chip flow's own scripts. Type each one as its own command, with no `cd`, `&&`, pipe, redirect or variable in front, starting with exactly the words shown, because the engine allows these and nothing else:

- `/opt/chip-flow/bin/eda python /opt/chip-flow/engine/scripts/state.py resume` says where a workspace stands.
- `/opt/chip-flow/bin/eda python /opt/chip-flow/engine/scripts/design_doc.py --workspace blocks/r2r_dac` builds the design document.

`CHIP_FLOW_HOME` and `EDA_TOOLCHAIN` are already set for the run, and one command may run for up to 45 minutes. A run never records a sign-off. Recording one (`state.py human`) is a person's step, taken from the owner's own words in the thread.

## Proposed goals

Filed by runs. Each says what done looks like as something a run can check, and keeps its status (open, done, failed, dropped) with the pull requests that moved it. At most three are open at once.

### Make the repository build as a Tiny Tapeout analog project

- **Serves:** the repository's purpose as the intro above states it (a DAC on one Tiny Tapeout analog tile); GOALS.md has no `## Standing goals` section to name.
- **What:** The tile is hardened by the design flow under `blocks/r2r_dac/top`, but the repository has none of the files the Tiny Tapeout analog template expects at its root (`info.yaml`, `src/`, `docs/info.md`, `gds/`, `lef/`, the gds and docs workflows). Add them from the released tile, importing the template rather than forking it, so GitHub builds and checks the same tile the flow signed off.
- **Done when:** `git cat-file -e origin/main:info.yaml` succeeds and `bash tests/check.sh` and `python3 tests/check_tt_project.py` both pass on main. The second is a standalone check, not yet a step of `tests/check.sh` (wiring it into the CI script is the owner's call); it skips until a root `info.yaml` exists, and from then on it requires `docs/info.md`, a `src/*.v` declaring `tt_um_r2r_dac_digital`, `lef/tt_um_r2r_dac_digital.lef`, and `gds/tt_um_r2r_dac_digital.gds` byte for byte equal to the signed-off `blocks/r2r_dac/top/harden/runs/run/final/gds/tt_um_r2r_dac_digital.gds`, with `top_module`, `tiles` and `analog_pins` matching `blocks/r2r_dac/top/harden/info.yaml`. The template's own gds and docs workflows passing on main is the rest of done, and a run can't see that; the owner confirms it.
- **Blocked on:** the GDS and LEF are binaries a run can't copy (it has only Edit/Write and `git add -A`/`git commit`), and all the root files have to land together once `info.yaml` exists. So the owner, or a run allowed `cp`, makes the commit that adds them. `info.yaml` and `docs/info.md` are drafted under `tt_project/`, and `tt_project/README.md` lists the moves and copies that land the project in one commit (the `src/` files are copies of the hardened top, its RTL and the analog stub, so they aren't drafted).
- **Status:** open
- **Pull requests:** [#13](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/13) adds the check; the one for [issue #15](https://github.com/ihsan-sa/ece298a-r2r-dac/issues/15) stages the root files

## Later

Goals waiting for an open slot. When a proposed goal closes, the run that closed it moves the top one here up into Proposed goals as open.

None waiting.

## Closed

What has landed, from the git history (a line per PR), and the proposed goals that are done.

### Bring main up to the DAC's current state

- **Status:** done
- **Done when:** `git diff --quiet origin/track/r2r-dac origin/main -- blocks/r2r_dac ':!**/state_snapshots/**' ':!**/__pycache__/**' ':!**/harden/runs/run/[0-9]*/**' ':!**/harden/runs/run/tmp/**'` succeeds, and it did on 2026-10-14 (run for issue #12). `bash tests/check.sh` can't run on the dispatch worker (no iverilog), so its pass on main rests on the `check` job that runs on every push to main.
- **Pull requests:** [#4](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/4) sized the gap, [#7](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/7) made the sync

### Release the R-2R DAC and write its design document

- **Status:** done
- **Done when:** `git cat-file -e origin/main:docs/signoffs.md` and `git cat-file -e origin/main:docs/design.md` both succeed, and they did on 2026-10-14 (run for issue #12). The three H2 sign-offs are also in the flow's `state.json` files since #7.
- **Pull requests:** [#9](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/9) recorded the sign-offs, [#7](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/7) put them in the flow's state, [#11](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/11) added the design document

### Pull requests

- [#1](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/1) R-2R DAC: second shakedown round on the analog tile
- [#2](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/2) Add a check workflow and GOALS.md for the dispatch engine
- [#4](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/4) GOALS: record main-sync scratch list, check command, blocker
- [#7](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/7) Bring main up to track/r2r-dac and record the owner's three sign-offs
- [#9](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/9) Record owner's H2 sign-offs for tile, analog and digital
- [#11](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/11) Add the R-2R DAC design document and make its goal checkable
- [#13](https://github.com/ihsan-sa/ece298a-r2r-dac/pull/13) Close sync and release goals; add Tiny Tapeout project check
