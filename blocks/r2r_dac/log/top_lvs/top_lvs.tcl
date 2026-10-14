set circuit1 [readnet spice /home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/log/top_lvs/tt_um_r2r_dac_digital.extracted.spice]
set circuit2 [readnet verilog /dev/null]
readnet spice /home/ihsan/.cc/toolchains/iic-osic-tools-2026.09/foss/pdks/gf180mcuD/libs.ref/gf180mcu_fd_sc_mcu7t5v0/spice/gf180mcu_fd_sc_mcu7t5v0.spice $circuit2
readnet spice /home/ihsan/.cc/toolchains/iic-osic-tools-2026.09/foss/pdks/gf180mcuD/libs.ref/gf180mcu_fd_io/spice/gf180mcu_fd_io.spice $circuit2
readnet spice /home/ihsan/.cc/toolchains/iic-osic-tools-2026.09/foss/pdks/gf180mcuD/libs.ref/gf180mcu_fd_io/spice/gf180mcu_ef_io.spice $circuit2
readnet spice /home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/top/macros/r2r_dac_analog.spice $circuit2
readnet verilog /home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/top/harden/runs/run/final/pnl/tt_um_r2r_dac_digital.pnl.v $circuit2
lvs "$circuit1 tt_um_r2r_dac_digital" "$circuit2 tt_um_r2r_dac_digital" /home/ihsan/.cc/toolchains/iic-osic-tools-2026.09/foss/pdks/gf180mcuD/libs.tech/netgen/gf180mcuD_setup.tcl /home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/log/top_lvs/top_lvs.rpt -json
