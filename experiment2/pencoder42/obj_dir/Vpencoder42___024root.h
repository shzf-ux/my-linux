// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpencoder42.h for the primary calling header

#ifndef VERILATED_VPENCODER42___024ROOT_H_
#define VERILATED_VPENCODER42___024ROOT_H_  // guard

#include "verilated.h"

class Vpencoder42__Syms;

class Vpencoder42___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,3,0);
    VL_OUT8(y,1,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ pencoder42__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpencoder42__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpencoder42___024root(Vpencoder42__Syms* symsp, const char* v__name);
    ~Vpencoder42___024root();
    VL_UNCOPYABLE(Vpencoder42___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
