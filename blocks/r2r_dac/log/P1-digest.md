# P1 digest
- split: pass, 1 crossing signal (dac_code, d2a, 8 bit, cmos_3v3, clk_sys).
- R=250/500 ohm poly; pad load assumed 7 pF + 100 ohm; drivers in the analog macro.
- Open: vout->ua[0] has no route in interface schema or top_harden (pipeline gap).
