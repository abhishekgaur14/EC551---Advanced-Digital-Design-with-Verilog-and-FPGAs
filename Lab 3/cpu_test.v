`timescale 1ns / 1ns

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ReadMe
//  1. This testbench test the entire design of CPU. 
//  2. The input and output port of your finalized CPU should have the exact same name. 
// 3. A global Start signal is required. Your CPU should start work only when this bit is set to 1.
// 4. Your design should have an instruction memeory write port and a write enable input.
// 5. The testbench will first load the following instructions into your instrction memory.
//  6. Then the Start bit will set and your CPU should execute the following instructions
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


module CPU_tb;

    // Inputs
    reg clk;
    reg rst;
    reg [31:0] InstrIn;
    reg start;
    reg I_MEM_Write_Enable;
    reg [15:0] MEM_Addr;

    // Outputs
    wire [31:0] ALUOut;
    wire [31:0] PC_out;

    // Instantiate the Unit Under Test (UUT)
    CPU uut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .I_MEM_Write_Enable(I_MEM_Write_Enable),
        .I_MEM_Data_In(InstrIn),
        .I_MEM_Write_Addr(MEM_Addr),
        .ALU_result(ALUOut),
        .PC_out(PC_out)
    );

    always #5 clk = ~clk;

    initial begin
        // Initialize Inputs
        clk = 1;
        rst = 1;
        InstrIn = 0;
        I_MEM_Write_Enable = 0;
        start = 0;

        // Wait 50 ns for global reset to finish
        #50 rst = 0;
        
        // Start to load instructions into instruction memory, one instruction is issued per clock cycle
        #50 I_MEM_Write_Enable = 1;
        
        InstrIn = 32'b000000_00000_00000_0000000000000000;      // NOOP
        MEM_Addr = 16'd0;
        
        #10
        InstrIn = 32'b110010_00001_00001_0000000000000101;      // I, addi r1 with 00000005         => r1 = 00000005
        MEM_Addr = 16'd1;
        
        #10
        InstrIn = 32'b110010_00010_00010_0000000000001010;      // I, addi r2 with 0000000A         => r2 = 0000000A
        MEM_Addr = 16'd2;
        
        #10
        InstrIn = 32'b110010_00011_00011_1111111111111000;      // I, addi r3 with 0000FFF8         => r3 = FFFFFFF8
        MEM_Addr = 16'd3;
        
        #10
        InstrIn = 32'b110011_00100_00100_0000000000000001;      // I, subi r4 with 00000001         => r4 = FFFFFFFF
        MEM_Addr = 16'd4;
                
        #10
        InstrIn = 32'b110100_00101_00101_1010101010101010;      // I, ori r5 with 0000AAAA          => r5 = 00000AAAA
        MEM_Addr = 16'd5;
                
        #10
        InstrIn = 32'b110101_00110_00110_1111111111111111;      // I, andi r6 with 0000FFFF         => r6 = 00000000
        MEM_Addr = 16'd6;
                
        #10
        InstrIn = 32'b010000_00111_00001_0000000000000000;      // R, mov r1 to r7                  => r7 = 00000005
        MEM_Addr = 16'd7;
                
        #10
        InstrIn = 32'b010000_01000_00010_0000000000000000;      // R, mov r2 to r8                  => r8 = 0000000A
        MEM_Addr = 16'd8;
                
        #10
        InstrIn = 32'b010000_01001_00000_0000000000000000;      // R, mov r0 to r9                  => r9 = 000000000
        MEM_Addr = 16'd9;
                 
        #10
        InstrIn = 32'b010010_01010_00111_01000_00000000000; // R, r10 = r7 + r8                 => r10 = 0000000F
        MEM_Addr = 16'd10;
                
        #10
        InstrIn = 32'b010011_01011_00111_01000_00000000000; // R, r11 = r7 - r8                 => r11 = FFFFFFFB
        MEM_Addr = 16'd11;
              
        #10
        InstrIn = 32'b010100_01100_00111_01001_00000000000; // R, r12 = r7 or r9                    => r12 = 00000005
        MEM_Addr = 16'd12;
        
        #10
        InstrIn = 32'b010101_01101_01000_00100_00000000000; // R, r13 = r8 and r4               => r13 = 0000000A
        MEM_Addr = 16'd13;
                
        #10
        InstrIn = 32'b100000_01100_01101_1111111111110010;      // BEQ, Jump to 0 when r12 = r13
        MEM_Addr = 16'd14;
                
        #10
        InstrIn = 32'b100000_01000_01101_0000000000010001;      // BEQ, Jump to 17 when r8 = r13
        MEM_Addr = 16'd15;
                
        #10
        InstrIn = 32'b010000_01101_00000_0000000000010000;      // R, mov r0 to r13                 => r13 = 00000000
        MEM_Addr = 16'd16;
                
        #10
        InstrIn = 32'b111100_01101_00000_0000000001000000;      // SWI r13 to MEM address 0x10
        MEM_Addr = 16'd17;
                
        #10
        InstrIn = 32'b111011_01110_00000_0000000001000000;      // LWI r14 from MEM address 0x10    => r14 = 0000000A
        MEM_Addr = 16'd18;
                
        #10
        InstrIn = 32'b111001_01111_00000_0000000000000001;      // LI r15 from immediate 1          => r15 = 00000001
        MEM_Addr = 16'd19;
                
        // Stop loading instructions
        #10
        I_MEM_Write_Enable = 0;
        
        // Starting execution
        #10
        start = 1'b1;
        
    end
      
endmodule
