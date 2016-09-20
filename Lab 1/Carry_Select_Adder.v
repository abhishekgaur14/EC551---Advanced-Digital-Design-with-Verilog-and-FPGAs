`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:08:34 09/21/2015 
// Design Name: 
// Module Name:    Carry_Select_Adder 
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
`include "FA_4Bit.v"
`include "FA_5Bit.v"
`include "FA_6Bit.v"
`include "FA_7Bit.v"
`include "FA_8Bit.v"
`include "FA_9Bit.v"
`include "FA_10Bit.v"
`include "FA_11Bit.v"
`include "MUX.v"
module Carry_Select_Adder(sum,cout,a,b,cin);

input [63:0] a,b;		//64 Bit Inputs
input cin;				//Input carry

output [63:0] sum;	//64 Bit Output
output cout;			//Output Carry

wire [59:0] sum_temp1,sum_temp2;
wire w[23:0];

//three 4-bit full-adders called to add bits 0-7
FA_4Bit f0(sum[3:0],w[0],a[3:0],b[3:0],cin);
FA_4Bit f1_0(sum_temp1[3:0],w[1],a[7:4],b[7:4],0);
FA_4Bit f1_1(sum_temp2[3:0],w[2],a[7:4],b[7:4],1);

//Mux to select output bits 4-7
MUX_2X1_4bit m0(sum[7:4],sum_temp1[3:0],sum_temp2[3:0],w[0]);
MUX #2 c0(w[3],w[1],w[2],w[0]);		//Mux to select carry


//Two 5-bit full-adders called to add bits 8-12
FA_5Bit f2_0(sum_temp1[8:4],w[4],a[12:8],b[12:8],0);
FA_5Bit f2_1(sum_temp2[8:4],w[5],a[12:8],b[12:8],1);

//Mux to select output bits 8-12
MUX_2X1_5bit m1(sum[12:8],sum_temp1[8:4],sum_temp2[8:4],w[3]);
MUX #2 c1(w[6],w[4],w[5],w[3]);		//Mux to select carry


//Two 6-bit full-adders called to add bits 13-18
FA_6Bit f3_0(sum_temp1[14:9],w[7],a[18:13],b[18:13],0);
FA_6Bit f3_1(sum_temp2[14:9],w[8],a[18:13],b[18:13],1);

//Mux to select output bits 13-18
MUX_2X1_6bit m2(sum[18:13],sum_temp1[14:9],sum_temp2[14:9],w[6]);
MUX #2 c2(w[9],w[7],w[8],w[6]);		//Mux to select carry


//Two 7-bit full-adders called to add bits 19-25
FA_7Bit f4_0(sum_temp1[21:15],w[10],a[25:19],b[25:19],0);
FA_7Bit f4_1(sum_temp2[21:15],w[11],a[25:19],b[25:19],1);

//Mux to select output bits 19-25
MUX_2X1_7bit m3(sum[25:19],sum_temp1[21:15],sum_temp2[21:15],w[9]);
MUX #2 c3(w[12],w[10],w[11],w[9]);		//Mux to select carry


//Two 8-bit full-adders called to add bits 26-33
FA_8Bit f5_0(sum_temp1[29:22],w[13],a[33:26],b[33:26],0);
FA_8Bit f5_1(sum_temp2[29:22],w[14],a[33:26],b[33:26],1);

//Mux to select output bits 26-33
MUX_2X1_8bit m4(sum[33:26],sum_temp1[29:22],sum_temp2[29:22],w[12]);
MUX #2 c4(w[15],w[13],w[14],w[12]);		//Mux to select carry


//Two 9-bit full-adders called to add bits 34-42
FA_9Bit f6_0(sum_temp1[38:30],w[16],a[42:34],b[42:34],0);
FA_9Bit f6_1(sum_temp2[38:30],w[17],a[42:34],b[42:34],1);

//Mux to select output bits 34-42
MUX_2X1_9bit m5(sum[42:34],sum_temp1[38:30],sum_temp2[38:30],w[15]);
MUX #2 c5(w[18],w[16],w[17],w[15]);		//Mux to select carry


//Two 10-bit full-adders called to add bits 43-52
FA_10Bit f7_0(sum_temp1[48:39],w[19],a[52:43],b[52:43],0);
FA_10Bit f7_1(sum_temp2[48:39],w[20],a[52:43],b[52:43],1);

//Mux to select output bits 43-52
MUX_2X1_10bit m6(sum[52:43],sum_temp1[48:39],sum_temp2[48:39],w[18]);
MUX #2 c6(w[21],w[19],w[20],w[18]);		//Mux to select carry

//Two 11-bit full-adders called to add bits 53-63
FA_11Bit f8_0(sum_temp1[59:49],w[22],a[63:53],b[63:53],0);
FA_11Bit f8_1(sum_temp2[59:49],w[23],a[63:53],b[63:53],1);

//Mux to select output bits 53-63
MUX_2X1_11bit m7(sum[63:53],sum_temp1[59:49],sum_temp2[59:49],w[21]);
MUX #2 c7(cout,w[22],w[23],w[21]);		//Mux to select carry

endmodule