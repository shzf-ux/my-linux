// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder42.h for the primary calling header

#include "verilated.h"

#include "Vencoder42__Syms.h"
#include "Vencoder42___024root.h"

void Vencoder42___024root___ctor_var_reset(Vencoder42___024root* vlSelf);

Vencoder42___024root::Vencoder42___024root(Vencoder42__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vencoder42___024root___ctor_var_reset(this);
}

void Vencoder42___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vencoder42___024root::~Vencoder42___024root() {
}
