module memory(write_data, read_data, write_address, read_address, WE, clk, rst);
parameter data_width = 32;      
input           clk, WE, rst;
input           [data_width-1:0]            write_data; 
input           [15:0]                      read_address, write_address;
output          [data_width-1:0]            read_data;
reg             [data_width-1:0]            read_data;
reg             [data_width-1:0]            mem [0:127];
reg [6:0] i;
 
initial 
     begin
        for (i = 0; i < 127; i = i + 1) 
		  begin
            mem[i] = 32'd0;
        end
end	 
always @ (posedge clk) 
begin
read_data = mem[read_address];
if (WE) 
mem [write_address] <= write_data;
end
endmodule
