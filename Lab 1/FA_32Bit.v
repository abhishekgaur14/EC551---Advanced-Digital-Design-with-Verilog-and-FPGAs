`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:05:48 09/21/2015 
// Design Name: 
// Module Name:    FA_32Bit 
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
`include "FA_8Bit.v"
module FA_32Bit(sum,cout,a,b,cin);

input [31:0]a,b;   //for 32 inputs
input cin;
output [31:0]sum;  //for 32 outputs
output cout;
wire [2:0]w;

//calling the 8-bit ripple carry adders four times
FA_8Bit fa0(sum[7:0],w[0],a[7:0],b[7:0],cin);
FA_8Bit fa1(sum[15:8],w[1],a[15:8],b[15:8],w[0]);
FA_8Bit fa2(sum[23:16],w[2],a[23:16],b[23:16],w[1]);
FA_8Bit fa3(sum[31:24],cout,a[31:24],b[31:24],w[2]);

endmodule