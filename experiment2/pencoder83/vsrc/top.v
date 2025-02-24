module top (
input clk,
input en,
    input wire [7:0] in,  // 8 位输入信号
   output reg [6:0] seg,
   output flag
   );
  reg [3:0] y;  // 修改为 3 位输出，用于存储编码结果
always@(*)
begin
       casez (in)
            8'b1???????: y = 4'b111;  // 最高位为 1
            8'b01??????: y = 4'b110;  // 次高位为 1
            8'b001?????: y = 4'b101;
            8'b0001????: y = 4'b100;
            8'b0000_1000: y = 4'b011;  // 明确指定该条件，避免重叠
            8'b0000_01??: y = 4'b010;
            8'b0000_001?: y = 4'b001;
            8'b0000_0001: y = 4'b000;
            default: y = 4'b000;  // 输入全为 0 的情况
        endcase
    end

Binary_To_7Segment seg1(
	.clk(clk),
	.en(en),
	.i_Binary_Num(y),
	. seg0(seg)

);
assign flag=(y!=4'b000)&&en;




endmodule
