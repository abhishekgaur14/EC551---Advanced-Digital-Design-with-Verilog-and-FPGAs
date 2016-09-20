`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:59:47 09/21/2015 
// Design Name: 
// Module Name:    FA_4Bit 
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
`include "Full_Adder.v"
module FA_4Bit(sum,cout,a,b,cin);

input [3:0]a,b;		//for 4 inputs
input cin;

output [3:0]sum;		//for 4 outputs
output cout;

wire [2:0]w;

//we now call the full-adder 1bit function 
Full_Adder fa0(sum[0],w[0],a[0],b[0],cin);
Full_Adder fa1(sum[1],w[1],a[1],b[1],w[0]);
Full_Adder fa2(sum[2],w[2],a[2],b[2],w[1]);
Full_Adder fa3(sum[3],cout,a[3],b[3],w[2]);

endmodule