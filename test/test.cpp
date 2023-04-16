#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"doctest.h"
#include"..\src\mips.h"
#include"..\src\utils.h"
#include"..\src\instruction.h"

TEST_CASE("Testing all instructions"){
    MESSAGE("Testing addi");
    CHECK((new MIPS)->convertToAssembly("00100000110000010000000000000001")==string("addi $1,$6,1"));
    MESSAGE("Tesing addiu");
    CHECK((new MIPS)->convertToAssembly("00100100011111110000000000000111")==string("addiu $31,$3,7"));
    MESSAGE("Testing andi");
    CHECK((new MIPS)->convertToAssembly("00110000011111110000000000000111")==string("andi $31,$3,7"));
    MESSAGE("Testing ori");
    CHECK((new MIPS)->convertToAssembly("00110100011111110000000000000111")==string("ori $31,$3,7"));
    MESSAGE("Testing xori");
    CHECK((new MIPS)->convertToAssembly("00111000011111110000000000000111")==string("xori $31,$3,7"));
    MESSAGE("Testing lui");
    CHECK((new MIPS)->convertToAssembly("00111100000111110000000000000111")==string("lui $31,7"));
    MESSAGE("Testing lw");
    CHECK((new MIPS)->convertToAssembly("10001100011111110000000000000111")==string("lw $31,7($3)"));
    MESSAGE("Testing sw");
    CHECK((new MIPS)->convertToAssembly("10101100011111110000000000000111")==string("sw $31,7($3)"));
    MESSAGE("Testing beq");
    CHECK((new MIPS)->convertToAssembly("00010000011111110000000000000111")==string("beq $31,$3,7"));
    MESSAGE("Testing bne");
    CHECK((new MIPS)->convertToAssembly("00010100011111110000000000000111")==string("bne $31,$3,7"));
    MESSAGE("Testing slti");
    CHECK((new MIPS)->convertToAssembly("00101000011111110000000000000111")==string("slti $31,$3,7"));
    MESSAGE("Testing sltiu");
    CHECK((new MIPS)->convertToAssembly("00101100011111110000000000000111")==string("sltiu $31,$3,7"));
    MESSAGE("Testing j");
    CHECK((new MIPS)->convertToAssembly("00001000011001100010001010000010")==string("j 6693506"));
    MESSAGE("Testing jal");
    CHECK((new MIPS)->convertToAssembly("00001100011001100010001010000010")==string("jal 6693506"));

    MESSAGE("Testing add");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000100000")==string("add $2,$3,$1"));
    MESSAGE("Testing addu");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000100001")==string("addu $2,$3,$1"));
    MESSAGE("Testing sub");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000100010")==string("sub $2,$3,$1"));
    MESSAGE("Testing subu");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000100011")==string("subu $2,$3,$1"));
    MESSAGE("Testing and");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000100100")==string("and $2,$3,$1"));
    MESSAGE("Testing or");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000100101")==string("or $2,$3,$1"));
    MESSAGE("Testing xor");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000100110")==string("xor $2,$3,$1"));
    MESSAGE("Testing nor");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000100111")==string("nor $2,$3,$1"));
    MESSAGE("Testing slt");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000101010")==string("slt $2,$3,$1"));
    MESSAGE("Testing sltu");
    CHECK((new MIPS)->convertToAssembly("00000000011000010001000000101011")==string("sltu $2,$3,$1"));
    MESSAGE("Testing sll");
    CHECK((new MIPS)->convertToAssembly("00000000000000010001000000000000")==string("sll $2,$1,0"));
    MESSAGE("Testing srl");
    CHECK((new MIPS)->convertToAssembly("00000000000000010001000000000010")==string("srl $2,$1,0"));
    MESSAGE("Testing jr");
    CHECK((new MIPS)->convertToAssembly("00000000010000000000000000001000")==string("jr $2"));
}