# P4 digest - RTL + design gates
- lint PASS (0). sim PASS (8/8 tests; attempt 2 after stacked '# req:' tags were merged - scanner keeps only the last tag line).
- holdout PASS (2/2). formal PASS (REQ_RESET, REQ_HOLD, REQ_ECHO; 2 covers). cover PASS.
- mutate FAIL: kill rate 0.913 (21/23), 2 survivors class condition_inverted = Q-bit inversion of internal prescaler bits 3/5.
  Proven equivalent (XOR relabelling keeps the 256-clock step schedule); issue 2 escalated, decision recorded.
- Open for H1: accept a mutate waiver for the 2 equivalent mutants, or order an RTL restructure. Recommended: waiver.
- Files: rtl/r2r_dac_digital.v, tb/test_r2r_dac_digital.py, formal/r2r_dac_digital_formal.sv, reports/gate-*.json.
- cover facts: {'top': 'r2r_dac_digital', 'line_pct': 99.6552, 'toggle_pct': 100.0, 'line_covered': 289, 'line_total': 290, 'toggle_covered': 128, 'toggle_total': 128}
