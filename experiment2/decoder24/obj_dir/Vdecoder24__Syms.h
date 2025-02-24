// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODER24__SYMS_H_
#define VERILATED_VDECODER24__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdecoder24.h"

// INCLUDE MODULE CLASSES
#include "Vdecoder24___024root.h"

// SYMS CLASS (contains all model state)
class Vdecoder24__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdecoder24* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdecoder24___024root           TOP;

    // CONSTRUCTORS
    Vdecoder24__Syms(VerilatedContext* contextp, const char* namep, Vdecoder24* modelp);
    ~Vdecoder24__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
