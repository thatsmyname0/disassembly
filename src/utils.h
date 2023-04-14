#ifndef _UTILS_H_
#define _UTILS_H_

#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using std::string;

char getInsType(string ins);
int getInsFunc(string ins);
int binaryStringToDecimal(string str);
int getRs(string ins);
int getRt(string ins);
int getImmediate(string ins);
void assert(bool check);

#endif