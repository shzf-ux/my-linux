#include <nvboard.h>
#include <Vtop.h>

// 修改为正确的类型 VBinary_To_7Segment
static Vtop dut;

// 修改参数类型为 VBinary_To_7Segment*
void nvboard_bind_all_pins(Vtop* top);

int main() {
    // 绑定引脚
    nvboard_bind_all_pins(&dut);
    // 初始化 nvboard
    nvboard_init();

    while (1) {
        // 更新 nvboard 显示
        nvboard_update();
        // 修改为操作 dut 对象的 clk 信号
        dut.clk = !dut.clk;
        // 更新电路状态
        dut.eval();
    }
    return 0;
}
