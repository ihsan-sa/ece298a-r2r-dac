// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__r2r_dac_digital__DOT__clk__0 
        = vlSelfRef.r2r_dac_digital__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.r2r_dac_digital__DOT__clk = vlSelfRef.clk;
    vlSelfRef.r2r_dac_digital__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.r2r_dac_digital__DOT__ui_in = vlSelfRef.ui_in;
    vlSelfRef.r2r_dac_digital__DOT__mode = vlSelfRef.mode;
    vlSelfRef.r2r_dac_digital__DOT__uo_out = vlSelfRef.r2r_dac_digital__DOT__dac_code;
    vlSelfRef.r2r_dac_digital__DOT__ena = vlSelfRef.ena;
    vlSelfRef.r2r_dac_digital__DOT__slow = vlSelfRef.slow;
    if ((0U != ((IData)(vlSelfRef.r2r_dac_digital__DOT__sine_val) 
                ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__sine_val)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 108, vlSelfRef.r2r_dac_digital__DOT__sine_val, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__sine_val);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__sine_val 
            = vlSelfRef.r2r_dac_digital__DOT__sine_val;
    }
    if (((IData)(vlSelfRef.r2r_dac_digital__DOT__clk) 
         ^ (IData)(vlSelfRef.r2r_dac_digital__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.r2r_dac_digital__DOT__clk, vlSelfRef.r2r_dac_digital__DOT____Vtogcov__clk);
        vlSelfRef.r2r_dac_digital__DOT____Vtogcov__clk 
            = vlSelfRef.r2r_dac_digital__DOT__clk;
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

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge r2r_dac_digital.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4194194277674688301ull);
    vlSelf->ui_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9967284984545053805ull);
    vlSelf->mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2288075164703132177ull);
    vlSelf->slow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1685831408500947615ull);
    vlSelf->dac_code = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16079319983509187537ull);
    vlSelf->uo_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4898547878985855477ull);
    vlSelf->r2r_dac_digital__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8020319016560355095ull);
    vlSelf->r2r_dac_digital__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12798069431080892906ull);
    vlSelf->r2r_dac_digital__DOT__ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10170713789446141109ull);
    vlSelf->r2r_dac_digital__DOT__ui_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4354723317853068930ull);
    vlSelf->r2r_dac_digital__DOT__mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14914183572081410485ull);
    vlSelf->r2r_dac_digital__DOT__slow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11612201441393929265ull);
    vlSelf->r2r_dac_digital__DOT__dac_code = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13377853657752138196ull);
    vlSelf->r2r_dac_digital__DOT__uo_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8361194760207848899ull);
    vlSelf->r2r_dac_digital__DOT__code_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2598906113503141957ull);
    vlSelf->r2r_dac_digital__DOT__cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6225052281375352727ull);
    vlSelf->r2r_dac_digital__DOT__presc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3679302164131038106ull);
    vlSelf->r2r_dac_digital__DOT__sine_val = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10027949200640439009ull);
    vlSelf->r2r_dac_digital__DOT__unused_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9529587741972799750ull);
    vlSelf->r2r_dac_digital__DOT__step = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13065795380928746585ull);
    vlSelf->r2r_dac_digital__DOT____Vtogcov__clk = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__rst_n = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__ena = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__ui_in = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__mode = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__slow = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__dac_code = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__uo_out = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__code_reg = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__cnt = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__presc = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__sine_val = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__unused_ena = 0;
    vlSelf->r2r_dac_digital__DOT____Vtogcov__step = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__r2r_dac_digital__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 5, 23, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 6, 23, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 7, 23, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "ena");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 6, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 8, 23, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "ui_in");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 22, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 9, 23, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 26, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 10, 23, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "slow");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 28, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 11, 23, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "dac_code");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 44, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 12, 23, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "uo_out");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 60, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 14, 13, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "code_reg");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 76, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 15, 13, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "cnt");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 92, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 16, 13, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "presc");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 108, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 17, 13, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "sine_val");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 124, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 19, 8, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "unused_ena");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 126, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 23, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 126, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 23, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 127, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 24, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "24", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 127, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 24, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "24", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 128, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 25, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 128, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 25, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 129, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 26, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 129, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 26, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 130, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 27, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 130, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 27, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 131, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 28, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 131, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 28, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 132, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 29, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "29", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 132, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 29, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "29", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 133, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 30, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "30", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 133, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 30, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "30", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 134, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 31, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 134, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 31, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 135, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 32, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "32", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 135, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 32, 11, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "32", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 136, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 33, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "33", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 136, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 33, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "33", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 137, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 34, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "34", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 137, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 34, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "34", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 138, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 35, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "35", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 138, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 35, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "35", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 139, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 36, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "36", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 139, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 36, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "36", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 140, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 37, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 140, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 37, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 141, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 38, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "38", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 141, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 38, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "38", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 142, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 39, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "39", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 142, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 39, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "39", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 143, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 40, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "40", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 143, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 40, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "40", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 144, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 41, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 144, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 41, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 145, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 42, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "42", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 145, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 42, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "42", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 146, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 43, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 146, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 43, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 147, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 44, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 147, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 44, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 148, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 45, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 148, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 45, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 149, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 46, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 149, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 46, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 150, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 47, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "47", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 150, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 47, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "47", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 151, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 48, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "48", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 151, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 48, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "48", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 152, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 49, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 152, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 49, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 153, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 50, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "50", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 153, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 50, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "50", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 154, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 51, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 154, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 51, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 155, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 52, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "52", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 155, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 52, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "52", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 156, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 53, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 156, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 53, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 157, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 54, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "54", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 157, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 54, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "54", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 158, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 55, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 158, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 55, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 159, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 56, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "56", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 159, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 56, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "56", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 160, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 57, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 160, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 57, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 161, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 58, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "58", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 161, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 58, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "58", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 162, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 59, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 162, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 59, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 163, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 60, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "60", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 163, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 60, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "60", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 164, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 61, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "61", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 164, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 61, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "61", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 165, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 62, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "62", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 165, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 62, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "62", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 166, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 63, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "63", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 166, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 63, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "63", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 167, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 64, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "64", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 167, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 64, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "64", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 168, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 65, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "65", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 168, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 65, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "65", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 169, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 66, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "66", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 169, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 66, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "66", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 170, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 67, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "67", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 170, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 67, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "67", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 171, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 68, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "68", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 171, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 68, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "68", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 172, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 69, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "69", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 172, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 69, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "69", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 173, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 70, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "70", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 173, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 70, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "70", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 174, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 71, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "71", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 174, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 71, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "71", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 175, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 72, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "72", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 175, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 72, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "72", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 176, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 73, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "73", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 176, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 73, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "73", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 177, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 74, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "74", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 177, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 74, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "74", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 178, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 75, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "75", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 178, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 75, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "75", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 179, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 76, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "76", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 179, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 76, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "76", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 180, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 77, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "77", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 180, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 77, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "77", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 181, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 78, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "78", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 181, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 78, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "78", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 182, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 79, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "79", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 182, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 79, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "79", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 183, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 80, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "80", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 183, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 80, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "80", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 184, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 81, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "81", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 184, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 81, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "81", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 185, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 82, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "82", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 185, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 82, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "82", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 186, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 83, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "83", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 186, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 83, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "83", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 187, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 84, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "84", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 187, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 84, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "84", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 188, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 85, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "85", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 188, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 85, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "85", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 189, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 86, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "86", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 189, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 86, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "86", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 190, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 87, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "87", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 190, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 87, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "87", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 191, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 88, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "88", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 191, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 88, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "88", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 192, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 89, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "89", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 192, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 89, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "89", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 193, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 90, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "90", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 193, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 90, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "90", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 194, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 91, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "91", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 194, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 91, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "91", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 195, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 92, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "92", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 195, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 92, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "92", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 196, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 93, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "93", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 196, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 93, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "93", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 197, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 94, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 197, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 94, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 198, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 95, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "95", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 198, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 95, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "95", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 199, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 96, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "96", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 199, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 96, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "96", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 200, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 97, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "97", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 200, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 97, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "97", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 201, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 98, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "98", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 201, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 98, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "98", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 202, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 99, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "99", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 202, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 99, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "99", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 203, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 100, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "100", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 203, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 100, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "100", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 204, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 101, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "101", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 204, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 101, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "101", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 205, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 102, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "102", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 205, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 102, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "102", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 206, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 103, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "103", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 206, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 103, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "103", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 207, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 104, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "104", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 207, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 104, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "104", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 208, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 105, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "105", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 208, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 105, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "105", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 209, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 106, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "106", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 209, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 106, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "106", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 210, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 107, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "107", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 210, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 107, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "107", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 211, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 108, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "108", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 211, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 108, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "108", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 212, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 109, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "109", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 212, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 109, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "109", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 213, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 110, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "110", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 213, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 110, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "110", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 214, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 111, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "111", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 214, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 111, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "111", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 215, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 112, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "112", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 215, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 112, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "112", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 216, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 113, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "113", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 216, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 113, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "113", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 217, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 114, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "114", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 217, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 114, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "114", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 218, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 115, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "115", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 218, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 115, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "115", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 219, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 116, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "116", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 219, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 116, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "116", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 220, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 117, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "117", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 220, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 117, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "117", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 221, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 118, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "118", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 221, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 118, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "118", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 222, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 119, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "119", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 222, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 119, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "119", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 223, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 120, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "120", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 223, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 120, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "120", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 224, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 121, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "121", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 224, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 121, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "121", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 225, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 122, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "122", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 225, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 122, 12, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "122", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 226, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 123, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "123", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 226, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 123, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "123", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 227, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 124, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "124", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 227, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 124, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "124", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 228, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 125, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "125", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 228, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 125, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "125", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 229, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 126, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "126", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 229, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 126, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "126", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 230, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 127, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "127", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 230, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 127, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "127", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 231, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 128, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "128", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 231, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 128, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "128", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 232, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 129, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "129", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 232, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 129, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "129", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 233, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 130, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "130", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 233, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 130, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "130", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 234, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 131, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "131", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 234, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 131, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "131", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 235, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 132, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "132", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 235, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 132, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "132", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 236, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 133, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 236, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 133, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 237, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 134, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 237, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 134, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 238, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 135, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "135", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 238, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 135, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "135", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 239, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 136, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 239, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 136, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 240, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 137, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "137", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 240, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 137, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "137", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 241, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 138, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "138", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 241, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 138, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "138", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 242, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 139, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "139", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 242, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 139, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "139", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 243, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 140, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "140", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 243, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 140, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "140", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 244, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 141, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "141", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 244, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 141, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "141", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 245, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 142, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "142", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 245, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 142, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "142", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 246, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 143, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "143", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 246, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 143, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "143", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 247, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 144, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "144", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 247, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 144, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "144", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 248, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 145, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "145", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 248, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 145, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "145", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 249, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 146, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "146", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 249, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 146, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "146", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 250, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 147, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "147", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 250, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 147, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "147", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 251, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 148, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "148", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 251, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 148, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "148", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 252, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 149, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "149", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 252, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 149, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "149", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 253, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 150, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "150", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 253, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 150, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "150", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 254, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 151, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "151", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 254, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 151, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "151", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 255, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 152, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "152", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 255, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 152, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "152", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 256, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 153, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "153", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 256, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 153, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "153", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 257, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 154, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "154", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 257, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 154, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "154", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 258, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 155, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "155", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 258, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 155, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "155", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 259, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 156, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "156", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 259, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 156, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "156", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 260, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 157, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "157", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 260, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 157, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "157", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 261, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 158, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "158", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 261, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 158, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "158", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 262, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 159, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "159", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 262, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 159, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "159", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 263, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 160, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "160", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 263, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 160, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "160", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 264, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 161, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "161", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 264, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 161, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "161", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 265, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 162, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "162", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 265, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 162, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "162", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 266, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 163, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "163", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 266, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 163, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "163", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 267, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 164, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "164", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 267, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 164, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "164", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 268, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 165, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "165", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 268, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 165, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "165", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 269, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 166, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "166", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 269, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 166, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "166", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 270, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 167, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "167", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 270, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 167, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "167", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 271, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 168, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "168", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 271, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 168, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "168", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 272, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 169, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "169", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 272, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 169, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "169", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 273, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 170, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "170", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 273, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 170, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "170", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 274, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 171, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "171", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 274, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 171, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "171", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 275, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 172, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "172", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 275, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 172, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "172", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 276, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 173, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "173", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 276, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 173, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "173", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 277, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 174, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "174", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 277, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 174, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "174", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 278, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 175, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "175", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 278, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 175, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "175", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 279, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 176, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "176", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 279, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 176, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "176", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 280, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 177, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "177", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 280, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 177, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "177", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 281, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 178, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "178", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 281, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 178, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "178", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 282, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 179, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "179", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 282, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 179, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "179", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 283, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 180, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "180", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 283, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 180, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "180", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 284, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 181, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "181", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 284, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 181, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "181", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 285, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 182, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "182", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 285, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 182, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "182", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 286, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 183, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "183", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 286, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 183, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "183", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 287, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 184, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "184", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 287, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 184, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "184", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 288, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 185, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "185", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 288, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 185, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "185", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 289, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 186, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "186", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 289, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 186, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "186", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 290, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 187, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "187", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 290, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 187, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "187", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 291, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 188, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "188", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 291, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 188, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "188", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 292, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 189, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "189", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 292, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 189, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "189", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 293, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 190, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "190", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 293, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 190, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "190", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 294, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 191, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "191", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 294, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 191, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "191", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 295, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 192, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "192", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 295, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 192, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "192", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 296, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 193, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "193", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 296, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 193, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "193", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 297, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 194, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "194", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 297, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 194, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "194", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 298, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 195, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "195", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 298, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 195, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "195", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 299, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 196, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "196", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 299, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 196, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "196", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 300, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 197, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "197", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 300, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 197, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "197", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 301, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 198, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "198", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 301, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 198, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "198", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 302, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 199, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "199", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 302, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 199, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "199", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 303, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 200, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "200", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 303, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 200, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "200", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 304, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 201, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "201", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 304, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 201, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "201", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 305, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 202, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "202", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 305, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 202, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "202", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 306, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 203, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "203", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 306, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 203, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "203", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 307, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 204, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "204", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 307, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 204, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "204", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 308, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 205, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "205", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 308, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 205, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "205", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 309, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 206, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "206", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 309, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 206, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "206", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 310, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 207, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "207", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 310, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 207, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "207", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 311, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 208, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "208", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 311, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 208, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "208", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 312, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 209, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "209", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 312, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 209, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "209", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 313, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 210, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "210", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 313, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 210, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "210", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 314, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 211, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "211", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 314, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 211, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "211", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 315, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 212, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "212", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 315, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 212, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "212", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 316, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 213, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "213", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 316, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 213, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "213", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 317, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 214, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "214", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 317, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 214, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "214", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 318, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 215, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "215", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 318, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 215, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "215", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 319, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 216, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "216", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 319, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 216, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "216", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 320, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 217, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "217", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 320, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 217, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "217", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 321, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 218, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "218", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 321, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 218, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "218", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 322, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 219, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "219", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 322, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 219, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "219", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 323, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 220, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "220", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 323, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 220, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "220", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 324, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 221, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "221", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 324, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 221, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "221", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 325, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 222, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "222", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 325, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 222, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "222", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 326, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 223, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "223", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 326, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 223, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "223", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 327, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 224, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "224", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 327, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 224, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "224", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 328, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 225, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "225", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 328, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 225, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "225", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 329, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 226, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "226", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 329, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 226, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "226", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 330, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 227, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "227", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 330, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 227, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "227", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 331, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 228, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "228", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 331, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 228, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "228", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 332, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 229, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "229", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 332, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 229, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "229", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 333, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 230, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "230", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 333, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 230, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "230", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 334, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 231, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "231", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 334, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 231, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "231", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 335, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 232, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "232", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 335, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 232, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "232", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 336, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 233, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "233", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 336, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 233, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "233", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 337, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 234, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "234", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 337, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 234, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "234", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 338, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 235, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "235", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 338, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 235, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "235", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 339, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 236, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "236", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 339, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 236, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "236", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 340, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 237, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "237", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 340, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 237, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "237", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 341, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 238, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "238", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 341, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 238, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "238", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 342, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 239, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "239", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 342, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 239, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "239", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 343, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 240, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "240", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 343, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 240, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "240", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 344, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 241, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "241", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 344, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 241, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "241", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 345, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 242, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "242", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 345, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 242, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "242", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 346, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 243, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "243", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 346, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 243, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "243", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 347, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 244, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "244", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 347, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 244, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "244", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 348, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 245, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "245", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 348, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 245, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "245", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 349, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 246, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "246", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 349, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 246, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "246", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 350, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 247, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "247", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 350, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 247, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "247", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 351, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 248, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "248", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 351, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 248, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "248", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 352, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 249, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "249", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 352, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 249, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "249", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 353, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 250, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "250", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 353, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 250, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "250", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 354, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 251, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "251", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 354, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 251, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "251", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 355, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 252, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "252", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 355, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 252, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "252", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 356, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 253, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "253", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 356, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 253, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "253", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 357, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 254, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "254", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 357, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 254, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "254", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 358, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 255, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "255", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 358, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 255, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "255", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 359, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 256, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "256", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 359, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 256, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "256", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 360, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 257, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "257", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 360, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 257, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "257", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 361, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 258, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "258", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 361, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 258, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "258", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 362, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 259, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "259", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 362, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 259, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "259", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 363, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 260, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "260", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 363, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 260, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "260", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 364, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 261, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "261", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 364, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 261, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "261", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 365, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 262, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "262", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 365, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 262, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "262", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 366, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 263, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "263", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 366, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 263, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "263", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 367, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 264, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "264", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 367, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 264, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "264", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 368, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 265, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "265", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 368, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 265, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "265", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 369, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 266, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "266", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 369, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 266, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "266", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 370, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 267, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "267", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 370, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 267, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "267", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 371, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 268, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "268", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 371, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 268, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "268", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 372, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 269, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "269", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 372, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 269, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "269", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 373, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 270, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "270", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 373, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 270, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "270", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 374, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 271, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 374, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 271, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 375, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 272, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "272", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 375, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 272, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "272", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 376, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 273, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "273", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 376, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 273, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "273", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 377, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 274, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "274", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 377, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 274, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "274", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 378, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 275, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "275", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 378, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 275, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "275", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 379, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 276, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "276", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 379, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 276, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "276", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 380, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 277, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "277", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 380, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 277, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "277", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 381, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 278, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "278", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 381, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 278, 13, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "278", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 382, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 279, 7, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 382, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 279, 7, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 383, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 21, 3, ".r2r_dac_digital", "v_line/r2r_dac_digital", "block", "21-22", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 383, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 21, 3, ".r2r_dac_digital", "v_line/r2r_dac_digital", "block", "21-22", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 384, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 283, 8, ".r2r_dac_digital", "v_toggle/r2r_dac_digital", "step");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 386, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 283, 21, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "((presc == 8'hff)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 386, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 283, 21, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "((presc == 8'hff)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 387, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 283, 21, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "(slow==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 387, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 283, 21, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "(slow==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 388, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 283, 21, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "(slow==1 && (presc == 8'hff)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 388, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 283, 21, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "(slow==1 && (presc == 8'hff)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 389, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 293, 14, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "293", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 389, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 293, 14, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "293", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 390, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 294, 14, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "294", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 390, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 294, 14, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "294", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 391, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 295, 14, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "295", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 391, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 295, 14, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "295", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 392, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 296, 9, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "296", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 392, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 296, 9, ".r2r_dac_digital", "v_line/r2r_dac_digital", "case", "296", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 393, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 298, 7, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "if", "298-299", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 393, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 298, 7, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "if", "298-299", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 394, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 298, 8, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 394, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 298, 8, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 395, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 301, 7, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "if", "301-302", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 395, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 301, 7, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "if", "301-302", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 396, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 301, 8, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 396, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 301, 8, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 397, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 286, 5, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "if", "286-290", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 397, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 286, 5, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "if", "286-290", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 398, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 286, 6, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "else", "291-292,300", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 398, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 286, 6, ".r2r_dac_digital", "v_branch/r2r_dac_digital", "else", "291-292,300", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 399, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 286, 9, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 399, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 286, 9, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 400, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 286, 9, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 400, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 286, 9, ".r2r_dac_digital", "v_expr/r2r_dac_digital", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 401, first, true, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 285, 3, ".r2r_dac_digital", "v_line/r2r_dac_digital", "block", "285", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 401, first, false, "/home/ihsan/.cc/worktrees/ece298a/r2r-dac/blocks/r2r_dac/digital/rtl/r2r_dac_digital.v", 285, 3, ".r2r_dac_digital", "v_line/r2r_dac_digital", "block", "285", "", "", "", "");
}
