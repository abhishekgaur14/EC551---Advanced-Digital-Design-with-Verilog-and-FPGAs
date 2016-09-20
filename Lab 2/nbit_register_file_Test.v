`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:26:09 10/02/2015
// Design Name:   nbit_register_file
// Module Name:   /ad/eng/users/a/n/anubhavg/Documents/EC551/Lab2/nbit_register_file_Test.v
// Project Name:  Lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: nbit_register_file
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module nbit_register_file_Test;

	// Inputs
	reg [31:0] write_data;
	reg [4:0] read_sel_1;
	reg [4:0] read_sel_2;
	reg [4:0] write_address;
	reg RegWrite;
	reg clk;

	// Outputs
	wire [31:0] read_data_1;
	wire [31:0] read_data_2;

	// Instantiate the Unit Under Test (UUT)
	nbit_register_file uut (
		.write_data(write_data), 
		.read_data_1(read_data_1), 
		.read_data_2(read_data_2), 
		.read_sel_1(read_sel_1), 
		.read_sel_2(read_sel_2), 
		.write_address(write_address), 
		.RegWrite(RegWrite), 
		.clk(clk)
	);
	always #5
	clk = ~clk;

	initial begin
		// Initialize Inputs
		write_data = 0;
		read_sel_1 = 0;
		read_sel_2 = 0;
		write_address = 0;
		RegWrite = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#10
			write_data = 32'hffff0000;
		read_sel_1 = 0;
		read_sel_2 = 0;
		write_address = 5'b00011;
		RegWrite = 1;

		#10
			write_data = 32'h0000ffff;
		read_sel_1 = 0;
		read_sel_2 = 0;
		write_address = 5'b00100;
		RegWrite = 1;
		
		#10
			write_data = 0;
		read_sel_1 = 5'b00011;
		read_sel_2 = 5'b00100;
		write_address = 0;
		RegWrite = 0;
		
		#10
		write_data = 32'h0f0f0f0f;
		read_sel_1 = 5'b00011;
		read_sel_2 = 5'b00100;
		write_address = 5'b00011;
		RegWrite = 1;
		
		// Add stimulus here
	end
      
endmodule

