`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:02:06 09/21/2015 
// Design Name: 
// Module Name:    FA_7Bit 
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
module FA_7Bit(sum,cout,a,b,cin);

input [6:0]a,b;		//for 7 inputs
input cin;
output [6:0]sum;		//for 7 outputs
output cout;
wire [5:0]w;

//we now call the full-adder function 
Full_Adder fa0(sum[0],w[0],a[0],b[0],cin);
Full_Adder fa1(sum[1],w[1],a[1],b[1],w[0]);
Full_Adder fa2(sum[2],w[2],a[2],b[2],w[1]);
Full_Adder fa3(sum[3],w[3],a[3],b[3],w[2]);
Full_Adder fa4(sum[4],w[4],a[4],b[4],w[3]);
Full_Adder fa5(sum[5],w[5],a[5],b[5],w[4]);
Full_Adder fa6(sum[6],cout,a[6],b[6],w[5]);

endmodule