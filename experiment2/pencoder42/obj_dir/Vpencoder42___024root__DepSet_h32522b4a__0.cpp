// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpencoder42.h for the primary calling header

#include "verilated.h"

#include "Vpencoder42__Syms.h"
#include "Vpencoder42___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpencoder42___024root___dump_triggers__ico(Vpencoder42___024root* vlSelf);
#endif  // VL_DEBUG

void Vpencoder42___024root___eval_triggers__ico(Vpencoder42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder42___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpencoder42___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpencoder42___024root___dump_triggers__act(Vpencoder42___024root* vlSelf);
#endif  // VL_DEBUG

void Vpencoder42___024root___eval_triggers__act(Vpencoder42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder42___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpencoder42___024root___dump_triggers__act(vlSelf);
    }
#endif
}
