#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"doctest.h"
#include"..\src\mips.h"
#include"..\src\utils.h"
#include"..\src\instruction.h"

TEST_CASE(""){
    CHECK((new MIPS)->convertToAssembly("00100000110000010000000000000001")==string("addi $1,$6,1"));

}