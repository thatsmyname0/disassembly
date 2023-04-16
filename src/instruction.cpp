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
    return name+string(" $")+std::to_string(rt)+string(",$")+std::to_string(rs)+string(",")+std::to_string(imm);
    
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

using std::to_string;
string StrToInt(string str)
{
    int res, i;
	res = 0;
    for(i=0; i<str.length(); i++)
	{
        res = res * 2 + (str[i] - '0');
    }
    string strres;
    strres = to_string(res);
    return strres;
}
string _add(string ins)
{
	string result;
	result = "add $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _addu(string ins)
{
	string result;
	result = "addu $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _sub(string ins)
{
	string result;
	result = "sub $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _subu(string ins)
{
	string result;
	result = "subu $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _and(string ins)
{
	string result;
	result = "and $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _or(string ins)
{
	string result;
	result = "or $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _xor(string ins)
{
	string result;
	result = "xor $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _nor(string ins)
{
	string result;
	result = "nor $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _slt(string ins)
{
	string result;
	result = "slt $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _sltu(string ins)
{
	string result;
	result = "sltu $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rs) + ",$" + StrToInt(rt);
    return result;
}

string _sll(string ins)
{
	string result;
	result = "sll $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rt) + "," + StrToInt(shamt);
    return result;
}

string _srl(string ins)
{
	string result;
	result = "srl $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rd) + ",$" + StrToInt(rt) + "," + StrToInt(shamt);
    return result;
}

string _jr(string ins)
{
	string result;
	result = "jr $";
	
	string rs, rt, rd, shamt;
	rs = ins.substr(6, 5);
    rt = ins.substr(11, 5);
    rd = ins.substr(16, 5);
    shamt = ins.substr(21, 5);
    
    result = result + StrToInt(rs);
    return result;
}