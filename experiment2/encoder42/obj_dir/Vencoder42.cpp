// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencoder42.h"
#include "Vencoder42__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vencoder42::Vencoder42(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vencoder42__Syms(contextp(), _vcname__, this)}
    , en{vlSymsp->TOP.en}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vencoder42::Vencoder42(const char* _vcname__)
    : Vencoder42(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vencoder42::~Vencoder42() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vencoder42___024root___eval_debug_assertions(Vencoder42___024root* vlSelf);
#endif  // VL_DEBUG
void Vencoder42___024root___eval_static(Vencoder42___024root* vlSelf);
void Vencoder42___024root___eval_initial(Vencoder42___024root* vlSelf);
void Vencoder42___024root___eval_settle(Vencoder42___024root* vlSelf);
void Vencoder42___024root___eval(Vencoder42___024root* vlSelf);

void Vencoder42::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencoder42::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencoder42___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vencoder42___024root___eval_static(&(vlSymsp->TOP));
        Vencoder42___024root___eval_initial(&(vlSymsp->TOP));
        Vencoder42___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vencoder42___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vencoder42::eventsPending() { return false; }

uint64_t Vencoder42::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vencoder42::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vencoder42___024root___eval_final(Vencoder42___024root* vlSelf);

VL_ATTR_COLD void Vencoder42::final() {
    Vencoder42___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vencoder42::hierName() const { return vlSymsp->name(); }
const char* Vencoder42::modelName() const { return "Vencoder42"; }
unsigned Vencoder42::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vencoder42::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vencoder42___024root__trace_init_top(Vencoder42___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vencoder42___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencoder42___024root*>(voidSelf);
    Vencoder42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vencoder42___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vencoder42___024root__trace_register(Vencoder42___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vencoder42::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vencoder42::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vencoder42___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
