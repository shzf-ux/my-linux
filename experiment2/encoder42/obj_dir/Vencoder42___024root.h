// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencoder42.h for the primary calling header

#ifndef VERILATED_VENCODER42___024ROOT_H_
#define VERILATED_VENCODER42___024ROOT_H_  // guard

#include "verilated.h"

class Vencoder42__Syms;

class Vencoder42___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,3,0);
    VL_OUT8(y,1,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vencoder42__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencoder42___024root(Vencoder42__Syms* symsp, const char* v__name);
    ~Vencoder42___024root();
    VL_UNCOPYABLE(Vencoder42___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
