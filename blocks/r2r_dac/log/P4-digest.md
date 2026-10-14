# P4 digest - release (round 3, engine a00b866)
- msde release PASS: split, cosim, top_harden, top_drc, top_lvs, precheck all fresh-pass; both sides released.
- Top tile: setup ws +0.29 ns / hold +0.41 ns (tt), DRC 0 (magic, klayout, TT precheck), netgen LVS matches uniquely.
- DAC (pre-layout, 9 corners): worst DNL 0.141 LSB (tt/-40 C), worst INL 0.355 LSB (ss/125 C), monotonic at every corner.
- DAC (post-layout, tt/25 C): full-scale settle to 0.5 LSB 1.202/1.197 us rise/fall; glitch energy 23.8/14.9 pV.s.
- Monte Carlo: not applicable, GF180 ppolyf_u models carry no per-instance mismatch.
- Accepted trade-offs: ~1.2 us settling (27k unit R); digital setup -0.87 ns at ss/125 C (~47 MHz max there).
- Open: nested H2s (analog H2-4da295, digital H2-a7bfe1) still with the owner.
- Files: reports/checks.json (here, analog/, digital/), top/harden/runs/run/final/, log/top_lvs/top_lvs.rpt.
- H2 question: sign off the assembled tile for release and the design document? Recommended: approve.
