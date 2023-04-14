#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"doctest.h"
#include"..\src\mips.h"
#include"..\src\utils.h"
#include"..\src\instruction.h"

TEST_CASE("Testing all I-type(immediate is positive) and J-Type instructions"){
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
}