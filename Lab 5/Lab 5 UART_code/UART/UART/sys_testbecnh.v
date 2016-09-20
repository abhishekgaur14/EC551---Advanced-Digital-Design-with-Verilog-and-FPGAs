`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:23:32 11/13/2015
// Design Name:   systolic
// Module Name:   X:/Desktop/lab5/Lab 5 UART_code(1)/Lab 5 UART_code/UART/UART/sys_testbecnh.v
// Project Name:  UART
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: systolic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sys_testbecnh;

	// Inputs
	reg sin_en;
	reg clk;
	reg [7:0] in_data;

	// Outputs
	wire [7:0] cbit_out;
	wire sys_enable;

	// Instantiate the Unit Under Test (UUT)
	systolic uut (
		.cbit_out(cbit_out), 
		.sin_en(sin_en), 
		.clk(clk), 
		.in_data(in_data), 
		.sys_enable(sys_enable)
	);
always begin
#2 clk=~clk; end
	initial begin
		// Initialize Inputs
		sin_en = 0;
		clk = 0;
		in_data = 0;

		// Wait 100 ns for global reset to finish
		#20 sin_en=1;
		 #4 in_data = 8'd2;
		 #4 in_data = 8'd2;
		 #4 in_data = 8'd2;
		 #4 in_data = 8'd2;
		 
		 #4 in_data = 8'd2;
		 #4 in_data = 8'd2;
		 #4 in_data = 8'd2;
		 #4 in_data = 8'd2;
			
		 #4 in_data = 8'd1;
		// Add stimulus here

	end
      
endmodule

