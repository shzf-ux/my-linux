// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPENCODER42__SYMS_H_
#define VERILATED_VPENCODER42__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpencoder42.h"

// INCLUDE MODULE CLASSES
#include "Vpencoder42___024root.h"

// SYMS CLASS (contains all model state)
class Vpencoder42__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpencoder42* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpencoder42___024root          TOP;

    // CONSTRUCTORS
    Vpencoder42__Syms(VerilatedContext* contextp, const char* namep, Vpencoder42* modelp);
    ~Vpencoder42__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
