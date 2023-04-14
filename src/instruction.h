#ifndef _INSTRUCTION_H_
#define _INSTRUCTION_H_

string _j(string ins);
string _jal(string ins);
string _addi(string ins);
string _addiu(string ins);
string _andi(string ins);
string _ori(string ins);
string _xori(string ins);
string _lui(string ins);
string _lw(string ins);
string _sw(string ins);
string _beq(string ins);
string _bne(string ins);
string _slti(string ins);
string _sltiu(string ins);

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