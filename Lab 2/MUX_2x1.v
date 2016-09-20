`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:59:16 10/02/2015 
// Design Name: 
// Module Name:    MUX_2x1 
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
module MUX_2x1(datasrc,r2,Imm,r3);

//Defining constant equal to 32.
parameter bitwidth=32;

//Declaring Select of MUX as Input which is Datasrc.
input datasrc;

//Declaring Inputs of MUX which are R2 and Imm.
input [bitwidth-1:0] r2;
input [15:0] Imm;

//Declaring Output of MUX as R3.
output [bitwidth-1:0] r3;
wire [31:0] extn;

assign extn[31:0]= {16'h0000,Imm};

//Assigning Value to Output As Per Select.
assign r3 = datasrc ? Imm : r2;

endmodule