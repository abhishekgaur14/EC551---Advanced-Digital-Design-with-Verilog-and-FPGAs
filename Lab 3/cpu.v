`include "ALU.v"
`include "MUX.v"
`include "Reg_32bit.v"
`include "memory.v"
`include "nbit_register_file.v"
`include "sign_extend.v"

module CPU(clk, rst, start, I_MEM_Write_Enable, I_MEM_Data_In, I_MEM_Write_Addr, ALU_result, PC_out);


input [15:0] I_MEM_Write_Addr;
input [31:0] I_MEM_Data_In;
input clk, rst, start, I_MEM_Write_Enable;


output [31:0] ALU_result, PC_out;


reg PCWrite, IorD1, IorD2, MemWrite, MEMRead, IRWrite, MemtoReg, RegWrite, PC_sel_in, branch_sel, ReadOrWrite_sel, Write_EN, write_sel;
reg [5:0] ALU_ctrl;
reg [1:0] ALUSrcB, ALUSrcA;
reg [3:0] state;


wire [31:0] MemData, Inst_out ,read_out_1, read_out_2, reg_A_out, reg_B_out, m3_out, m4_out, m1_1_out, m2_out, ze_out_imm, se_out_imm, ALUOut, MDR_out, PC_sel_out, data_in;
wire [15:0] m1_2_out;
wire [4:0] branch_sel_out, ReadOrWrite_add;
wire zero;



localparam  A = 4'h0, B = 4'h1, C = 4'h2, D = 4'h3, E = 4'h4, F = 4'h5, G = 4'h6, H = 4'h7, I = 4'h8, J = 4'h9, K = 4'hA, L = 4'hB, M = 4'hC, strt = 4'hD;


//Cominational begins
MUX_2X1_32bit PC_sel(PC_sel_out, ALU_result, ze_out_imm, PC_sel_in);				//For selecting PC source

MUX_2X1_5bit branch_add_sel(branch_sel_out, Inst_out[15:11],Inst_out[25:21], branch_sel);		//For selecting read source for branch instruction

MUX_2X1_32bit WriteDataIn(data_in, I_MEM_Data_In, read_out_2, write_sel);		//Mux for seleting whether data from registers or externally has to be written into the memory

Reg_32bit PC(PC_sel_out, rst, clk, PCWrite, PC_out);		//Program counter

MUX_2X1_32bit m1_1(m1_1_out, PC_out, ALUOut, IorD1);		//Read address select

MUX_2X1_16bit m1_2(m1_2_out, I_MEM_Write_Addr, Inst_out[15:0], IorD2);		//Write address select

memory mem(data_in, MemData, m1_2_out[15:0], m1_1_out[15:0], I_MEM_Write_Enable | Write_EN, clk, rst);	//Memory module

Reg_32bit Inst_reg(MemData, rst, clk, 1'b1, Inst_out);		//Instruction register

Reg_32bit MDR(MemData, rst, clk, 1'b1, MDR_out);

//module MUX_2X1_32bit(mux_out,a,b,sel);
MUX_2X1_32bit m2(m2_out, ALU_result, MDR_out, MemtoReg);

/*module nbit_register_file(write_data, 
                          read_data_1, read_data_2, 
                          read_sel_1, read_sel_2, 
                          write_address, RegWrite, clk);*/
//MUX_2X1_5bit branch_add_sel(branch_sel_out, Inst_out[20:16], Inst_out[15:11], branch_sel);								  
nbit_register_file registers(m2_out, read_out_1, read_out_2, Inst_out[20:16], branch_sel_out, Inst_out[25:21], RegWrite, clk);

//module Reg_32bit(in, Reset, clk, WE, out);
Reg_32bit reg_A(read_out_1, rst, clk, 1'b1, reg_A_out);

//module Reg_32bit(in, Reset, clk, WE, out);
Reg_32bit reg_B(read_out_2, rst, clk, 1'b1, reg_B_out);

//module zero_extend(in,out);
//zero_extend ze_1(PC_out, PC_out_ze);

//module MUX_2X1_32bit(mux_out,a,b,sel);
MUX_4X1_32bit m3(m3_out, PC_out, reg_A_out, MemData, 0, ALUSrcA);

//module sign_extend(in,out);
sign_extend se(Inst_out[15:0], se_out_imm);

//module zero_extend(in,out);
zero_extend ze_2(Inst_out[15:0], ze_out_imm);


//module MUX_4X1_32bit(mux_out,a,b,c,d,sel);
MUX_4X1_32bit m4(m4_out, reg_B_out, 32'h00000001, se_out_imm, ze_out_imm, ALUSrcB);

//module ALU(alu_op,r2,r3,r1,zero);
ALU alu(ALU_ctrl, m3_out, m4_out, ALU_result, zero);

//module Reg_32bit(in, Reset, clk, WE, out);
Reg_32bit ALU_reg(ALU_result, rst, clk, 1'b1, ALUOut);


//Sequential starts

initial
begin
	state <= strt;
	RegWrite <= 0;
	PC_sel_in <= 0;
	Write_EN <= 0;
	write_sel <= 0;
end
always@(posedge clk)
	begin
		if(rst)
			state <= strt;
		case(state)

			strt: begin
						if(start == 1)
						state <= B;
						else
						IorD2 <=	1'b0;	
					end

			A:		begin								//PC increment
						ALUSrcA <= 2'b00;
						ALUSrcB <= 2'b01;
						ALU_ctrl <= 6'b010010;
						PCWrite <= 1;
						PC_sel_in <= 0;
						state <= B;
					end

			B:											//inst fetch
					begin
						PCWrite <= 0;
						IorD1 <= 0;
						ALU_ctrl <= 6'b000000;
						state <= C;
						branch_sel <= 0;
						ReadOrWrite_sel <=0;
					end

			/*C:		begin
						#1
						if(Inst_out[31:30] == 2'b01)
						begin	
							state <= D; //R-type other than MOV
						end	
						else
						if(Inst_out[31:30] == 2'b11)
						begin
							state <= E; //I-type
						end	
						else
						if(Inst_out[31:30] == 2'b10)
						begin
							state <= F; //BEQ
						end
						else
						if(Inst_out[31:30] == 2'b00)
                  begin
							state <= G; //NOOP
						end	
					end*/

			C:	 	begin
							/*ALUSrcA <= 1'b1;
							ALUSrcB <= 2'b00;
							ALU_ctrl <= Inst_out[31:26];*/
							state <= D;
					end

			D:	 	begin
							//ALU_ctrl <= Inst_out[31:26];
							state <= E;
					end

			E:		begin
							if(Inst_out[31:26] == 6'b111100)	
							begin
								IorD2 <=	1'b1;	
								ReadOrWrite_sel <= 1;
								state <= K;
								Write_EN <= 1;
								write_sel <= 1;
								branch_sel <= 1;
							end
							
							else
							
							if(Inst_out[31:26] == 6'b111011)	
							begin
								IorD1 <= 1;
								ALUSrcA <= 2'b10;
								ALU_ctrl <= Inst_out[31:26];
								MemtoReg <= 1'b0;
								state <= L;
							end
							
							else
							
							if(Inst_out[31:26] == 6'b111001)	
							begin
								ALUSrcA <= 2'b01;
								ALUSrcB <= 2'b11;
								ALU_ctrl <= Inst_out[31:26];
								state <= G;
								MemtoReg <= 1'b0;
								RegWrite <= 1;
							end
							
							else
							
							if(Inst_out[31:30] == 2'b01)
							begin
								ALUSrcA <= 2'b01;
								ALUSrcB <= 2'b00;
								ALU_ctrl <= Inst_out[31:26];
								state <= G;
								MemtoReg <= 1'b0;
								RegWrite <= 1;
							end
							
							else
							
							if(Inst_out[31:30] == 2'b11)
							begin	
								ALUSrcA <= 2'b01;
								if(Inst_out[27] == 0)
								begin
									ALUSrcB <= 2'b11;
								end
								else
								if(Inst_out[27] == 1)
								begin
									ALUSrcB <= 2'b10;
								end
								ALU_ctrl <= Inst_out[31:26];
								MemtoReg <= 1'b0;
								RegWrite <= 1;
								state <= G;	
							end	
							
							else
							
							if(Inst_out[31:30] == 2'b10)
								begin
									state <= F;
									ALU_ctrl <= Inst_out[31:26];
									ALUSrcA <= 2'b01;
									ALUSrcB <= 2'b00;
									branch_sel <= 1;
								end
								
							else

							if(Inst_out[31:30] == 2'b00)
								state <= G;						
		
					end

			F :   begin
						state <= H;	
					end

			G :	begin
							RegWrite <= 0;
							IorD1 <= 0;
							state <= A;
					end

			H:
					begin
								if(zero == 1)
									begin
										PC_sel_in <= 1;
										PCWrite <= 1;
										state <= I;
									end		
								
								else
									state <= J;				
					end
					
			I :   begin
					PCWrite <= 0;
					PC_sel_in <= 0;
					state <= B;
					end
			
			J :	begin
					state <= A;
					end
			
			K :   begin
					Write_EN <= 0;
					write_sel <= 0;
					branch_sel <= 0;
					state <= A;
					end
			
			L :   begin
					state <= M;
					end
					
			M :   begin
					RegWrite <= 1;
					state <= G;
					end
					
	endcase
end
endmodule					
							
							