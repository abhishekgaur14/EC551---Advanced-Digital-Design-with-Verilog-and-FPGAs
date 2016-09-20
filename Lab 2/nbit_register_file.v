`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:25:25 10/02/2015 
// Design Name: 
// Module Name:    nbit_register_file 
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
// ***************Register File used In The CPU***************
module nbit_register_file(write_data,read_data_1,read_data_2,read_sel_1,read_sel_2,write_address,RegWrite,clk);

// Parameterizing.
parameter data_width = 32;
parameter select_width = 5; 

// Declaring Inputs.                          
input                                       clk, RegWrite;
input           [data_width-1:0]            write_data;
input           [4:0]                       read_sel_1, read_sel_2, write_address;

// Declaring Outputs.
output		    [data_width-1:0]            read_data_1, read_data_2;
reg             [data_width-1:0]            register_file [0:data_width-1];
    
// For Loop Initializes All Registers To 0. No Need To Reset.
integer i;
	initial 
	begin
		for (i = 0; i < 32; i = i + 1) 
			begin 
			register_file[i] = 32'd0;
			end     
	end

// Reading Data From Register File.    
assign		read_data_1 = register_file[read_sel_1];
assign		read_data_2 = register_file[read_sel_2];

    
always @ (posedge clk) 												// USed To Check Positive Edge Of The Clock.
	begin
		if (RegWrite) 													// Check If RegWrite Is Equal To 1.
			register_file[write_address] <= write_data;		// Writes The Computed Data Back Into Register File.
	end

endmodule