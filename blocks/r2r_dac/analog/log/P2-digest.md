# P2 digest - topology
- spec_lint: pass (0 findings) after devices were filled.
- Template r2r_ladder.sp (only ladder; 4-bit, rm1, ideal sources) used for equations only.
- 33 devices: xd7..xd0 buf_20 drivers (not in template), 25 ppolyf_u units (xrb*a/b, xrs6..0, xrta/b).
- Unit ~W 2 um L ~1.05 um for 250 ohm; 2R b-unit shortened by Ron_nom (Ron measured in P4).
- Worst DNL at 127->128 ~ 128 x MSB branch ratio error; settling ~6.24 tau ~17 ns (tau 2.7 ns).
- Open: template bounds are rm1-only; ppolyf_u contact tc1 leaves temp-dependent MSB error.
- Files: spec/topology.md, spec/spec.yaml
