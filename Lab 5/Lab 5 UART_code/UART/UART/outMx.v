`timescale 1ns / 1ps

module outMx(input [13:0]index,
	input clk,
	input [7:0] write_data,
	output reg [7:0] read_data,
	input wr_enable
   );
	
	parameter NUM_DATA = 2500;
	reg [7:0] outMatrix [NUM_DATA-1:0];
	//reg [7:0] outMatrix [2304:0];
	integer i=0;
	initial begin
		for(i=0; i<2500; i=i+1)
			outMatrix[i] = 8'd127;
		end
		
	reg [11:0]k=0;//original value was zero. 
	reg [5:0] counter=1;
	reg flag=0;
	//reg index=0;
	//reg write_enable=1;
	reg control =1;
	//localparam k_check = 12'd2304;
	/*always@(posedge clk)
		begin
			if(wr_enable)
			begin
				if(control) 
				begin
					outMatrix[k] = k;
					k=k+1;             
					if(k==255)
						k=0;
					if(k==k_check)
						begin
						control = 0;
						flag =1;   
					end
				end
			end
		end*/
		
		always@(posedge clk)
		begin
		if(flag)
			begin
			read_data = outMatrix[index];
			end
		end

	always@(posedge clk)
		begin
		if(wr_enable)
		begin
		if(control)
			begin
				outMatrix[k] <= write_data;
				k=k+1;
				counter=counter+1;
				if(counter==6'd48)//49
					begin
					k=k+ 12'd2;
					counter=0;
					end
				if(k==12'd2398)//2498
					begin
					control= 0;
					flag = 1;
					end
			end
	end 
	end


endmodule 