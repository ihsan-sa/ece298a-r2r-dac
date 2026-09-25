# P3 digest
- tb/: 8 cocotb tests + python reference model (tb/dac_model.py); every sim/both req tagged.
- holdout/: 2 tests (one-clock reset clears prescaler; hold after excursion from 0xFF).
- formal/: wrapper with REQ_RESET, REQ_HOLD, REQ_ECHO asserts + 2 covers.
- Holdout hash pinned before RTL.
