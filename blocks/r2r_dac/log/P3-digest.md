# P3 digest - cosim and top gates (round 3, engine a00b866)
- cosim PASS (1 test, 0 failures): 1 crossing signal dac_code[7:0], digital RTL against the analog netlist.
- top_harden PASS: setup ws +0.29 ns, hold ws +0.41 ns (tt), routing DRC 0, antenna 0, magic DRC 0, harden LVS 0 errors, 2557 instances.
- top_drc PASS (magic + klayout, analog macro now filled, DCF.1a gone).
- top_lvs PASS: netgen matches uniquely; blackbox guard 480 fets / 25 res want = got.
- precheck PASS (TT GF180 precheck, local).
- Engine fixes proven on the real block this round: 26, 33, 34, 35, 36, 37.
