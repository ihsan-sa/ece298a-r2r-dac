# /msde shakedown: 8-bit R-2R DAC (3 rounds, 2026-09-25)

**The analog ladder is accurate but slow, and the tile never got built.**
DNL and INL pass at every corner. Settling misses 20 ns by a wide margin,
because no unit R meets both targets with buf_20 drivers at 3.3 V. The
digital front end, layout, LVS and TT precheck were not reached in 3
rounds, and /msde has no TT analog-tile path for them anyway.

## Measured (ngspice, ade sim_pvt, pre-layout)

Sizing: unit R = 27.0 kohm ppolyf_u (W 2 um, L 150 um), 2R from two
units, one trimmed unit (L 148.36 um) absorbs the driver Ron. Load
assumed at the pad: 100 ohm + 7 pF.

| corner | DNL max (LSB) | INL max (LSB) | monotonic | FS gain err (LSB) | glitch up / down (V.s) | INL, one unit +-1 % (LSB) |
|---|---|---|---|---|---|---|
| tt 27 C 3.30 V | 0.048 | 0.233 | yes | -0.005 | 1.8e-12 / 2.2e-15 | 0.526 |
| ss 125 C 2.97 V | **0.201** | **0.418** | yes | -0.017 | 1.6e-11 / 7.3e-13 | 0.717 |
| ff -40 C 3.63 V | 0.162 | 0.204 | yes | 0.001 | 4.1e-16 / 9.6e-16 | 0.523 |
| sf 125 C 2.97 V | 0.113 | 0.231 | yes | -0.010 | 1.2e-11 / 1.9e-12 | 0.539 |
| fs -40 C 3.63 V | 0.141 | 0.252 | yes | -0.001 | 8.3e-16 / 1.5e-15 | 0.563 |

- Full-scale range is v(255) - v(0) = 255/256 x VDD, about 3.287 V at tt.
- Settling to 0.5 LSB fails at every corner. The bench reads 99 ns, but
  that is its 100 ns window, not the real figure. The designer's estimate
  is tau = (27.1 kohm + 100 ohm) x 7 pF, about 190 ns, so settling takes
  about 1.2 us (about 59 periods at 50 MHz). I didn't measure that.
- The glitch energy is small because the slow RC filters the glitch.
- At the spec's original R = 250 ohm, the ladder settles in 19.3 ns at tt,
  but INL is 40.9 LSB and the output isn't monotonic.
- Measured buf_20 Ron at tt, 1 mA: pull-down 163 ohm, pull-up 444 ohm.
- Monte Carlo: the GF180 poly resistor models have no per-instance
  mismatch (ppolyf_u mis_r = 0, res_statistical is global only), so MC
  can't move DNL or INL. The one-unit +-1 % column stands in for it.
- Corners are ade's default five, not the brief's tt/ff/ss x -40/25/125 C
  at a fixed 3.3 V (breakage 3).

## Pipeline steps

Worked: task router (with a forced verb), msde split gate, ade spec_lint
(3 runs), topology, bench-writer, netlist designer, sim_tt, sim_pvt,
gate recording in state.json.

Broke:
1. /msde has no TT analog tile path. A 1x1 digital DEF only, no ua[]
   pins, and top_harden allows only interface pins + vdd + vss on the
   analog cell, so vout on ua[0] has nowhere to go. That blocks
   top_harden, top_drc, top_lvs and precheck. Left to chip-flow.
2. The router didn't match "full design of ... DAC"; `--verb full-run`
   was needed.
3. ade corners can't express tt/ff/ss x -40/25/125 C at a fixed VDD.
   Left to chip-flow.
4. The ade designer rule "never invent a device the template lacks"
   conflicts with msde's drivers-in-macro split, and the r2r_ladder
   template's bounds don't fit ppolyf_u.
5. sim_run's 60 s per-bench timeout is tight for 256-code benches on a
   loaded host. It didn't trip this round.
6. netlist_lint rejected the GF180 standard cells the macro needs, and
7. ignored `+` continuation lines on a `.subckt` header. Both are fixed
   in chip-flow PR #18. The recorded netlist_lint result still fails
   until that lands.
8. The step bench's fixed 100 ns window caps the settling readout, so a
   slow ladder can't report its real settling time.

Not reached: the digital front end (vde), layout, LVS, TT precheck.
cocotb in the eda image is 2.1.0, not the pinned 2.0.1.

## Cost

About $12 across 3 rounds: splitter $1.5, spec-writer $3, topology $0.4,
bench-writer $3.6, netlist designer $1.1, orchestration about $2.3.

## Round 2 (2026-09-25, chip-flow at #20)

### Analog, re-recorded on the #20 engine (pre-layout)

The owner kept the 27 kΩ unit R and accepted ~1.2 µs settling as a known
trade-off, so the settling bound is now 1.5 µs (9 ln2 τ, τ = 27k × 7 pF).
Corners are the brief's nine: tt/ff/ss × −40/25/125 °C at a fixed 3.3 V.
spec_lint, netlist_lint, sim_tt and sim_pvt all pass.

| measure | worst | corner | bound |
|---|---|---|---|
| DNL | 0.141 LSB | tt/−40 | 0.5 |
| INL | 0.355 LSB | ss/125 | 0.5 |
| monotonic | yes | all nine | |
| FS gain error | −0.014 LSB | ss/125 | ±0.5 |
| settling, 0.5 LSB | 1.441 µs rise, 1.436 µs fall | ss/−40 | 1.5 µs |
| 10–90 % | 0.506 µs | ss/−40 | 0.5 µs (warning) |
| INL with one unit ±1 % | 0.65 LSB | ss/125 | 0.5 (warning) |
| supply current peak | 22.8 mA | ff/−40 | 30 mA |

Glitch energy reads below 32 fV·s at every corner, but I don't trust it:
the glitch windows are 60 ns against a 190 ns time constant, so the
band method probably under-reads. That bench wasn't revised this round.

### Breakages found in round 2

9. top_harden treated every interface signal as one pin, so an 8-bit
   bus into the analog macro was refused. Fixed in chip-flow PR #21.
10. check_mutate puts every `-mode inv` mutant in the must-kill class,
    including flips of an internal prescaler bit that no port can see,
    so mutate is red at a 0.913 kill rate (0.9 needed).
11. Two stacked `# req:` lines above a cocotb test keep only the last
    one, with no warning.
12. Edits to `holdout/` have no edit class, and resume re-hashes them
    silently.
13. `state.py set-phase` passes a recorded FAIL with a warning and never
    checks H1 (read in the code, not demonstrated).
14. The router names the nested digital block `digital` (the directory),
    not the tile.
15. The cocotb 2.0.1 pin can't be honoured: the image has 2.1.0 and
    nothing checks a pin.
16. A 256-code DC sweep hit sim_run's 60 s limit at one corner on a
    loaded host. The bench's `sim_timeout_s` knob fixed it, which is the
    documented route, so this is a note rather than a bug.
17. bench_strength refused to run because the tt baseline had a
    warning-level miss (INL sensitivity 0.526 LSB), although sim_tt passes
    with it. A baseline warning would also have counted as a kill for
    every mutant. Fixed in chip-flow PR #22.
18. The layout step's `finalize()` rebuilds each polygon from its outline
    and drops holes. The PDK filltie's NPLUS is a keyhole around its P+
    tap, so after `finalize()` NPLUS covers the tap: 96 of the analog
    DRC's 98 findings (DF.16_MV, DF.3b, NP.3d/e, PP.3d/e on 16 fillties).
    The raw PDK filltie passes the same deck with none.
19. Block-level analog DRC runs the dummy-fill decks (2 × DCF.1a) although
    it drops density for the same reason, that a lone block has no fill.
20. The nested analog workspace was named `analog`, the directory, the
    same root as 14. layout_gen, analog LVS, pex_sim and top_harden all
    name files after it, so LVS looked for `netlist/analog.cir`. I
    renamed the block to `r2r_dac` in state.json to get past it (recorded
    as a decision); chip-flow should make the router use the msde naming.
21. Analog LVS can't match standard cells: `finalize()` flattens the eight
    buffers into 480 transistors, and the reference keeps them as black
    boxes. netgen also black-boxes `ppolyf_u`, so resistor sizes are never
    compared. The LVS gate is recorded FAIL for this.
22. gate.py ignores `--out` on its error path, and gates that build layout
    need the toolchain's Python (`bin/eda python`), not the host's, but the
    recipe prints host `python3`.
23. top_harden's power grid fails on the analog tile. PR #21's bus binding
    worked and the macro was placed (207.8 × 139.6 µm at 69.4, 94.1 in the
    346.6 × 325.4 µm 1x2 tile). LibreLane then stopped at
    `openroad-generatepdn`: [PDN-0179] Unable to repair all channels, with
    Metal1 channels left of the macro at x 3.4–59.4 µm. It's the engine's
    PDN setup for a macro in the tile (`macro_pdn.tcl`,
    `FP_PDN_MULTILAYER 0`); I didn't try to fix it. top_drc, top_lvs and
    the TT precheck can't run without the top GDS.

### Where round 2 stopped

| step | result |
|---|---|
| spec_lint, netlist_lint, sim_tt, sim_pvt (analog) | pass on #20 |
| split (msde) | pass |
| digital lint, sim, holdout, formal, cover | pass |
| digital mutate | fail, 2 unobservable mutants (10); waiver asked, unanswered |
| bench_strength (analog) | pass, 33 of 33 mutants killed, run on PR #22 and recorded |
| analog layout generator | builds (208 × 140 µm, 25 ppolyf_u + 8 buf_20) |
| analog DRC | fail, 98 (18, 19) |
| analog LVS | fail (21) |
| pex_sim | refused, no post-layout bench |
| top_harden | fail at PDN (23) |
| top_drc, top_lvs, precheck | not reached |
| digital standalone harden | not run, held on the mutate waiver |

Round 2 cost about $9: the bench-writer $0.6, the digital agent $1.5,
the layout agent $1.4, and orchestration for the rest.
