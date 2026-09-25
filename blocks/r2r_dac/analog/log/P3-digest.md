# P3 digest - benches
- spec_lint: pass; all 21 measures cross-checked bench<->spec both ways.
- 3 benches: r2r_dac_tb (DC 256-code sweep: DNL/INL/mono/offset/gain/1% sens/i_vdd_avg), _step_tb (FS settle/rise/fall), _glitch_tb (127<->128, aligned and +-200 ps MSB skew).
- 1% unit sensitivity via reciprocity (one extra sweep), checked vs exact re-sweep to 0.0013 LSB.
- Runtime risk: transient benches 70-90 s at ss on a loaded host vs sim_run's 60 s timeout.
- For P4: buf_20 is built from 5 V devices; stand-in showed ~600 ohm pull-up at 3.3 V vs the spec's "tens of ohms". R=250 may need to grow.
- Benches .include the std-cell spice lib; netlist/ must not include it again.
