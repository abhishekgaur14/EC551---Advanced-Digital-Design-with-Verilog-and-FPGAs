`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:03:52 10/02/2015
// Design Name:   ALU
// Module Name:   /ad/eng/users/a/n/anubhavg/Documents/EC551/Lab2/ALU_Test.v
// Project Name:  Lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_Test;

	// Inputs
	reg [2:0] alu_op;
	reg [31:0] r2;
	reg [31:0] r3;

	// Outputs
	wire [31:0] r1;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.alu_op(alu_op), 
		.r2(r2), 
		.r3(r3), 
		.r1(r1)
	);

	initial begin
		// Initialize Inputs
		alu_op = 0;
		r2 = 0;
		r3 = 0;

		// Wait 100 ns for global reset to finish
		#10
		alu_op=3'b000;
		r2 = 32'hffffffff;
		
		#10
		alu_op=3'b001; 
		r2 = 32'hffffffff;
		
		#10
		alu_op=3'b010; 
		r2 = 32'h0000ffff;
		r3 = 32'hffff0000;
		
		#10
		alu_op=3'b011;
		r2 = 32'h0000ffff;
		r3 = 32'hffff0000;
		
		#10
		alu_op=3'b100;
		r2 = 32'hff00ff00;
		r3 = 32'h00ff00ff;
		
		#10
		alu_op=3'b101;
		r2 = 32'hff00ff00;
		r3 = 32'h00ff00ff;
		
		#10
		alu_op=3'b110;
      r2 = 32'h0000FFFF;
		r3 = 32'h00000000;
		
		// Add stimulus here

	end
      
endmodule

