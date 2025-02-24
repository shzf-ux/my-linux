// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecoder24.h"
#include "Vdecoder24__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdecoder24::Vdecoder24(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecoder24__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , en{vlSymsp->TOP.en}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdecoder24::Vdecoder24(const char* _vcname__)
    : Vdecoder24(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecoder24::~Vdecoder24() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecoder24___024root___eval_debug_assertions(Vdecoder24___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecoder24___024root___eval_static(Vdecoder24___024root* vlSelf);
void Vdecoder24___024root___eval_initial(Vdecoder24___024root* vlSelf);
void Vdecoder24___024root___eval_settle(Vdecoder24___024root* vlSelf);
void Vdecoder24___024root___eval(Vdecoder24___024root* vlSelf);

void Vdecoder24::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecoder24::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecoder24___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdecoder24___024root___eval_static(&(vlSymsp->TOP));
        Vdecoder24___024root___eval_initial(&(vlSymsp->TOP));
        Vdecoder24___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdecoder24___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdecoder24::eventsPending() { return false; }

uint64_t Vdecoder24::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdecoder24::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdecoder24___024root___eval_final(Vdecoder24___024root* vlSelf);

VL_ATTR_COLD void Vdecoder24::final() {
    Vdecoder24___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecoder24::hierName() const { return vlSymsp->name(); }
const char* Vdecoder24::modelName() const { return "Vdecoder24"; }
unsigned Vdecoder24::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdecoder24::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdecoder24___024root__trace_init_top(Vdecoder24___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdecoder24___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder24___024root*>(voidSelf);
    Vdecoder24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdecoder24___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdecoder24___024root__trace_register(Vdecoder24___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdecoder24::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdecoder24::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdecoder24___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
