module Binary_To_7Segment 
  (
   input     clk,
   input en,
   input [3:0] i_Binary_Num,
   output reg [6:0] seg0
   );

  // 定义分频计数器和分频系数
  reg [31:0] counter;
  parameter DIVISOR = 500000; // 假设系统时钟为 50MHz，分频到 1Hz


wire [6:0] segs [9:0];
assign segs[0] = 7'b0000001;  // 0为亮 1为熄
assign segs[1] = 7'b1001111;
assign segs[2] = 7'b0010010;
assign segs[3] = 7'b0000110;
assign segs[4] = 7'b1001100;
assign segs[5] = 7'b0100100;
assign segs[6] = 7'b0100000;
assign segs[7] = 7'b0001111;
assign segs[8] = 7'b0000000;
assign segs[9] = 7'b0001100;
      
  // 分频计数器逻辑
  always @(posedge clk) begin
    if (counter == DIVISOR - 1) begin
      counter <= 0;
    end else begin
      counter <= counter + 1;
    end
  end

  // 仅在计数器达到分频值时更新七段数码管编码
  always @(posedge clk) begin
    if (counter == 0&en) begin
      case (i_Binary_Num)
        4'd0:seg0 = segs[0];
        4'd1:seg0 = segs[1];
        4'd2:seg0 = segs[2];
        4'd3:seg0 = segs[3];
        4'd4:seg0 = segs[4];
        4'd5:seg0 = segs[5];
        4'd6:seg0 = segs[6];
        4'd7:seg0 = segs[7];
        4'd8:seg0 = segs[8];
        4'd9:seg0 = segs[9];
        default: seg0 = segs[0];

      endcase
    end
    else if(~en)
    seg0=segs[0];
  end

 

endmodule
