`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:55:20 09/21/2015 
// Design Name: 
// Module Name:    Full_Adder 
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
module Full_Adder(sum,cout,a,b,cin);

input a,b,cin;
output sum,cout;
wire [6:0]w;
wire a_bar, b_bar,cin_bar; //variables for inverted inputs

//Definition of the inverted input variables
not #1 (a_bar,a);
not #1 (b_bar,b);
not #1 (cin_bar,cin);

//generation of the sum
and #1 (w[0],a,b_bar,cin_bar); 
and #1 (w[1],a_bar,b,cin_bar);
and #1 (w[2],a_bar,b_bar,cin);
and #1 (w[3],a,b,cin);
or #1 (sum,w[0],w[1],w[2],w[3]); //sum is saved in variable 'sum'

//generation of carry 
and #1 (w[4],a,b);
and #1 (w[5],b,cin);
and #1 (w[6],a,cin);
or #1 (cout, w[4],w[5],w[6]); //carry bit will be saved in variable 'cout'

endmodule