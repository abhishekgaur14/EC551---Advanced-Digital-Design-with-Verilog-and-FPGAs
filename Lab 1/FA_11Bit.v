`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:04:58 09/21/2015 
// Design Name: 
// Module Name:    FA_11Bit 
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
`include "Full_Adder.v" //to use the 1-bit full adder module, we use the include statement
module FA_11Bit(sum,cout,a,b,cin);

input [10:0]a,b;		//for 11 inputs
input cin;
output [10:0]sum;		//for 11 outputs
output cout;
wire [9:0]w;

//we now call the full-adder function 
Full_Adder fa0(sum[0],w[0],a[0],b[0],cin);
Full_Adder fa1(sum[1],w[1],a[1],b[1],w[0]);
Full_Adder fa2(sum[2],w[2],a[2],b[2],w[1]);
Full_Adder fa3(sum[3],w[3],a[3],b[3],w[2]);
Full_Adder fa4(sum[4],w[4],a[4],b[4],w[3]);
Full_Adder fa5(sum[5],w[5],a[5],b[5],w[4]);
Full_Adder fa6(sum[6],w[6],a[6],b[6],w[5]);
Full_Adder fa7(sum[7],w[7],a[7],b[7],w[6]);
Full_Adder fa8(sum[8],w[8],a[8],b[8],w[7]);
Full_Adder fa9(sum[9],w[9],a[9],b[9],w[8]);
Full_Adder fa10(sum[10],cout,a[10],b[10],w[9]);

endmodule