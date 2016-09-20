`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:35:54 11/11/2015 
// Design Name: 
// Module Name:    SA 
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
module SA(mainimg, clk);

input mainimg[199:0];
input clk;
//enable switch for always block
reg enable =1;

//scan window
wire [7:0]scan[8:0];


wire [11:0]k=0;
reg [5:0]counter=0;

reg [3:0]adarsh=0;

 assign scan[k] = mainimg[k+7:k];
assign  k=k+8;
assign scan[k+1] = mainimg[k+7:k];
//
/*
always @(posedge clk && enable)
begin

case (adarsh)
	 4'd0:
	 begin
	 scan[k] = mainimg[k+7:k];
	 adarsh = adarsh +1'd1;
	 end
	 
	 4'd1:
	 begin
	scan[k+1] = img[k+1'd1];
	adarsh = adarsh +1'd1;
	 end
	 
	4'd2:
	 begin
	scan[k+2] = img[k+2];
	adarsh = adarsh +1'd1;
	 end
	 
	 	 4'd3:
	 begin
	scan[k+3] = img[k+50];
	adarsh = adarsh +1'd1;
	 end
	
	
		 4'd4:
	 begin
	scan[k+4] = img[k+51];
	adarsh = adarsh +1'd1;
	 end
	
	
		 4'd5:
	 begin
	scan[k+5] = img[k+52];
	adarsh = adarsh +1'd1;
	 end
	
	
		 4'd6:
	 begin
	 scan[k+6] = img[k+100];
	 adarsh = adarsh +1'd1;
	 end
	 
	 
	4'd7:
	 begin
	scan[k+7] = img[k+101];
	adarsh = adarsh +1'd1;
	 end
	
	
	4'd8:
	 begin
	scan[k+8] = img[k+102];
	adarsh = 4'd0;
	k=k+12'd1;
	counter = counter + +6'd1;
	end
	default scan[k]=img[k];
	endcase
	


if(counter == 6'd48)
	begin
	k=k+12'd50;
	counter=6'd0;
	end
if(k==2348) //46*50+48
	enable = 1'b0;

end
*/
endmodule
