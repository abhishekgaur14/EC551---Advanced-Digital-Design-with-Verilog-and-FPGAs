`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:02:09 10/02/2015
// Design Name:   MUX_2x1
// Module Name:   /ad/eng/users/a/n/anubhavg/Documents/EC551/Lab2/MUX_2x1_Test.v
// Project Name:  Lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MUX_2x1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MUX_2x1_Test;

	// Inputs
	reg datasrc;
	reg [31:0] r2;
	reg [15:0] Imm;

	// Outputs
	wire [31:0] r3;

	// Instantiate the Unit Under Test (UUT)
	MUX_2x1 uut (
		.datasrc(datasrc), 
		.r2(r2), 
		.Imm(Imm), 
		.r3(r3)
	);

	initial begin
		// Initialize Inputs
		datasrc = 0;
		r2 = 0;
		Imm = 0;

		// Wait 100 ns for global reset to finish
		#10
		datasrc = 1;
		r2 = 32'hffffffff;
		Imm = 16'hffff;
		
		#10
		datasrc = 0;
		r2 = 32'hffffffff;
		Imm = 16'hffff;
        
		// Add stimulus here

	end
      
endmodule

