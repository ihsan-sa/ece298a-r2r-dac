// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(ena,0,0);
    VL_IN8(ui_in,7,0);
    VL_IN8(mode,1,0);
    VL_IN8(slow,0,0);
    VL_OUT8(dac_code,7,0);
    VL_OUT8(uo_out,7,0);
    CData/*0:0*/ r2r_dac_digital__DOT__clk;
    CData/*0:0*/ r2r_dac_digital__DOT__rst_n;
    CData/*0:0*/ r2r_dac_digital__DOT__ena;
    CData/*7:0*/ r2r_dac_digital__DOT__ui_in;
    CData/*1:0*/ r2r_dac_digital__DOT__mode;
    CData/*0:0*/ r2r_dac_digital__DOT__slow;
    CData/*7:0*/ r2r_dac_digital__DOT__dac_code;
    CData/*7:0*/ r2r_dac_digital__DOT__uo_out;
    CData/*7:0*/ r2r_dac_digital__DOT__code_reg;
    CData/*7:0*/ r2r_dac_digital__DOT__cnt;
    CData/*7:0*/ r2r_dac_digital__DOT__presc;
    CData/*7:0*/ r2r_dac_digital__DOT__sine_val;
    CData/*0:0*/ r2r_dac_digital__DOT__unused_ena;
    CData/*0:0*/ r2r_dac_digital__DOT__step;
    CData/*0:0*/ r2r_dac_digital__DOT____Vtogcov__clk;
    CData/*0:0*/ r2r_dac_digital__DOT____Vtogcov__rst_n;
    CData/*0:0*/ r2r_dac_digital__DOT____Vtogcov__ena;
    CData/*7:0*/ r2r_dac_digital__DOT____Vtogcov__ui_in;
    CData/*1:0*/ r2r_dac_digital__DOT____Vtogcov__mode;
    CData/*0:0*/ r2r_dac_digital__DOT____Vtogcov__slow;
    CData/*7:0*/ r2r_dac_digital__DOT____Vtogcov__dac_code;
    CData/*7:0*/ r2r_dac_digital__DOT____Vtogcov__uo_out;
    CData/*7:0*/ r2r_dac_digital__DOT____Vtogcov__code_reg;
    CData/*7:0*/ r2r_dac_digital__DOT____Vtogcov__cnt;
    CData/*7:0*/ r2r_dac_digital__DOT____Vtogcov__presc;
    CData/*7:0*/ r2r_dac_digital__DOT____Vtogcov__sine_val;
    CData/*0:0*/ r2r_dac_digital__DOT____Vtogcov__unused_ena;
    CData/*0:0*/ r2r_dac_digital__DOT____Vtogcov__step;
    CData/*0:0*/ __Vtrigprevexpr___TOP__r2r_dac_digital__DOT__clk__0;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[402]{};

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
