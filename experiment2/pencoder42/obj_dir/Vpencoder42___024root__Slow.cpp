// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpencoder42.h for the primary calling header

#include "verilated.h"

#include "Vpencoder42__Syms.h"
#include "Vpencoder42___024root.h"

void Vpencoder42___024root___ctor_var_reset(Vpencoder42___024root* vlSelf);

Vpencoder42___024root::Vpencoder42___024root(Vpencoder42__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpencoder42___024root___ctor_var_reset(this);
}

void Vpencoder42___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpencoder42___024root::~Vpencoder42___024root() {
}
