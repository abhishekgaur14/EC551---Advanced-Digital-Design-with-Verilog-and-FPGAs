`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:44:29 10/02/2015 
// Design Name: 
// Module Name:    CPU 
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
// ***************Final CPU Module***************
`include "Instruction_Reg.v"			// Including FlipFlop Module.
`include "ALU.v"							// Including ALU Module.
`include "MUX_2x1.v"						// Including Multiplexer Module.
`include "nbit_register_file.v"		// Including File Register Module.
module CPU(InstrIn,Reset,Clk,WriteEnable,ALUOut);

input [31:0] InstrIn;	// Input Instruction.
input Reset, Clk, WriteEnable; // Declaring Reset, Clock and WriteEnable As Inputs.

output [31:0] ALUOut; // Declaring Outputs. 
wire [31:0] w0,w1;
wire [31:0] mux_out, rd1, rd2, alu_opt, stage3_out;
wire [31:0] read_data1,read_data2;

Instruction_Reg ff1(InstrIn,Reset,Clk,w0);
Instruction_Reg ff2(read_data1, Reset, Clk, rd1);
Instruction_Reg ff3(read_data2, Reset, Clk, rd2);
Instruction_Reg ff4(w0,Reset,Clk,w1);
Instruction_Reg ff5(w1,Reset,Clk,stage3_out);
Instruction_Reg ff6(alu_opt,Reset,Clk,ALUOut);

nbit_register_file R1(ALUOut,read_data1,read_data2,w0[20:16],w0[15:11],stage3_out[25:21],WriteEnable,Clk);

MUX_2x1 m1(w1[29],rd2,w1[15:0],mux_out);

ALU al(w1[28:26],rd1,mux_out,alu_opt);

endmodule
