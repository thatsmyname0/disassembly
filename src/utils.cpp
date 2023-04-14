#include"utils.h"
#include<string>

void assert(bool check)
{
    if(!check)
    {
        std::cerr<<"Error: The length of your instruction is not 32.";
        exit(1);
    }
}
char getInsType(string ins)
{
    assert(32==ins.size());
    string opcode=ins.substr(0,6);
    if(!std::stoi(opcode))
        return 'R';
    return std::stoi(opcode)<=11?'J':'I';
}

int getInsFunc(string ins)
{
    return std::stoi(ins.substr(26,6));
}

int binaryStringToDecimal(string str)
{
    return std::stoi(str,0,2);
}
int getRs(string ins)
{
    return binaryStringToDecimal(ins.substr(6,5));
}
int getRt(string ins)
{
    return binaryStringToDecimal(ins.substr(11,5));
}
int getImmediate(string ins)
{
    return binaryStringToDecimal(ins.substr(16,16));
}