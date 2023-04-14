#include"mips.h"
#include"utils.h"
#include"instruction.h"
#include<string>
#include<vector>
#include<fstream>
using std::fstream;

string MIPS::convertToAssembly(string ins)
{
    if(32!=ins.size())
        assert(0);
    char type=getInsType(ins);
    int opcode=stoi(ins.substr(0,6));
    if('R'==type)
    {   
        int func=getInsFunc(ins);
        switch (func)
        {
            case 100000:return _add(ins);
            case 100001:return _addu(ins);
            case 100010:return _sub(ins);
            case 100011:return _subu(ins);
            case 100100:return _and(ins);
            case 100101:return _or(ins);
            case 100110:return _xor(ins);
            case 100111:return _nor(ins);
            case 101010:return _slt(ins);
            case 101011:return _sltu(ins);
            case 0:return _sll(ins);
            case 10:return _srl(ins);
            case 1000:return _jr(ins);
            default:assert(0);
        }
    }
    else if('J'==type)
    {
        if(10==opcode)
            return _j(ins);
        else
            return _jal(ins);
    }
    else
    {
        switch(opcode)
        {
            case 1000:return _addi(ins);
            case 1001:return _addiu(ins);
            case 1100:return _andi(ins);
            case 1101:return _ori(ins);
            case 1110:return _xori(ins);
            case 1111:return _lui(ins);
            case 100011:return _lw(ins);
            case 101011:return _sw(ins);
            case 100:return _beq(ins);
            case 101:return _bne(ins);
            case 1010:return _slti(ins);
            case 1011:return _sltiu(ins);
            default:assert(0);
        }
    }
    return "";
}

void MIPS::convertFile(string path1,string path2)
{
    fstream fin;
    fstream fout;
    fin.open(path1,std::ios::in);
    fout.open(path2,std::ios::out);
    string ins;
    while(getline(fin,ins))
    {
        fout<<convertToAssembly(ins)<<std::endl;
    }
    fin.close();
    fout.close();
}