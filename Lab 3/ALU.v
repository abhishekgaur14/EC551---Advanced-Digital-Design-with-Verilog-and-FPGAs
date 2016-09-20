`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:51:19 10/02/2015 
// Design Name: 
// Module Name:    ALU 
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
// ***************ALU used In The CPU***************
module ALU(alu_op,r2,r3,r1,zero);

// Parameterizing.
parameter in_out_width = 32;
parameter oprtn = 6;

// Declaring Inputs R2,R3 And alu_op.
input [oprtn-1:0] alu_op;
input [in_out_width-1:0] r2,r3;

//Declaring Output R1.
output [in_out_width-1:0] r1;
output zero;// b;
reg [in_out_width-1:0] r1=0;
reg b;
initial
	begin
		r1 <= 0;
	end
always @(*)		// Used To Check If Any Value of r2, r3 Or alu_op Changes.
	begin

		//Using Case Statement To Select A Particular Operation.
		case (alu_op)
			6'b000000 : ; 																// NOOP
			6'b010000, 6'b111011  : r1 = r2; 									// MOVE, LWI
			6'b010010 : r1 = r2 + r3; 												// ADDITION
			6'b010011 : r1 = r2 - r3; 												// SUBTRACTION, BRANCH IF EQUAL
			6'b010100 : r1 = r2 | r3; 												// OR
			6'b010101 : r1 = r2 & r3; 												// AND
			6'b100000 : r1 = r2 - r3;												// BEQ
			6'b110010 : r1 = r2 + r3; 
			6'b110011 : r1 = r2 - r3;			
			6'b110100 : r1 = r2 | r3;
			6'b110101 : r1 = r2 & r3; 												
			6'b111001 : r1 = r3;														// LI
			6'b111100 : ;																// SWI TBD
			default   : ;																// NOOP
		endcase
	end
	assign zero=(r1)?1'b0:1'b1;

endmodule