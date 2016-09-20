`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:06:22 09/21/2015 
// Design Name: 
// Module Name:    FA_64Bit 
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
`include "FA_32Bit.v"
module FA_64Bit(sum,cout,a,b,cin);

input [63:0]a,b;   //For 32 inputs
input cin;			// Input Carry
output [63:0]sum; //For 32 Outputs
output cout;		//Output Carry
wire w;

//Two 32-Bit Adder used for 64 Bit Adder
FA_32Bit fa0(sum[31:0],w,a[31:0],b[31:0],cin);
FA_32Bit fa1(sum[63:32],cout,a[63:32],b[63:32],w);

endmodule