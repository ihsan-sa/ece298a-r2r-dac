# P2 digest
- Architecture: single module, 4 regs (code_reg, cnt, presc, dac_code), case-statement sine ROM.
- tt_pins: dac_code->uio_out[7:0], mode->uio_in[1:0], slow->uio_in[2], uo_out->uo_out; period 20 ns.
- spec_lint PASS.
