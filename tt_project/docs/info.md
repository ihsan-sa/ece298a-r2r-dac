## How it works

An 8-bit R-2R DAC in GF180MCU at 3.3 V. A digital front end produces an 8-bit code, `dac_code`, and an analog macro switches each bit onto a ladder of poly resistors through a standard-cell buffer. The ladder's MSB node is the output, `vout`, on analog pin `ua[0]`. It spans 0 to 255/256 × VDD (3.287 V at 3.3 V) in steps of 1 LSB = 12.9 mV.

`uio_in[1:0]` picks the source of `dac_code`:

| mode | source |
|---|---|
| 00, load | `ui_in`, captured at each rising clock edge; the code register keeps a copy |
| 01, ramp | a free-running 8-bit counter that wraps from 255 to 0 |
| 10, sine | a 256-entry table, round(127.5 + 127.5 × sin(2πi/256)), indexed by the same counter |
| 11, hold | the last code captured in mode 00 |

`uio_in[2]` is `slow`: at 0 the counter steps every clock, at 1 every 256 clocks. `dac_code` is registered and echoed on `uo_out[7:0]`. `rst_n` is registered once, so reset takes effect one edge after it is sampled low.

The full design, corner results and verification are in the repository's [`docs/design.md`](design.md).

## How to test

1. Hold `rst_n` low for two clocks, then release it. `vout` goes to 0 V.
2. Set `uio_in[1:0] = 00` and put a code on `ui_in`. After about 1.5 µs `vout` reads code / 256 × VDD, and `uo_out` shows the code.
3. Set `uio_in[1:0] = 01`, `uio_in[2] = 1` for a sawtooth on `vout` (one step per 256 clocks, 256 steps per period), or `10` for a sine.
4. Set `uio_in[1:0] = 11` to return `vout` to the last code loaded in step 2.

The output settles in about 1.2 µs (1.44 µs at the slow corner), about 60 clocks at 50 MHz, so ramp and sine want `slow = 1`; with `slow = 0` the waveform smears.

## External hardware

A voltmeter or oscilloscope on `ua[0]`. The output is the bare ladder with no buffer, so its source resistance is about 27 kΩ; load it lightly (a 10× probe or a high-impedance input).
