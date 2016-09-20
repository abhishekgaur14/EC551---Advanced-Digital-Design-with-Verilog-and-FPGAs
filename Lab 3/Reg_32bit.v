`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:24:50 10/13/2015 
// Design Name: 
// Module Name:    Reg_32bit 
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
module Reg_32bit(in, Reset, clk, WE, out);

// Parameterizing
parameter in_out_width = 32;

// Declaring Inputs
input [in_out_width-1:0] in;
input Reset, clk, WE;

// Declaring Outputs
output [in_out_width-1:0] out;
reg [in_out_width-1:0] out;

initial
	begin
		out <= 0;
	end
	 
always@(posedge clk)                      // Used To Check Positive Edge Of The Clock
    begin
	 if(WE)
		begin
			/*if(Reset)                           
					out <= 0;							// If Reset Is High Then Output Of FlipFlop Will Be 0
			else*/
					out <= in;            			// If Reset Is Low Then Output Of FlipFlop Will Be Input fed to it.
		end
	 end

endmodule
