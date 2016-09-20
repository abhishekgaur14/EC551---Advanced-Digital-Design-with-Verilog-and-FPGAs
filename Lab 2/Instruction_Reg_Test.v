`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:17:42 10/02/2015
// Design Name:   Instruction_Reg
// Module Name:   /ad/eng/users/a/n/anubhavg/Documents/EC551/Lab2/Instruction_Reg_Test.v
// Project Name:  Lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Instruction_Reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Instruction_Reg_Test;

	// Inputs
	reg [31:0] InstrIn;
	reg Reset;
	reg clk;

	// Outputs
	wire [31:0] InstrOut;
	always #5 
	clk = ~clk;
	// Instantiate the Unit Under Test (UUT)
	Instruction_Reg uut (
		.InstrIn(InstrIn), 
		.Reset(Reset), 
		.clk(clk), 
		.InstrOut(InstrOut)
	);

	initial begin
		// Initialize Inputs
		InstrIn = 0;
		Reset = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#10
		InstrIn = 32'hff00ff00;
		Reset = 1;
		clk = 0;
		
		#10
		InstrIn = 32'h0f0f0f0f;
		Reset = 0;
		clk = 1;
		
		#10
		InstrIn = 32'hf0f0f0f0;
		Reset = 0;
		clk = 1;

        
		// Add stimulus here

	end
      
endmodule

