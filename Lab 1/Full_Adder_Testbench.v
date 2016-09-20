`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:11:12 09/21/2015
// Design Name:   Full_Adder
// Module Name:   X:/EC551/LAB1/Full_Adder_Testbench.v
// Project Name:  LAB1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Full_Adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Full_Adder_Testbench;

	// Inputs
	reg a;
	reg b;
	reg cin;

	// Outputs
	wire sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	Full_Adder uut (
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
		#5
		a=1;
		b=0;
		cin=0;
		
		#5
		a=1;
		b=1;
		cin=1;
		
#30 $finish;
        
		// Add stimulus here

	end
      
endmodule

