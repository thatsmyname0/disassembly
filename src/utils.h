#ifndef _UTILS_H_
#define _UTILS_H_

#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using std::string;

inline char getInsType(string ins);
inline int getInsFunc(string ins);
inline int binaryStringToDecimal(string str);
inline int getRs(string ins);
inline int getRt(string ins);
inline int getImmediate(string ins);
void assert(bool check);

#endif