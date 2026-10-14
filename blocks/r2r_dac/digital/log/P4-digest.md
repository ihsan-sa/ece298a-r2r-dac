# P4 digest - RTL + design gates (round 3, engine c489764)
- lint PASS (0). sim PASS (8/8). holdout PASS (2/2; round-2 undeclared holdout change now declared as holdout_edit and re-pinned).
- formal PASS (REQ_RESET, REQ_HOLD, REQ_ECHO; 2 covers). cover PASS (line 99.7 %, toggle 100 %).
- mutate PASS: 21/21 scored mutants killed; mutants 14 and 21 (Q-inversion of internal prescaler bits) proven equivalent by the gate (pdr), so no waiver is needed.
- Open issues: none (issue 2 fixed by the rerun).
- Files: reports/gate-*.json, rtl/r2r_dac_digital.v, tb/, formal/.
- H1 question: approve the RTL and tests for synthesis and hardening? Recommended: approve.
