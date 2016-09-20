`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:49:14 10/13/2015 
// Design Name: 
// Module Name:    MUX 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MUX_2X1_32bit(mux_out,a,b,sel);

input [31:0] a,b;
input sel;
output [31:0] mux_out;
assign mux_out= (sel)? b:a;

endmodule

module MUX_2X1_16bit(mux_out,a,b,sel);

input [15:0] a,b;
input sel;
output [15:0] mux_out;
assign mux_out= (sel)? b:a;

endmodule


module MUX_2X1_5bit(mux_out,a,b,sel);

input [4:0] a,b;
input sel;
output [4:0] mux_out;
assign mux_out= (sel)? b:a;

endmodule



module MUX_4X1_32bit(mux_out,a,b,c,d,sel);
input [31:0] a,b,c,d;  						// MUX Inputs
input [1:0] sel;        						// MUX Select  
output [31:0] mux_out;  					// MUX Output
reg [31:0] mux_out;
wire [1:0] sel;
always @(sel)
begin
case(sel)
0: assign mux_out=a;
1: assign mux_out=b;
2: assign mux_out=c;
3: assign mux_out=d;
endcase
end
endmodule

