`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:24 11/12/2015 
// Design Name: 
// Module Name:    Scanner 
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
module Scanner(pixel, clk, start);
output reg [13:0] pixel;
//counters
reg [12:0]k=0;
reg [3:0]ctrl =4'd0;
reg [5:0]column =5'd0;
reg [5:0]row =5'd0;
reg enable=1;
input clk;
input start;

always @(posedge clk)
begin
	if(start)
			begin
			if(enable)
			begin
						case (ctrl)
						4'd0: 
							begin
							pixel = k;
							//pixel2 = k;
							ctrl = 4'd1;
							end
						4'd1:
							begin
							pixel = k+12'd1;
							//pixel2 = k+12'd1;
							ctrl = 4'd2;
							end
						4'd2:
							begin
							pixel = k+12'd2;
							//pixel2 = k+12'd2;
							ctrl = 4'd3;
							end
						4'd3:
							begin
							pixel = k+12'd50;
							//pixel2 = k+12'd50;
							ctrl = 4'd4;
							end
						4'd4:
							begin
							pixel = k+12'd51;
							//pixel2 = k+12'd51;
							ctrl = 4'd5;
							end		
						4'd5:
							begin
							pixel = k+12'd52;
							//pixel2 = k+12'd52;
							ctrl = 4'd6;
							end	
						4'd6:
							begin
							pixel = k+12'd100;
							//pixel2 = k+12'd100;
							ctrl = 4'd7;
							end		
						4'd7:
							begin
							pixel = k+12'd101;
							//pixel2 = k+12'd101;
							ctrl = 4'd8;
							end		
						4'd8:
							begin
							pixel = k+12'd102;
							//pixel2 = k+12'd102;
							ctrl = 4'd0;
							k=k+1;
							column = column +1;
							end		
						default:
							begin
							pixel = 0;
							//pixel2 = 0;
							ctrl = 4'd0;
							end		
						endcase
			end
		if(column == 48)// 48
				begin
				k=k+2;
				//row = row+1;
				column = 0;
				end
		if(k==2398)
			begin
			enable = 1'b0;
			end
		end
		end
endmodule
