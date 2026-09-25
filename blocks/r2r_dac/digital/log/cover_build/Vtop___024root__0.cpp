// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_sample(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_sample\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.r2r_dac_digital__DOT__clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__r2r_dac_digital__DOT__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__r2r_dac_digital__DOT__clk__0 
            = vlSelfRef.r2r_dac_digital__DOT__clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vtop___024root___eval_inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtop___024root___eval_obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___eval_react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtop___024root___eval_postponed(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_postponed\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__dac_code) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__dac_code)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 28, vlSelfRef.r2r_dac_digital__DOT__dac_code, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__dac_code);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__dac_code 
            = vlSelfRef.r2r_dac_digital__DOT__dac_code;
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__code_reg) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__code_reg)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 60, vlSelfRef.r2r_dac_digital__DOT__code_reg, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__code_reg);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__code_reg 
            = vlSelfRef.r2r_dac_digital__DOT__code_reg;
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__cnt) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__cnt)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 76, vlSelfRef.r2r_dac_digital__DOT__cnt, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__cnt);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__cnt 
            = vlSelfRef.r2r_dac_digital__DOT__cnt;
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__presc) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__presc)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 92, vlSelfRef.r2r_dac_digital__DOT__presc, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__presc);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__presc 
            = vlSelfRef.r2r_dac_digital__DOT__presc;
    }
    vlSelfRef.dac_code = vlSelfRef.r2r_dac_digital__DOT__dac_code;
    vlSelfRef.r2r_dac_digital__DOT__clk = vlSelfRef.clk;
    if ((0x00000080U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((0x00000040U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((0x00000020U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x7cU;
                                    ++(vlSelf->__Vcoverage[381]);
                                } else {
                                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x79U;
                                    ++(vlSelf->__Vcoverage[380]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x76U;
                                ++(vlSelf->__Vcoverage[379]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x73U;
                                ++(vlSelf->__Vcoverage[378]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x70U;
                                ++(vlSelf->__Vcoverage[377]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x6dU;
                                ++(vlSelf->__Vcoverage[376]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x6aU;
                            ++(vlSelf->__Vcoverage[375]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x67U;
                            ++(vlSelf->__Vcoverage[374]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x64U;
                                ++(vlSelf->__Vcoverage[373]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x61U;
                                ++(vlSelf->__Vcoverage[372]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x5dU;
                            ++(vlSelf->__Vcoverage[371]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x5aU;
                            ++(vlSelf->__Vcoverage[370]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x58U;
                            ++(vlSelf->__Vcoverage[369]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x55U;
                            ++(vlSelf->__Vcoverage[368]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x52U;
                        ++(vlSelf->__Vcoverage[367]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x4fU;
                        ++(vlSelf->__Vcoverage[366]);
                    }
                } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x4cU;
                                ++(vlSelf->__Vcoverage[365]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x49U;
                                ++(vlSelf->__Vcoverage[364]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x46U;
                            ++(vlSelf->__Vcoverage[363]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x43U;
                            ++(vlSelf->__Vcoverage[362]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x41U;
                            ++(vlSelf->__Vcoverage[361]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x3eU;
                            ++(vlSelf->__Vcoverage[360]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x3bU;
                        ++(vlSelf->__Vcoverage[359]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x39U;
                        ++(vlSelf->__Vcoverage[358]);
                    }
                } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x36U;
                            ++(vlSelf->__Vcoverage[357]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x34U;
                            ++(vlSelf->__Vcoverage[356]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x31U;
                        ++(vlSelf->__Vcoverage[355]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2fU;
                        ++(vlSelf->__Vcoverage[354]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2cU;
                        ++(vlSelf->__Vcoverage[353]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2aU;
                        ++(vlSelf->__Vcoverage[352]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x28U;
                    ++(vlSelf->__Vcoverage[351]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x25U;
                    ++(vlSelf->__Vcoverage[350]);
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x23U;
                                ++(vlSelf->__Vcoverage[349]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x21U;
                                ++(vlSelf->__Vcoverage[348]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1fU;
                            ++(vlSelf->__Vcoverage[347]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1dU;
                            ++(vlSelf->__Vcoverage[346]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1bU;
                            ++(vlSelf->__Vcoverage[345]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x19U;
                            ++(vlSelf->__Vcoverage[344]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x17U;
                        ++(vlSelf->__Vcoverage[343]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x15U;
                        ++(vlSelf->__Vcoverage[342]);
                    }
                } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x14U;
                            ++(vlSelf->__Vcoverage[341]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x12U;
                            ++(vlSelf->__Vcoverage[340]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x11U;
                        ++(vlSelf->__Vcoverage[339]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0fU;
                        ++(vlSelf->__Vcoverage[338]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0eU;
                        ++(vlSelf->__Vcoverage[337]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0cU;
                        ++(vlSelf->__Vcoverage[336]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0bU;
                    ++(vlSelf->__Vcoverage[335]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0aU;
                    ++(vlSelf->__Vcoverage[334]);
                }
            } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 9U;
                            ++(vlSelf->__Vcoverage[333]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 7U;
                            ++(vlSelf->__Vcoverage[332]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 6U;
                        ++(vlSelf->__Vcoverage[331]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 5U;
                        ++(vlSelf->__Vcoverage[330]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 5U;
                        ++(vlSelf->__Vcoverage[329]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 4U;
                        ++(vlSelf->__Vcoverage[328]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 3U;
                    ++(vlSelf->__Vcoverage[327]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 2U;
                    ++(vlSelf->__Vcoverage[326]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 2U;
                        ++(vlSelf->__Vcoverage[325]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                        ++(vlSelf->__Vcoverage[324]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                    ++(vlSelf->__Vcoverage[323]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                    ++(vlSelf->__Vcoverage[322]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                    ++(vlSelf->__Vcoverage[321]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                    ++(vlSelf->__Vcoverage[320]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                ++(vlSelf->__Vcoverage[319]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                ++(vlSelf->__Vcoverage[318]);
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                                ++(vlSelf->__Vcoverage[317]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                                ++(vlSelf->__Vcoverage[316]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                            ++(vlSelf->__Vcoverage[315]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                            ++(vlSelf->__Vcoverage[314]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                            ++(vlSelf->__Vcoverage[313]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                            ++(vlSelf->__Vcoverage[312]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 2U;
                        ++(vlSelf->__Vcoverage[311]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 2U;
                        ++(vlSelf->__Vcoverage[310]);
                    }
                } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 3U;
                            ++(vlSelf->__Vcoverage[309]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 4U;
                            ++(vlSelf->__Vcoverage[308]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 5U;
                        ++(vlSelf->__Vcoverage[307]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 5U;
                        ++(vlSelf->__Vcoverage[306]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 6U;
                        ++(vlSelf->__Vcoverage[305]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 7U;
                        ++(vlSelf->__Vcoverage[304]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 9U;
                    ++(vlSelf->__Vcoverage[303]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0aU;
                    ++(vlSelf->__Vcoverage[302]);
                }
            } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0bU;
                            ++(vlSelf->__Vcoverage[301]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0cU;
                            ++(vlSelf->__Vcoverage[300]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0eU;
                        ++(vlSelf->__Vcoverage[299]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0fU;
                        ++(vlSelf->__Vcoverage[298]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x11U;
                        ++(vlSelf->__Vcoverage[297]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x12U;
                        ++(vlSelf->__Vcoverage[296]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x14U;
                    ++(vlSelf->__Vcoverage[295]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x15U;
                    ++(vlSelf->__Vcoverage[294]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x17U;
                        ++(vlSelf->__Vcoverage[293]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x19U;
                        ++(vlSelf->__Vcoverage[292]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1bU;
                    ++(vlSelf->__Vcoverage[291]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1dU;
                    ++(vlSelf->__Vcoverage[290]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1fU;
                    ++(vlSelf->__Vcoverage[289]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x21U;
                    ++(vlSelf->__Vcoverage[288]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x23U;
                ++(vlSelf->__Vcoverage[287]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x25U;
                ++(vlSelf->__Vcoverage[286]);
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x28U;
                            ++(vlSelf->__Vcoverage[285]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2aU;
                            ++(vlSelf->__Vcoverage[284]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2cU;
                        ++(vlSelf->__Vcoverage[283]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2fU;
                        ++(vlSelf->__Vcoverage[282]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x31U;
                        ++(vlSelf->__Vcoverage[281]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x34U;
                        ++(vlSelf->__Vcoverage[280]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x36U;
                    ++(vlSelf->__Vcoverage[279]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x39U;
                    ++(vlSelf->__Vcoverage[278]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x3bU;
                        ++(vlSelf->__Vcoverage[277]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x3eU;
                        ++(vlSelf->__Vcoverage[276]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x41U;
                    ++(vlSelf->__Vcoverage[275]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x43U;
                    ++(vlSelf->__Vcoverage[274]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x46U;
                    ++(vlSelf->__Vcoverage[273]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x49U;
                    ++(vlSelf->__Vcoverage[272]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x4cU;
                ++(vlSelf->__Vcoverage[271]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x4fU;
                ++(vlSelf->__Vcoverage[270]);
            }
        } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x52U;
                        ++(vlSelf->__Vcoverage[269]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x55U;
                        ++(vlSelf->__Vcoverage[268]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x58U;
                    ++(vlSelf->__Vcoverage[267]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x5aU;
                    ++(vlSelf->__Vcoverage[266]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x5dU;
                    ++(vlSelf->__Vcoverage[265]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x61U;
                    ++(vlSelf->__Vcoverage[264]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x64U;
                ++(vlSelf->__Vcoverage[263]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x67U;
                ++(vlSelf->__Vcoverage[262]);
            }
        } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x6aU;
                    ++(vlSelf->__Vcoverage[261]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x6dU;
                    ++(vlSelf->__Vcoverage[260]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x70U;
                ++(vlSelf->__Vcoverage[259]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x73U;
                ++(vlSelf->__Vcoverage[258]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x76U;
                ++(vlSelf->__Vcoverage[257]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x79U;
                ++(vlSelf->__Vcoverage[256]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x7cU;
            ++(vlSelf->__Vcoverage[255]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x80U;
            ++(vlSelf->__Vcoverage[254]);
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((0x00000020U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x83U;
                                ++(vlSelf->__Vcoverage[253]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x86U;
                                ++(vlSelf->__Vcoverage[252]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x89U;
                            ++(vlSelf->__Vcoverage[251]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x8cU;
                            ++(vlSelf->__Vcoverage[250]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x8fU;
                            ++(vlSelf->__Vcoverage[249]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x92U;
                            ++(vlSelf->__Vcoverage[248]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x95U;
                        ++(vlSelf->__Vcoverage[247]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x98U;
                        ++(vlSelf->__Vcoverage[246]);
                    }
                } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x9bU;
                            ++(vlSelf->__Vcoverage[245]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x9eU;
                            ++(vlSelf->__Vcoverage[244]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa2U;
                        ++(vlSelf->__Vcoverage[243]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa5U;
                        ++(vlSelf->__Vcoverage[242]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa7U;
                        ++(vlSelf->__Vcoverage[241]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xaaU;
                        ++(vlSelf->__Vcoverage[240]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xadU;
                    ++(vlSelf->__Vcoverage[239]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb0U;
                    ++(vlSelf->__Vcoverage[238]);
                }
            } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb3U;
                            ++(vlSelf->__Vcoverage[237]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb6U;
                            ++(vlSelf->__Vcoverage[236]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb9U;
                        ++(vlSelf->__Vcoverage[235]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xbcU;
                        ++(vlSelf->__Vcoverage[234]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xbeU;
                        ++(vlSelf->__Vcoverage[233]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc1U;
                        ++(vlSelf->__Vcoverage[232]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc4U;
                    ++(vlSelf->__Vcoverage[231]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc6U;
                    ++(vlSelf->__Vcoverage[230]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc9U;
                        ++(vlSelf->__Vcoverage[229]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xcbU;
                        ++(vlSelf->__Vcoverage[228]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xceU;
                    ++(vlSelf->__Vcoverage[227]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd0U;
                    ++(vlSelf->__Vcoverage[226]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd3U;
                    ++(vlSelf->__Vcoverage[225]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd5U;
                    ++(vlSelf->__Vcoverage[224]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd7U;
                ++(vlSelf->__Vcoverage[223]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdaU;
                ++(vlSelf->__Vcoverage[222]);
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdcU;
                            ++(vlSelf->__Vcoverage[221]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdeU;
                            ++(vlSelf->__Vcoverage[220]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe0U;
                        ++(vlSelf->__Vcoverage[219]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe2U;
                        ++(vlSelf->__Vcoverage[218]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe4U;
                        ++(vlSelf->__Vcoverage[217]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe6U;
                        ++(vlSelf->__Vcoverage[216]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe8U;
                    ++(vlSelf->__Vcoverage[215]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xeaU;
                    ++(vlSelf->__Vcoverage[214]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xebU;
                        ++(vlSelf->__Vcoverage[213]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xedU;
                        ++(vlSelf->__Vcoverage[212]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xeeU;
                    ++(vlSelf->__Vcoverage[211]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf0U;
                    ++(vlSelf->__Vcoverage[210]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf1U;
                    ++(vlSelf->__Vcoverage[209]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf3U;
                    ++(vlSelf->__Vcoverage[208]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf4U;
                ++(vlSelf->__Vcoverage[207]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf5U;
                ++(vlSelf->__Vcoverage[206]);
            }
        } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf6U;
                        ++(vlSelf->__Vcoverage[205]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf8U;
                        ++(vlSelf->__Vcoverage[204]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf9U;
                    ++(vlSelf->__Vcoverage[203]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfaU;
                    ++(vlSelf->__Vcoverage[202]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfaU;
                    ++(vlSelf->__Vcoverage[201]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfbU;
                    ++(vlSelf->__Vcoverage[200]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfcU;
                ++(vlSelf->__Vcoverage[199]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfdU;
                ++(vlSelf->__Vcoverage[198]);
            }
        } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfdU;
                    ++(vlSelf->__Vcoverage[197]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                    ++(vlSelf->__Vcoverage[196]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                ++(vlSelf->__Vcoverage[195]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                ++(vlSelf->__Vcoverage[194]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                ++(vlSelf->__Vcoverage[193]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                ++(vlSelf->__Vcoverage[192]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
            ++(vlSelf->__Vcoverage[191]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
            ++(vlSelf->__Vcoverage[190]);
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                            ++(vlSelf->__Vcoverage[189]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                            ++(vlSelf->__Vcoverage[188]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                        ++(vlSelf->__Vcoverage[187]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                        ++(vlSelf->__Vcoverage[186]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                        ++(vlSelf->__Vcoverage[185]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                        ++(vlSelf->__Vcoverage[184]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfdU;
                    ++(vlSelf->__Vcoverage[183]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfdU;
                    ++(vlSelf->__Vcoverage[182]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfcU;
                        ++(vlSelf->__Vcoverage[181]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfbU;
                        ++(vlSelf->__Vcoverage[180]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfaU;
                    ++(vlSelf->__Vcoverage[179]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfaU;
                    ++(vlSelf->__Vcoverage[178]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf9U;
                    ++(vlSelf->__Vcoverage[177]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf8U;
                    ++(vlSelf->__Vcoverage[176]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf6U;
                ++(vlSelf->__Vcoverage[175]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf5U;
                ++(vlSelf->__Vcoverage[174]);
            }
        } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf4U;
                        ++(vlSelf->__Vcoverage[173]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf3U;
                        ++(vlSelf->__Vcoverage[172]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf1U;
                    ++(vlSelf->__Vcoverage[171]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf0U;
                    ++(vlSelf->__Vcoverage[170]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xeeU;
                    ++(vlSelf->__Vcoverage[169]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xedU;
                    ++(vlSelf->__Vcoverage[168]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xebU;
                ++(vlSelf->__Vcoverage[167]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xeaU;
                ++(vlSelf->__Vcoverage[166]);
            }
        } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe8U;
                    ++(vlSelf->__Vcoverage[165]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe6U;
                    ++(vlSelf->__Vcoverage[164]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe4U;
                ++(vlSelf->__Vcoverage[163]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe2U;
                ++(vlSelf->__Vcoverage[162]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe0U;
                ++(vlSelf->__Vcoverage[161]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdeU;
                ++(vlSelf->__Vcoverage[160]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdcU;
            ++(vlSelf->__Vcoverage[159]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdaU;
            ++(vlSelf->__Vcoverage[158]);
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd7U;
                        ++(vlSelf->__Vcoverage[157]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd5U;
                        ++(vlSelf->__Vcoverage[156]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd3U;
                    ++(vlSelf->__Vcoverage[155]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd0U;
                    ++(vlSelf->__Vcoverage[154]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xceU;
                    ++(vlSelf->__Vcoverage[153]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xcbU;
                    ++(vlSelf->__Vcoverage[152]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc9U;
                ++(vlSelf->__Vcoverage[151]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc6U;
                ++(vlSelf->__Vcoverage[150]);
            }
        } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc4U;
                    ++(vlSelf->__Vcoverage[149]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc1U;
                    ++(vlSelf->__Vcoverage[148]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xbeU;
                ++(vlSelf->__Vcoverage[147]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xbcU;
                ++(vlSelf->__Vcoverage[146]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb9U;
                ++(vlSelf->__Vcoverage[145]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb6U;
                ++(vlSelf->__Vcoverage[144]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb3U;
            ++(vlSelf->__Vcoverage[143]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb0U;
            ++(vlSelf->__Vcoverage[142]);
        }
    } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xadU;
                    ++(vlSelf->__Vcoverage[141]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xaaU;
                    ++(vlSelf->__Vcoverage[140]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa7U;
                ++(vlSelf->__Vcoverage[139]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa5U;
                ++(vlSelf->__Vcoverage[138]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa2U;
                ++(vlSelf->__Vcoverage[137]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x9eU;
                ++(vlSelf->__Vcoverage[136]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x9bU;
            ++(vlSelf->__Vcoverage[135]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x98U;
            ++(vlSelf->__Vcoverage[134]);
        }
    } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x95U;
                ++(vlSelf->__Vcoverage[133]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x92U;
                ++(vlSelf->__Vcoverage[132]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x8fU;
            ++(vlSelf->__Vcoverage[131]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x8cU;
            ++(vlSelf->__Vcoverage[130]);
        }
    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x89U;
            ++(vlSelf->__Vcoverage[129]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x86U;
            ++(vlSelf->__Vcoverage[128]);
        }
    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x83U;
        ++(vlSelf->__Vcoverage[127]);
    } else {
        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x80U;
        ++(vlSelf->__Vcoverage[126]);
    }
    ++(vlSelf->__Vcoverage[383]);
    vlSelfRef.r2r_dac_digital__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.r2r_dac_digital__DOT__ui_in = vlSelfRef.ui_in;
    vlSelfRef.r2r_dac_digital__DOT__mode = vlSelfRef.mode;
    vlSelfRef.r2r_dac_digital__DOT__uo_out = vlSelfRef.r2r_dac_digital__DOT__dac_code;
    vlSelfRef.r2r_dac_digital__DOT__ena = vlSelfRef.ena;
    vlSelfRef.r2r_dac_digital__DOT__slow = vlSelfRef.slow;
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__clk) 
         ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.r2r_dac_digital__DOT__clk, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__clk);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__clk 
            = vlSelfRef.r2r_dac_digital__DOT__clk;
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__sine_val) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__sine_val)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 108, vlSelfRef.r2r_dac_digital__DOT__sine_val, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__sine_val);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__sine_val 
            = vlSelfRef.r2r_dac_digital__DOT__sine_val;
    }
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__rst_n) 
         ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.r2r_dac_digital__DOT__rst_n, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__rst_n);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__rst_n 
            = vlSelfRef.r2r_dac_digital__DOT__rst_n;
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__ui_in) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__ui_in)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 6, vlSelfRef.r2r_dac_digital__DOT__ui_in, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__ui_in);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__ui_in 
            = vlSelfRef.r2r_dac_digital__DOT__ui_in;
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__mode) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 22, vlSelfRef.r2r_dac_digital__DOT__mode, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__mode);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__mode 
            = vlSelfRef.r2r_dac_digital__DOT__mode;
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__uo_out) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__uo_out)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 44, vlSelfRef.r2r_dac_digital__DOT__uo_out, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__uo_out);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__uo_out 
            = vlSelfRef.r2r_dac_digital__DOT__uo_out;
    }
    vlSelfRef.uo_out = vlSelfRef.r2r_dac_digital__DOT__uo_out;
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__ena) 
         ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__ena))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 4, vlSelfRef.r2r_dac_digital__DOT__ena, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__ena);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__ena 
            = vlSelfRef.r2r_dac_digital__DOT__ena;
    }
    vlSelfRef.r2r_dac_digital__DOT__unused_ena = vlSelfRef.r2r_dac_digital__DOT__ena;
    if ((0xffU == (IData)(vlSelfRef.r2r_dac_digital__DOT__presc))) {
        ++(vlSelf->__Vcoverage[386]);
    }
    if ((1U & (~ (IData)(vlSelfRef.r2r_dac_digital__DOT__slow)))) {
        ++(vlSelf->__Vcoverage[387]);
    }
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__slow) 
         & (0xffU != (IData)(vlSelfRef.r2r_dac_digital__DOT__presc)))) {
        ++(vlSelf->__Vcoverage[388]);
    }
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__slow) 
         ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__slow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 26, vlSelfRef.r2r_dac_digital__DOT__slow, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__slow);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__slow 
            = vlSelfRef.r2r_dac_digital__DOT__slow;
    }
    vlSelfRef.r2r_dac_digital__DOT__step = (1U & ((~ (IData)(vlSelfRef.r2r_dac_digital__DOT__slow)) 
                                                  | (0xffU 
                                                     == (IData)(vlSelfRef.r2r_dac_digital__DOT__presc))));
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__unused_ena) 
         ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__unused_ena))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 124, vlSelfRef.r2r_dac_digital__DOT__unused_ena, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__unused_ena);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__unused_ena 
            = vlSelfRef.r2r_dac_digital__DOT__unused_ena;
    }
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__step) 
         ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__step))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 384, vlSelfRef.r2r_dac_digital__DOT__step, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__step);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__step 
            = vlSelfRef.r2r_dac_digital__DOT__step;
    }
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.r2r_dac_digital__DOT__rst_n) {
        vlSelfRef.r2r_dac_digital__DOT__presc = (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.r2r_dac_digital__DOT__presc)));
        if ((0U == (IData)(vlSelfRef.r2r_dac_digital__DOT__mode))) {
            ++(vlSelf->__Vcoverage[389]);
            vlSelfRef.r2r_dac_digital__DOT__dac_code 
                = vlSelfRef.r2r_dac_digital__DOT__ui_in;
        } else if ((1U == (IData)(vlSelfRef.r2r_dac_digital__DOT__mode))) {
            ++(vlSelf->__Vcoverage[390]);
            vlSelfRef.r2r_dac_digital__DOT__dac_code 
                = vlSelfRef.r2r_dac_digital__DOT__cnt;
        } else if ((2U == (IData)(vlSelfRef.r2r_dac_digital__DOT__mode))) {
            ++(vlSelf->__Vcoverage[391]);
            vlSelfRef.r2r_dac_digital__DOT__dac_code 
                = vlSelfRef.r2r_dac_digital__DOT__sine_val;
        } else {
            ++(vlSelf->__Vcoverage[392]);
            vlSelfRef.r2r_dac_digital__DOT__dac_code 
                = vlSelfRef.r2r_dac_digital__DOT__code_reg;
        }
        if ((0U == (IData)(vlSelfRef.r2r_dac_digital__DOT__mode))) {
            ++(vlSelf->__Vcoverage[393]);
            vlSelfRef.r2r_dac_digital__DOT__code_reg 
                = vlSelfRef.r2r_dac_digital__DOT__ui_in;
        } else {
            ++(vlSelf->__Vcoverage[394]);
        }
        if (vlSelfRef.r2r_dac_digital__DOT__step) {
            vlSelfRef.r2r_dac_digital__DOT__cnt = (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt)));
            ++(vlSelf->__Vcoverage[395]);
        } else {
            ++(vlSelf->__Vcoverage[396]);
        }
        ++(vlSelf->__Vcoverage[398]);
    } else {
        vlSelfRef.r2r_dac_digital__DOT__cnt = 0U;
        vlSelfRef.r2r_dac_digital__DOT__presc = 0U;
        ++(vlSelf->__Vcoverage[397]);
        vlSelfRef.r2r_dac_digital__DOT__code_reg = 0U;
        vlSelfRef.r2r_dac_digital__DOT__dac_code = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.r2r_dac_digital__DOT__rst_n)))) {
        ++(vlSelf->__Vcoverage[399]);
    }
    if (vlSelfRef.r2r_dac_digital__DOT__rst_n) {
        ++(vlSelf->__Vcoverage[400]);
    }
    ++(vlSelf->__Vcoverage[401]);
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__code_reg) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__code_reg)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 60, vlSelfRef.r2r_dac_digital__DOT__code_reg, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__code_reg);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__code_reg 
            = vlSelfRef.r2r_dac_digital__DOT__code_reg;
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__cnt) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__cnt)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 76, vlSelfRef.r2r_dac_digital__DOT__cnt, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__cnt);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__cnt 
            = vlSelfRef.r2r_dac_digital__DOT__cnt;
    }
    if ((0x00000080U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((0x00000040U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((0x00000020U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x7cU;
                                    ++(vlSelf->__Vcoverage[381]);
                                } else {
                                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x79U;
                                    ++(vlSelf->__Vcoverage[380]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x76U;
                                ++(vlSelf->__Vcoverage[379]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x73U;
                                ++(vlSelf->__Vcoverage[378]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x70U;
                                ++(vlSelf->__Vcoverage[377]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x6dU;
                                ++(vlSelf->__Vcoverage[376]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x6aU;
                            ++(vlSelf->__Vcoverage[375]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x67U;
                            ++(vlSelf->__Vcoverage[374]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x64U;
                                ++(vlSelf->__Vcoverage[373]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x61U;
                                ++(vlSelf->__Vcoverage[372]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x5dU;
                            ++(vlSelf->__Vcoverage[371]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x5aU;
                            ++(vlSelf->__Vcoverage[370]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x58U;
                            ++(vlSelf->__Vcoverage[369]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x55U;
                            ++(vlSelf->__Vcoverage[368]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x52U;
                        ++(vlSelf->__Vcoverage[367]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x4fU;
                        ++(vlSelf->__Vcoverage[366]);
                    }
                } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x4cU;
                                ++(vlSelf->__Vcoverage[365]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x49U;
                                ++(vlSelf->__Vcoverage[364]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x46U;
                            ++(vlSelf->__Vcoverage[363]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x43U;
                            ++(vlSelf->__Vcoverage[362]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x41U;
                            ++(vlSelf->__Vcoverage[361]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x3eU;
                            ++(vlSelf->__Vcoverage[360]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x3bU;
                        ++(vlSelf->__Vcoverage[359]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x39U;
                        ++(vlSelf->__Vcoverage[358]);
                    }
                } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x36U;
                            ++(vlSelf->__Vcoverage[357]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x34U;
                            ++(vlSelf->__Vcoverage[356]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x31U;
                        ++(vlSelf->__Vcoverage[355]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2fU;
                        ++(vlSelf->__Vcoverage[354]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2cU;
                        ++(vlSelf->__Vcoverage[353]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2aU;
                        ++(vlSelf->__Vcoverage[352]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x28U;
                    ++(vlSelf->__Vcoverage[351]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x25U;
                    ++(vlSelf->__Vcoverage[350]);
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x23U;
                                ++(vlSelf->__Vcoverage[349]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x21U;
                                ++(vlSelf->__Vcoverage[348]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1fU;
                            ++(vlSelf->__Vcoverage[347]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1dU;
                            ++(vlSelf->__Vcoverage[346]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1bU;
                            ++(vlSelf->__Vcoverage[345]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x19U;
                            ++(vlSelf->__Vcoverage[344]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x17U;
                        ++(vlSelf->__Vcoverage[343]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x15U;
                        ++(vlSelf->__Vcoverage[342]);
                    }
                } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x14U;
                            ++(vlSelf->__Vcoverage[341]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x12U;
                            ++(vlSelf->__Vcoverage[340]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x11U;
                        ++(vlSelf->__Vcoverage[339]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0fU;
                        ++(vlSelf->__Vcoverage[338]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0eU;
                        ++(vlSelf->__Vcoverage[337]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0cU;
                        ++(vlSelf->__Vcoverage[336]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0bU;
                    ++(vlSelf->__Vcoverage[335]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0aU;
                    ++(vlSelf->__Vcoverage[334]);
                }
            } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 9U;
                            ++(vlSelf->__Vcoverage[333]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 7U;
                            ++(vlSelf->__Vcoverage[332]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 6U;
                        ++(vlSelf->__Vcoverage[331]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 5U;
                        ++(vlSelf->__Vcoverage[330]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 5U;
                        ++(vlSelf->__Vcoverage[329]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 4U;
                        ++(vlSelf->__Vcoverage[328]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 3U;
                    ++(vlSelf->__Vcoverage[327]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 2U;
                    ++(vlSelf->__Vcoverage[326]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 2U;
                        ++(vlSelf->__Vcoverage[325]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                        ++(vlSelf->__Vcoverage[324]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                    ++(vlSelf->__Vcoverage[323]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                    ++(vlSelf->__Vcoverage[322]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                    ++(vlSelf->__Vcoverage[321]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                    ++(vlSelf->__Vcoverage[320]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                ++(vlSelf->__Vcoverage[319]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                ++(vlSelf->__Vcoverage[318]);
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                                ++(vlSelf->__Vcoverage[317]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                                ++(vlSelf->__Vcoverage[316]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0U;
                            ++(vlSelf->__Vcoverage[315]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                            ++(vlSelf->__Vcoverage[314]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                            ++(vlSelf->__Vcoverage[313]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 1U;
                            ++(vlSelf->__Vcoverage[312]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 2U;
                        ++(vlSelf->__Vcoverage[311]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 2U;
                        ++(vlSelf->__Vcoverage[310]);
                    }
                } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 3U;
                            ++(vlSelf->__Vcoverage[309]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 4U;
                            ++(vlSelf->__Vcoverage[308]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 5U;
                        ++(vlSelf->__Vcoverage[307]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 5U;
                        ++(vlSelf->__Vcoverage[306]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 6U;
                        ++(vlSelf->__Vcoverage[305]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 7U;
                        ++(vlSelf->__Vcoverage[304]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 9U;
                    ++(vlSelf->__Vcoverage[303]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0aU;
                    ++(vlSelf->__Vcoverage[302]);
                }
            } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0bU;
                            ++(vlSelf->__Vcoverage[301]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0cU;
                            ++(vlSelf->__Vcoverage[300]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0eU;
                        ++(vlSelf->__Vcoverage[299]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x0fU;
                        ++(vlSelf->__Vcoverage[298]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x11U;
                        ++(vlSelf->__Vcoverage[297]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x12U;
                        ++(vlSelf->__Vcoverage[296]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x14U;
                    ++(vlSelf->__Vcoverage[295]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x15U;
                    ++(vlSelf->__Vcoverage[294]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x17U;
                        ++(vlSelf->__Vcoverage[293]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x19U;
                        ++(vlSelf->__Vcoverage[292]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1bU;
                    ++(vlSelf->__Vcoverage[291]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1dU;
                    ++(vlSelf->__Vcoverage[290]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x1fU;
                    ++(vlSelf->__Vcoverage[289]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x21U;
                    ++(vlSelf->__Vcoverage[288]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x23U;
                ++(vlSelf->__Vcoverage[287]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x25U;
                ++(vlSelf->__Vcoverage[286]);
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x28U;
                            ++(vlSelf->__Vcoverage[285]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2aU;
                            ++(vlSelf->__Vcoverage[284]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2cU;
                        ++(vlSelf->__Vcoverage[283]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x2fU;
                        ++(vlSelf->__Vcoverage[282]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x31U;
                        ++(vlSelf->__Vcoverage[281]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x34U;
                        ++(vlSelf->__Vcoverage[280]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x36U;
                    ++(vlSelf->__Vcoverage[279]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x39U;
                    ++(vlSelf->__Vcoverage[278]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x3bU;
                        ++(vlSelf->__Vcoverage[277]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x3eU;
                        ++(vlSelf->__Vcoverage[276]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x41U;
                    ++(vlSelf->__Vcoverage[275]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x43U;
                    ++(vlSelf->__Vcoverage[274]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x46U;
                    ++(vlSelf->__Vcoverage[273]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x49U;
                    ++(vlSelf->__Vcoverage[272]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x4cU;
                ++(vlSelf->__Vcoverage[271]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x4fU;
                ++(vlSelf->__Vcoverage[270]);
            }
        } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x52U;
                        ++(vlSelf->__Vcoverage[269]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x55U;
                        ++(vlSelf->__Vcoverage[268]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x58U;
                    ++(vlSelf->__Vcoverage[267]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x5aU;
                    ++(vlSelf->__Vcoverage[266]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x5dU;
                    ++(vlSelf->__Vcoverage[265]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x61U;
                    ++(vlSelf->__Vcoverage[264]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x64U;
                ++(vlSelf->__Vcoverage[263]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x67U;
                ++(vlSelf->__Vcoverage[262]);
            }
        } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x6aU;
                    ++(vlSelf->__Vcoverage[261]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x6dU;
                    ++(vlSelf->__Vcoverage[260]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x70U;
                ++(vlSelf->__Vcoverage[259]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x73U;
                ++(vlSelf->__Vcoverage[258]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x76U;
                ++(vlSelf->__Vcoverage[257]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x79U;
                ++(vlSelf->__Vcoverage[256]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x7cU;
            ++(vlSelf->__Vcoverage[255]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x80U;
            ++(vlSelf->__Vcoverage[254]);
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((0x00000020U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x83U;
                                ++(vlSelf->__Vcoverage[253]);
                            } else {
                                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x86U;
                                ++(vlSelf->__Vcoverage[252]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x89U;
                            ++(vlSelf->__Vcoverage[251]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x8cU;
                            ++(vlSelf->__Vcoverage[250]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x8fU;
                            ++(vlSelf->__Vcoverage[249]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x92U;
                            ++(vlSelf->__Vcoverage[248]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x95U;
                        ++(vlSelf->__Vcoverage[247]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x98U;
                        ++(vlSelf->__Vcoverage[246]);
                    }
                } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x9bU;
                            ++(vlSelf->__Vcoverage[245]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x9eU;
                            ++(vlSelf->__Vcoverage[244]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa2U;
                        ++(vlSelf->__Vcoverage[243]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa5U;
                        ++(vlSelf->__Vcoverage[242]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa7U;
                        ++(vlSelf->__Vcoverage[241]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xaaU;
                        ++(vlSelf->__Vcoverage[240]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xadU;
                    ++(vlSelf->__Vcoverage[239]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb0U;
                    ++(vlSelf->__Vcoverage[238]);
                }
            } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb3U;
                            ++(vlSelf->__Vcoverage[237]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb6U;
                            ++(vlSelf->__Vcoverage[236]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb9U;
                        ++(vlSelf->__Vcoverage[235]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xbcU;
                        ++(vlSelf->__Vcoverage[234]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xbeU;
                        ++(vlSelf->__Vcoverage[233]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc1U;
                        ++(vlSelf->__Vcoverage[232]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc4U;
                    ++(vlSelf->__Vcoverage[231]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc6U;
                    ++(vlSelf->__Vcoverage[230]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc9U;
                        ++(vlSelf->__Vcoverage[229]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xcbU;
                        ++(vlSelf->__Vcoverage[228]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xceU;
                    ++(vlSelf->__Vcoverage[227]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd0U;
                    ++(vlSelf->__Vcoverage[226]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd3U;
                    ++(vlSelf->__Vcoverage[225]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd5U;
                    ++(vlSelf->__Vcoverage[224]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd7U;
                ++(vlSelf->__Vcoverage[223]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdaU;
                ++(vlSelf->__Vcoverage[222]);
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdcU;
                            ++(vlSelf->__Vcoverage[221]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdeU;
                            ++(vlSelf->__Vcoverage[220]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe0U;
                        ++(vlSelf->__Vcoverage[219]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe2U;
                        ++(vlSelf->__Vcoverage[218]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe4U;
                        ++(vlSelf->__Vcoverage[217]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe6U;
                        ++(vlSelf->__Vcoverage[216]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe8U;
                    ++(vlSelf->__Vcoverage[215]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xeaU;
                    ++(vlSelf->__Vcoverage[214]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xebU;
                        ++(vlSelf->__Vcoverage[213]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xedU;
                        ++(vlSelf->__Vcoverage[212]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xeeU;
                    ++(vlSelf->__Vcoverage[211]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf0U;
                    ++(vlSelf->__Vcoverage[210]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf1U;
                    ++(vlSelf->__Vcoverage[209]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf3U;
                    ++(vlSelf->__Vcoverage[208]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf4U;
                ++(vlSelf->__Vcoverage[207]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf5U;
                ++(vlSelf->__Vcoverage[206]);
            }
        } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf6U;
                        ++(vlSelf->__Vcoverage[205]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf8U;
                        ++(vlSelf->__Vcoverage[204]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf9U;
                    ++(vlSelf->__Vcoverage[203]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfaU;
                    ++(vlSelf->__Vcoverage[202]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfaU;
                    ++(vlSelf->__Vcoverage[201]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfbU;
                    ++(vlSelf->__Vcoverage[200]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfcU;
                ++(vlSelf->__Vcoverage[199]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfdU;
                ++(vlSelf->__Vcoverage[198]);
            }
        } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfdU;
                    ++(vlSelf->__Vcoverage[197]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                    ++(vlSelf->__Vcoverage[196]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                ++(vlSelf->__Vcoverage[195]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                ++(vlSelf->__Vcoverage[194]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                ++(vlSelf->__Vcoverage[193]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                ++(vlSelf->__Vcoverage[192]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
            ++(vlSelf->__Vcoverage[191]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
            ++(vlSelf->__Vcoverage[190]);
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                            ++(vlSelf->__Vcoverage[189]);
                        } else {
                            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                            ++(vlSelf->__Vcoverage[188]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xffU;
                        ++(vlSelf->__Vcoverage[187]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                        ++(vlSelf->__Vcoverage[186]);
                    }
                } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                        ++(vlSelf->__Vcoverage[185]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfeU;
                        ++(vlSelf->__Vcoverage[184]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfdU;
                    ++(vlSelf->__Vcoverage[183]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfdU;
                    ++(vlSelf->__Vcoverage[182]);
                }
            } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfcU;
                        ++(vlSelf->__Vcoverage[181]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfbU;
                        ++(vlSelf->__Vcoverage[180]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfaU;
                    ++(vlSelf->__Vcoverage[179]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xfaU;
                    ++(vlSelf->__Vcoverage[178]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf9U;
                    ++(vlSelf->__Vcoverage[177]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf8U;
                    ++(vlSelf->__Vcoverage[176]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf6U;
                ++(vlSelf->__Vcoverage[175]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf5U;
                ++(vlSelf->__Vcoverage[174]);
            }
        } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf4U;
                        ++(vlSelf->__Vcoverage[173]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf3U;
                        ++(vlSelf->__Vcoverage[172]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf1U;
                    ++(vlSelf->__Vcoverage[171]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xf0U;
                    ++(vlSelf->__Vcoverage[170]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xeeU;
                    ++(vlSelf->__Vcoverage[169]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xedU;
                    ++(vlSelf->__Vcoverage[168]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xebU;
                ++(vlSelf->__Vcoverage[167]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xeaU;
                ++(vlSelf->__Vcoverage[166]);
            }
        } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe8U;
                    ++(vlSelf->__Vcoverage[165]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe6U;
                    ++(vlSelf->__Vcoverage[164]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe4U;
                ++(vlSelf->__Vcoverage[163]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe2U;
                ++(vlSelf->__Vcoverage[162]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xe0U;
                ++(vlSelf->__Vcoverage[161]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdeU;
                ++(vlSelf->__Vcoverage[160]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdcU;
            ++(vlSelf->__Vcoverage[159]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xdaU;
            ++(vlSelf->__Vcoverage[158]);
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd7U;
                        ++(vlSelf->__Vcoverage[157]);
                    } else {
                        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd5U;
                        ++(vlSelf->__Vcoverage[156]);
                    }
                } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd3U;
                    ++(vlSelf->__Vcoverage[155]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xd0U;
                    ++(vlSelf->__Vcoverage[154]);
                }
            } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xceU;
                    ++(vlSelf->__Vcoverage[153]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xcbU;
                    ++(vlSelf->__Vcoverage[152]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc9U;
                ++(vlSelf->__Vcoverage[151]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc6U;
                ++(vlSelf->__Vcoverage[150]);
            }
        } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc4U;
                    ++(vlSelf->__Vcoverage[149]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xc1U;
                    ++(vlSelf->__Vcoverage[148]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xbeU;
                ++(vlSelf->__Vcoverage[147]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xbcU;
                ++(vlSelf->__Vcoverage[146]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb9U;
                ++(vlSelf->__Vcoverage[145]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb6U;
                ++(vlSelf->__Vcoverage[144]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb3U;
            ++(vlSelf->__Vcoverage[143]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xb0U;
            ++(vlSelf->__Vcoverage[142]);
        }
    } else if ((8U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xadU;
                    ++(vlSelf->__Vcoverage[141]);
                } else {
                    vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xaaU;
                    ++(vlSelf->__Vcoverage[140]);
                }
            } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa7U;
                ++(vlSelf->__Vcoverage[139]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa5U;
                ++(vlSelf->__Vcoverage[138]);
            }
        } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0xa2U;
                ++(vlSelf->__Vcoverage[137]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x9eU;
                ++(vlSelf->__Vcoverage[136]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x9bU;
            ++(vlSelf->__Vcoverage[135]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x98U;
            ++(vlSelf->__Vcoverage[134]);
        }
    } else if ((4U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x95U;
                ++(vlSelf->__Vcoverage[133]);
            } else {
                vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x92U;
                ++(vlSelf->__Vcoverage[132]);
            }
        } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x8fU;
            ++(vlSelf->__Vcoverage[131]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x8cU;
            ++(vlSelf->__Vcoverage[130]);
        }
    } else if ((2U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x89U;
            ++(vlSelf->__Vcoverage[129]);
        } else {
            vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x86U;
            ++(vlSelf->__Vcoverage[128]);
        }
    } else if ((1U & (IData)(vlSelfRef.r2r_dac_digital__DOT__cnt))) {
        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x83U;
        ++(vlSelf->__Vcoverage[127]);
    } else {
        vlSelfRef.r2r_dac_digital__DOT__sine_val = 0x80U;
        ++(vlSelf->__Vcoverage[126]);
    }
    ++(vlSelf->__Vcoverage[383]);
    if ((0xffU == (IData)(vlSelfRef.r2r_dac_digital__DOT__presc))) {
        ++(vlSelf->__Vcoverage[386]);
    }
    if ((1U & (~ (IData)(vlSelfRef.r2r_dac_digital__DOT__slow)))) {
        ++(vlSelf->__Vcoverage[387]);
    }
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__slow) 
         & (0xffU != (IData)(vlSelfRef.r2r_dac_digital__DOT__presc)))) {
        ++(vlSelf->__Vcoverage[388]);
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__presc) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__presc)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 92, vlSelfRef.r2r_dac_digital__DOT__presc, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__presc);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__presc 
            = vlSelfRef.r2r_dac_digital__DOT__presc;
    }
    vlSelfRef.r2r_dac_digital__DOT__step = (1U & ((~ (IData)(vlSelfRef.r2r_dac_digital__DOT__slow)) 
                                                  | (0xffU 
                                                     == (IData)(vlSelfRef.r2r_dac_digital__DOT__presc))));
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__dac_code) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__dac_code)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 28, vlSelfRef.r2r_dac_digital__DOT__dac_code, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__dac_code);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__dac_code 
            = vlSelfRef.r2r_dac_digital__DOT__dac_code;
    }
    vlSelfRef.dac_code = vlSelfRef.r2r_dac_digital__DOT__dac_code;
    vlSelfRef.r2r_dac_digital__DOT__uo_out = vlSelfRef.r2r_dac_digital__DOT__dac_code;
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__sine_val) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__sine_val)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 108, vlSelfRef.r2r_dac_digital__DOT__sine_val, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__sine_val);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__sine_val 
            = vlSelfRef.r2r_dac_digital__DOT__sine_val;
    }
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__step) 
         ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__step))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 384, vlSelfRef.r2r_dac_digital__DOT__step, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__step);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__step 
            = vlSelfRef.r2r_dac_digital__DOT__step;
    }
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__uo_out) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__uo_out)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 44, vlSelfRef.r2r_dac_digital__DOT__uo_out, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__uo_out);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__uo_out 
            = vlSelfRef.r2r_dac_digital__DOT__uo_out;
    }
    vlSelfRef.uo_out = vlSelfRef.r2r_dac_digital__DOT__uo_out;
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.ena & 0xfeU)))) {
        Verilated::overWidthError("ena");
    }
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xfcU)))) {
        Verilated::overWidthError("mode");
    }
    if (VL_UNLIKELY(((vlSelfRef.slow & 0xfeU)))) {
        Verilated::overWidthError("slow");
    }
}
#endif  // VL_DEBUG
