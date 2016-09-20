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
module ALU(alu_op,r2,r3,r1);

// Parameterizing.
parameter in_out_width = 32;
parameter oprtn = 3;

// Declaring Inputs R2,R3 And alu_op.
input [oprtn-1:0] alu_op;
input [in_out_width-1:0] r2,r3;

//Declaring Output R1.
output [in_out_width-1:0] r1;

reg [in_out_width-1:0] r1=0;

always @(*)		// Used To Check If Any Value of r2, r3 Or alu_op Changes.
	begin

		//Using Case Statement To Select A Particular Operation.
		case (alu_op)
			3'b000 : r1 = r2; 		// MOV
			3'b001 : r1 = ~r2; 		// NOT
			3'b010 : r1 = r2 + r3; 	// ADDITION
			3'b011 : r1 = r2 - r3; 	// SUBTRACTION
			3'b100 : r1 = r2 | r3; 	// OR
			3'b101 : r1 = r2 & r3; 	// AND
			3'b110 : if(r2<r3)		// SLT
						r1 = 32'd1; 
						else 
						r1 = 32'd0;
			default : r1 = 32'hxxxxxxxx; // Default Case If alu_op Is Not The Ones Specified.
		endcase
	end

endmodule