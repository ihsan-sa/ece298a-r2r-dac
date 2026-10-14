# P5 digest - layout + post-layout (round 3, engine 84ea5df)
- Every analog gate re-ran fresh after the spec_edit that added sim_timeout_s {pex_sim: 600} (no bound changed); release PASS.
- drc 0 findings (klayout GF180 deck); lvs clean (netgen, layout vs netlist/r2r_dac.cir at its sizing).
- pex_sim PASS at tt/25 C on magic R+C extraction (2910 R, 2084 C), 297 s: t_settle rise/fall 1.202/1.197 us (bound 1.5 us); 10-90 rise/fall 424/422 ns (500 ns); glitch energy up/down 23.8/14.9 pV.s (260 pV.s); glitch peak 21.8/22.5 mV (52 mV).
- Pre-layout worst over 9 corners: DNL 0.141 LSB (tt/-40), INL 0.355 LSB (ss/125), monotonic everywhere, FS gain error -0.014 LSB (ss/125), settling 1.441 us (ss/-40).
- Warnings, not failures: 10-90 rise 0.506 us at ss/-40 (0.5 us); 1 % unit sensitivity 0.65 LSB INL (ss/125).
- bench_strength 58/58 mutants killed over 33/33 devices. mc not applicable: GF180 ppolyf_u has no per-instance mismatch.
- Settling is ~1.2 us typical, not one 50 MHz period: the owner's accepted 27k-unit-R trade-off.
- Files: reports/checks.json, reports/gate-*.json, layout/gen_r2r_dac_analog.py, layout_ref/, log/pex_sim/.
- H2 question: sign off this layout for integration into the tile? Recommended: approve.
