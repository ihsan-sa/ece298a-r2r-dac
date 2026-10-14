# P8 digest - release (round 3, engine 294b255)
- release PASS: reports/checks.json, every gate fresh; timing waived on the owner's acceptance (ss/125C -0.87 ns, ~47 MHz met there).
- Since H1: rtl_edit (a3: registered prescaler compare and cnt+1) and a4 (rst_n registered; reset/release one clk late; spec, formal, tb, holdout stimulus moved with it).
- Files: reports/checks.json, reports/waivers.json, log/P6-digest.md, spec/spec.md (Timing at the slow corner), rtl/r2r_dac_digital.v.
- H2 question: sign off the digital front end for integration with the waived ss/125C timing? Recommended: approve.
