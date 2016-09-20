`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:07:46 09/21/2015 
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
module MUX(mux_out,a,b,sel);
input a,b,sel;
output mux_out;
assign mux_out= (sel)? b:a;
endmodule

// 2:1 4Bit MUX
module MUX_2X1_4bit(mux_out,a,b,sel);
input [3:0] a,b;  // MUX Inputs
input sel;        // MUX Select  
output [3:0] mux_out;  //MUX Output
assign mux_out[3:0]=(sel)?b[3:0]:a[3:0];
endmodule

// 2:1 5Bit MUX
module MUX_2X1_5bit(mux_out,a,b,sel);
input [4:0] a,b;  // MUX Inputs
input sel;        // MUX Select  
output [4:0] mux_out;  //MUX Output
assign mux_out[4:0]=(sel)?b[4:0]:a[4:0];
endmodule

// 2:1 6Bit MUX
module MUX_2X1_6bit(mux_out,a,b,sel);
input [5:0] a,b;  // MUX Inputs
input sel;        // MUX Select  
output [5:0] mux_out;  //MUX Output
assign mux_out[5:0]=(sel)?b[5:0]:a[5:0];
endmodule

// 2:1 7Bit MUX
module MUX_2X1_7bit(mux_out,a,b,sel);
input [6:0] a,b;  // MUX Inputs
input sel;        // MUX Select  
output [6:0] mux_out;  //MUX Output
assign mux_out[6:0]=(sel)?b[6:0]:a[6:0];
endmodule

// 2:1 8Bit MUX
module MUX_2X1_8bit(mux_out,a,b,sel);
input [7:0] a,b;  // MUX Inputs
input sel;        // MUX Select  
output [7:0] mux_out;  //MUX Output
assign mux_out[7:0]=(sel)?b[7:0]:a[7:0];
endmodule

// 2:1 9Bit MUX
module MUX_2X1_9bit(mux_out,a,b,sel);
input [8:0] a,b;  // MUX Inputs
input sel;        // MUX Select  
output [8:0] mux_out;  //MUX Output
assign mux_out[8:0]=(sel)?b[8:0]:a[8:0];
endmodule

// 2:1 10Bit MUX
module MUX_2X1_10bit(mux_out,a,b,sel);
input [9:0] a,b;  // MUX Inputs
input sel;        // MUX Select  
output [9:0] mux_out;  //MUX Output
assign mux_out[9:0]=(sel)?b[9:0]:a[9:0];
endmodule

// 2:1 11Bit MUX
module MUX_2X1_11bit(mux_out,a,b,sel);
input [10:0] a,b;  // MUX Inputs
input sel;        // MUX Select  
output [10:0] mux_out;  //MUX Output
assign mux_out[10:0]=(sel)?b[10:0]:a[10:0];
endmodule