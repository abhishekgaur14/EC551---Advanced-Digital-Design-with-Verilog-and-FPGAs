`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:00:38 09/21/2015 
// Design Name: 
// Module Name:    FA_5Bit 
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
module FA_5Bit(sum,cout,a,b,cin);

input [4:0]a,b;		//for 5 inputs
input cin;

output [4:0]sum;		//for 5 outputs
output cout;

wire [3:0]w;

//we now call the full-adder function 
Full_Adder fa0(sum[0],w[0],a[0],b[0],cin);
Full_Adder fa1(sum[1],w[1],a[1],b[1],w[0]);
Full_Adder fa2(sum[2],w[2],a[2],b[2],w[1]);
Full_Adder fa3(sum[3],w[3],a[3],b[3],w[2]);
Full_Adder fa4(sum[4],cout,a[4],b[4],w[3]);

endmodule