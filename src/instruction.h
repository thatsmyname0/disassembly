#ifndef _INSTRUCTION_H_
#define _INSTRUCTION_H_
#include<iostream>
using std::string;
string _j(string ins);
string _jal(string ins);
string convertTypeI(string ins,string name);
string _lui(string ins);
string _lw(string ins);
string _sw(string ins);

/* This part is to be written by lhz. */
string _add(string ins);
string _addu(string ins);
string _sub(string ins);
string _subu(string ins);
string _and(string ins);
string _or(string ins);
string _xor(string ins);
string _nor(string ins);
string _slt(string ins);
string _sltu(string ins);
string _sll(string ins);
string _srl(string ins);
string _jr(string ins);

#endif