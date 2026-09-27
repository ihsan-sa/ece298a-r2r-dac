# P4 digest - sizing + simulation (27k unit R, buf_20 drivers, 3.3 V)
- sim_tt PASS, sim_pvt PASS on 9 fixed-VDD corners {tt,ff,ss} x {-40,25,125} C.
- Worst DNL 0.141 LSB (tt/-40); worst INL 0.355 LSB (ss/125); monotonic at every corner; worst FS gain error -0.014 LSB (ss/125).
- Full-scale settling to 0.5 LSB: worst 1.441 us (ss/-40) against the 1.5 us bound (owner's accepted trade-off, not one 50 MHz period).
- Warnings (not failures): 10-90 rise 0.506 us vs 0.5 us (ss/-40); 1 % unit sensitivity 0.65 LSB INL.
- Mid-code glitch energy <= 32 fV.s, but the 60 ns window is short against tau ~190 ns, so it probably under-reads.
- bench_strength PASS 33/33 mutants killed. mc not applicable: GF180 ppolyf_u has no per-instance mismatch (mis_r = 0).
- Files: reports/gate-*.json, spec/spec.yaml, sizing/sizing.yaml, netlist/r2r_dac.cir.
- H1 question: approve this sizing for layout? Recommended: approve.
