`timescale 1ns / 1ps

module systolic( cbit_out,sin_en,clk,in_data, sys_enable);


input  [7:0]in_data;
input sin_en,clk;
output reg sys_enable;
reg [15:0] cbit_data=0; //init cibt_data changed to normal reg
reg [15:0]cbit_data_1=0; //init cbit_data to zero
//reg [3:0] sys;
reg [15:0]bit_calc=0;//init to zero
reg [3:0] count=0;//init to zero
output reg [7:0]cbit_out=0;
//localparam sys1 = 4'b0001, sys2 = 4'b0010, sys3 = 4'b0011, sys4 = 4'b0100, sys5 = 4'b0101, sys6 = 4'b0110, sys7 = 4'b0111, sys8 = 4'b1000, sys9 = 4'b1001;
localparam w1 = 8'd1, w2 = 8'd2, w3 = 8'd1, w4 = 8'd2, w5 = 8'd4, w6 = 8'd2, w7 = 8'd1, w8 = 8'd2, w9 = 8'd1;
reg [3:0] sys=0;

always@(posedge clk)
begin
	if(sin_en)
		begin
		
		case(sys)
		4'd0:
			begin
			count = 0;
			sys_enable = 0;
			cbit_data_1 = (w1*in_data);
			sys=4'd1;
			end
		4'd1:
			begin
			cbit_data_1 = (cbit_data_1 + w2*in_data);
			count = count+1;
			sys=4'd2;
			end
		4'd2:
			begin
			cbit_data_1 = (cbit_data_1 + w3*in_data);
			count = count+1;
			sys=4'd3;
			end		
		4'd3:
			begin
			cbit_data_1 = (cbit_data_1 + w4*in_data);
			count = count+1;
			sys=4'd4;
			end
		4'd4:
			begin
			cbit_data_1 = (cbit_data_1 + w5*in_data);
			count = count+1;
			sys=4'd5;
			end
		4'd5:
			begin
			cbit_data_1 = (cbit_data_1 + w6*in_data);
			count = count+1;
			sys=4'd6;
			end
		4'd6:
			begin
			cbit_data_1 = (cbit_data_1 + w7*in_data);
			count = count+1;
			sys=4'd7;
			end
		4'd7:
			begin
			cbit_data_1 = (cbit_data_1 + w8*in_data);
			count = count+1;
			sys=4'd8;
			end
		4'd8:
			begin
			cbit_data = ((cbit_data_1 + w9*in_data));
			cbit_out= ((cbit_data_1 + w9*in_data)>>4);
			cbit_data_1 = cbit_data;
			//cbit_out = cbit_data<<4;
			sys_enable = 1;
			count = count+1;
			sys=4'd0;
			end
		default:
			begin
			cbit_data_1=0;
			cbit_out =8'd127;
			count=0;
			sys=4'd0;
			end
		endcase
 end
end
endmodule 
			
			