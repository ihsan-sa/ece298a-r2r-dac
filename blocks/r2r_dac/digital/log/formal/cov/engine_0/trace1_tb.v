`ifndef VERILATOR
module testbench;
  reg [4095:0] vcdfile;
  reg clock;
`else
module testbench(input clock, output reg genclock);
  initial genclock = 1;
`endif
  reg genclock = 1;
  reg [31:0] cycle = 0;
  wire [0:0] PI_clk = clock;
  reg [7:0] PI_ui_in;
  reg [0:0] PI_rst_n;
  reg [0:0] PI_ena;
  reg [0:0] PI_slow;
  reg [1:0] PI_mode;
  r2r_dac_digital_formal UUT (
    .clk(PI_clk),
    .ui_in(PI_ui_in),
    .rst_n(PI_rst_n),
    .ena(PI_ena),
    .slow(PI_slow),
    .mode(PI_mode)
  );
`ifndef VERILATOR
  initial begin
    if ($value$plusargs("vcd=%s", vcdfile)) begin
      $dumpfile(vcdfile);
      $dumpvars(0, testbench);
    end
    #5 clock = 0;
    while (genclock) begin
      #5 clock = 0;
      #5 clock = 1;
    end
  end
`endif
  initial begin
`ifndef VERILATOR
    #1;
`endif
    // UUT.$auto$async2sync.\cc:116:execute$109  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$115  = 1'b1;
    UUT._witness_.anyinit_procdff_91 = 2'b00;
    UUT._witness_.anyinit_procdff_92 = 2'b00;
    UUT._witness_.anyinit_procdff_93 = 2'b00;
    UUT._witness_.anyinit_procdff_94 = 1'b0;
    UUT.dut.cnt = 8'b00000000;
    UUT.dut.code_reg = 8'b10000000;
    UUT.dut.dac_code = 8'b00000000;
    UUT.dut.presc = 8'b00000000;
    UUT.past_valid = 1'b0;
    UUT.past_valid2 = 1'b0;
    UUT.dut.$auto$proc_rom.\cc:155:do_switch$58 [8'b00000000] = 8'b10000000;
    UUT.dut.$auto$proc_rom.\cc:155:do_switch$58 [8'b00000001] = 8'b10000011;
    UUT.dut.$auto$proc_rom.\cc:155:do_switch$58 [8'b00000010] = 8'b10000110;

    // state 0
    PI_ui_in = 8'b00000000;
    PI_rst_n = 1'b1;
    PI_ena = 1'b0;
    PI_slow = 1'b0;
    PI_mode = 2'b11;
  end
  always @(posedge clock) begin
    // state 1
    if (cycle == 0) begin
      PI_ui_in <= 8'b00000000;
      PI_rst_n <= 1'b1;
      PI_ena <= 1'b0;
      PI_slow <= 1'b0;
      PI_mode <= 2'b11;
    end

    // state 2
    if (cycle == 1) begin
      PI_ui_in <= 8'b00000000;
      PI_rst_n <= 1'b0;
      PI_ena <= 1'b0;
      PI_slow <= 1'b0;
      PI_mode <= 2'b00;
    end

    // state 3
    if (cycle == 2) begin
      PI_ui_in <= 8'b00000000;
      PI_rst_n <= 1'b0;
      PI_ena <= 1'b0;
      PI_slow <= 1'b0;
      PI_mode <= 2'b00;
    end

    genclock <= cycle < 3;
    cycle <= cycle + 1;
  end
endmodule
