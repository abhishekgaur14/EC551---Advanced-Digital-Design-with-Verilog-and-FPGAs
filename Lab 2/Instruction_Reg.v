`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:46 10/02/2015 
// Design Name: 
// Module Name:    Instruction_Reg 
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
// ***************FlipFlop used In The CPU***************
module Instruction_Reg(InstrIn,Reset,clk,InstrOut);

// Parameterizing.
parameter in_out_width = 32;

// Declaring Inputs.
input [in_out_width-1:0] InstrIn;
input Reset, clk;

// Declaring Outputs.
output [in_out_width-1:0] InstrOut;
reg [in_out_width-1:0] InstrOut;

always@(posedge clk)						// USed To Check Positive Edge Of The Clock.
	begin
		if(Reset)							// If Reset Is High Then Output Of FlipFlop Will Be 0.
			InstrOut <= 0;
		else
			InstrOut <= InstrIn;			// If Reset Is Low Then Output Of FlipFlop Will Be InstrIn.
	end

endmodule