`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:15:12 09/21/2015
// Design Name:   FA_64Bit
// Module Name:   X:/EC551/LAB1/FA_64Bit_Testbench.v
// Project Name:  LAB1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FA_64Bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA_64Bit_Testbench;

	// Inputs
	reg [63:0] a;
	reg [63:0] b;
	reg cin;

	// Outputs
	wire [63:0] sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	FA_64Bit uut (
		.sum(sum), 
		.cout(cout), 
		.a(a), 
		.b(b), 
		.cin(cin)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100
		a=64'h0000000000000000;b=64'h0000000000000000;cin=0;
		#100
		a=64'hffffffffffffffff;b=64'h0000000000000000;cin=1;
		#200
		a=64'h0000000000000001;b=64'h0000000000000000;cin=0;
		
		// Add stimulus here

	end
      
endmodule

