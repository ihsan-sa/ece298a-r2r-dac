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
  reg [1:0] PI_mode;
  reg [0:0] PI_ena;
  reg [0:0] PI_rst_n;
  reg [0:0] PI_slow;
  reg [7:0] PI_ui_in;
  wire [0:0] PI_clk = clock;
  r2r_dac_digital_formal UUT (
    .mode(PI_mode),
    .ena(PI_ena),
    .rst_n(PI_rst_n),
    .slow(PI_slow),
    .ui_in(PI_ui_in),
    .clk(PI_clk)
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
    // UUT.$auto$async2sync.\cc:107:execute$139  = 1'b0;
    // UUT.$auto$async2sync.\cc:107:execute$145  = 1'b0;
    // UUT.$auto$async2sync.\cc:116:execute$131  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$137  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$143  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$149  = 1'b1;
    UUT._witness_.anyinit_procdff_108 = 2'b00;
    UUT._witness_.anyinit_procdff_109 = 2'b00;
    UUT._witness_.anyinit_procdff_110 = 2'b00;
    UUT._witness_.anyinit_procdff_111 = 1'b0;
    UUT._witness_.anyinit_procdff_112 = 1'b0;
    UUT._witness_.anyinit_procdff_113 = 1'b0;
    UUT._witness_.anyinit_procdff_114 = 1'b0;
    UUT._witness_.anyinit_procdff_115 = 1'b0;
    UUT._witness_.anyinit_procdff_116 = 1'b0;
    UUT._witness_.anyinit_procdff_117 = 1'b0;
    UUT._witness_.anyinit_procdff_118 = 2'b00;
    UUT._witness_.anyinit_procdff_119 = 2'b00;
    UUT._witness_.anyinit_procdff_120 = 2'b00;
    UUT._witness_.anyinit_procdff_121 = 8'b00000000;
    UUT._witness_.anyinit_procdff_122 = 1'b0;
    UUT._witness_.anyinit_procdff_123 = 1'b0;
    UUT.dut.cnt = 8'b00000000;
    UUT.dut.cnt_p1 = 8'b00000000;
    UUT.dut.code_reg = 8'b00000000;
    UUT.dut.dac_code = 8'b00000000;
    UUT.dut.presc = 8'b00000000;
    UUT.dut.presc_tc = 1'b0;
    UUT.dut.rst_q = 1'b0;
    UUT.past_valid = 1'b0;
    UUT.past_valid2 = 1'b0;
    UUT.past_valid3 = 1'b0;
    UUT.dut.$auto$proc_rom.\cc:155:do_switch$64 [8'b00000000] = 8'b10000000;

    // state 0
    PI_mode = 2'b00;
    PI_ena = 1'b0;
    PI_rst_n = 1'b0;
    PI_slow = 1'b0;
    PI_ui_in = 8'b00000000;
  end
  always @(posedge clock) begin
    // state 1
    if (cycle == 0) begin
      PI_mode <= 2'b00;
      PI_ena <= 1'b0;
      PI_rst_n <= 1'b0;
      PI_slow <= 1'b0;
      PI_ui_in <= 8'b00000000;
    end

    // state 2
    if (cycle == 1) begin
      PI_mode <= 2'b00;
      PI_ena <= 1'b0;
      PI_rst_n <= 1'b0;
      PI_slow <= 1'b0;
      PI_ui_in <= 8'b00000000;
    end

    // state 3
    if (cycle == 2) begin
      PI_mode <= 2'b00;
      PI_ena <= 1'b0;
      PI_rst_n <= 1'b0;
      PI_slow <= 1'b0;
      PI_ui_in <= 8'b00000000;
    end

    // state 4
    if (cycle == 3) begin
      PI_mode <= 2'b00;
      PI_ena <= 1'b0;
      PI_rst_n <= 1'b0;
      PI_slow <= 1'b0;
      PI_ui_in <= 8'b00000000;
    end

    genclock <= cycle < 4;
    cycle <= cycle + 1;
  end
endmodule
