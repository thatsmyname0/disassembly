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
inline char getInsType(string ins)
{
    assert(32==ins.size());
    string opcode=ins.substr(0,6);
    if(!stoi(opcode))
        return 'R';
    return stoi(opcode)<=11?'J':'I';
}

inline int getInsFunc(string ins)
{
    return stoi(ins.substr(26,6));
}
