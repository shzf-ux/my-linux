// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder42.h for the primary calling header

#include "verilated.h"

#include "Vencoder42___024root.h"

extern const VlUnpacked<CData/*1:0*/, 32> Vencoder42__ConstPool__TABLE_h780d35c4_0;

VL_INLINE_OPT void Vencoder42___024root___ico_sequent__TOP__0(Vencoder42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder42___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    vlSelf->y = Vencoder42__ConstPool__TABLE_h780d35c4_0
        [__Vtableidx1];
}

void Vencoder42___024root___eval_ico(Vencoder42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder42___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vencoder42___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vencoder42___024root___eval_act(Vencoder42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder42___024root___eval_act\n"); );
}

void Vencoder42___024root___eval_nba(Vencoder42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder42___024root___eval_nba\n"); );
}

void Vencoder42___024root___eval_triggers__ico(Vencoder42___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder42___024root___dump_triggers__ico(Vencoder42___024root* vlSelf);
#endif  // VL_DEBUG
void Vencoder42___024root___eval_triggers__act(Vencoder42___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder42___024root___dump_triggers__act(Vencoder42___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder42___024root___dump_triggers__nba(Vencoder42___024root* vlSelf);
#endif  // VL_DEBUG

void Vencoder42___024root___eval(Vencoder42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder42___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vencoder42___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vencoder42___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("encoder42.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vencoder42___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vencoder42___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vencoder42___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("encoder42.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vencoder42___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vencoder42___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("encoder42.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vencoder42___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vencoder42___024root___eval_debug_assertions(Vencoder42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder42___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->x & 0xf0U))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
