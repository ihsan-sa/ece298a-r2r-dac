# Staged Tiny Tapeout project files

Drafts of the root files the Tiny Tapeout analog template expects, for the goal "Make the repository build as a Tiny Tapeout analog project" in `GOALS.md`. They sit here, not at the root, because `tests/check_tt_project.py` starts requiring the whole project (GDS and LEF included) as soon as a root `info.yaml` exists, and a dispatch run can't copy the binaries.

What is here:

- `info.yaml`: the project metadata and pinout. `top_module`, `tiles` and `analog_pins` are the hardened tile's (`blocks/r2r_dac/top/harden/info.yaml`). `author` is left blank for the owner.
- `docs/info.md`: the datasheet page (how it works, how to test, external hardware), drawn from `docs/design.md`.

To land the project, from the repository root, in one commit:

```sh
git mv tt_project/info.yaml info.yaml
git mv tt_project/docs/info.md docs/info.md
mkdir -p src gds lef
cp blocks/r2r_dac/top/harden/tt_um_r2r_dac_digital.v src/project.v
cp blocks/r2r_dac/top/rtl/r2r_dac_digital.v src/r2r_dac_digital.v
cp blocks/r2r_dac/top/macros/r2r_dac_analog.v src/r2r_dac_analog.v
cp blocks/r2r_dac/top/harden/runs/run/final/gds/tt_um_r2r_dac_digital.gds gds/
cp blocks/r2r_dac/top/harden/runs/run/final/lef/tt_um_r2r_dac_digital.lef lef/
git rm tt_project/README.md
python3 tests/check_tt_project.py
```

Then add the template's gds and docs workflows under `.github/workflows/` (and anything else the template's current release requires, such as its `.gitignore` entries), fill in `author`, and check the `info.yaml` field names against the template's own. The last command should print `tt project: ok`.
