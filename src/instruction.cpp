#include"instruction.h"
#include"utils.h"
#include<utility>
string _j(string ins)
{
    return string("j ")+std::to_string(binaryStringToDecimal(ins.substr(6,26)));
}
string _jal(string ins)
{
    return string("jal ")+std::to_string(binaryStringToDecimal(ins.substr(6,26)));
}
string convertTypeI(string ins,string name)
{
    int rs=getRs(ins);
    int rt=getRt(ins);
    int imm=getImmediate(ins);
    return name+string(" $")+std::to_string(rs)+string(",$")+std::to_string(rt)+string(",")+std::to_string(imm);
    
}
string _lui(string ins)
{
    int rt=getRt(ins);
    int imm=getImmediate(ins);
    return string("lui $")+std::to_string(rt)+","+std::to_string(imm);
}
string _lw(string ins)
{
    int rs=getRs(ins);
    int rt=getRt(ins);
    int imm=getImmediate(ins);
    return string("lw $")+std::to_string(rt)+","+std::to_string(imm)+"($"+std::to_string(rs)+")";
}
string _sw(string ins)
{
    int rs=getRs(ins);
    int rt=getRt(ins);
    int imm=getImmediate(ins);
    return string("sw $")+std::to_string(rt)+","+std::to_string(imm)+"($"+std::to_string(rs)+")";
}
