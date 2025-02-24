// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpencoder42.h"
#include "Vpencoder42__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpencoder42::Vpencoder42(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpencoder42__Syms(contextp(), _vcname__, this)}
    , en{vlSymsp->TOP.en}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpencoder42::Vpencoder42(const char* _vcname__)
    : Vpencoder42(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpencoder42::~Vpencoder42() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpencoder42___024root___eval_debug_assertions(Vpencoder42___024root* vlSelf);
#endif  // VL_DEBUG
void Vpencoder42___024root___eval_static(Vpencoder42___024root* vlSelf);
void Vpencoder42___024root___eval_initial(Vpencoder42___024root* vlSelf);
void Vpencoder42___024root___eval_settle(Vpencoder42___024root* vlSelf);
void Vpencoder42___024root___eval(Vpencoder42___024root* vlSelf);

void Vpencoder42::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpencoder42::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpencoder42___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpencoder42___024root___eval_static(&(vlSymsp->TOP));
        Vpencoder42___024root___eval_initial(&(vlSymsp->TOP));
        Vpencoder42___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpencoder42___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpencoder42::eventsPending() { return false; }

uint64_t Vpencoder42::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpencoder42::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpencoder42___024root___eval_final(Vpencoder42___024root* vlSelf);

VL_ATTR_COLD void Vpencoder42::final() {
    Vpencoder42___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpencoder42::hierName() const { return vlSymsp->name(); }
const char* Vpencoder42::modelName() const { return "Vpencoder42"; }
unsigned Vpencoder42::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vpencoder42::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpencoder42___024root__trace_init_top(Vpencoder42___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpencoder42___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpencoder42___024root*>(voidSelf);
    Vpencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vpencoder42___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vpencoder42___024root__trace_register(Vpencoder42___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpencoder42::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpencoder42::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpencoder42___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
