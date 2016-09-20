module zero_extend(in,out);
input [15:0] in;
output [31:0] out;
assign out[15:0] = in;
assign out[31:16] = {16{0}};
endmodule

module sign_extend(in,out);
input [15:0] in;
output [31:0] out;
assign out[15:0] = in;
assign out[31:16] = {16{in[15]}};
endmodule
