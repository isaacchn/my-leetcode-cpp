#include <string>
#include <iostream>
#include <list>

using std::string;
using std::endl;
using std::cout;
using std::list;

#ifndef MY_LEETCODE_CPP_SOLUTION010_H
#define MY_LEETCODE_CPP_SOLUTION010_H

struct Pattern
{
    int type;//0=单个ch 1=单个任意字符 2=任意个ch
    char ch;

    explicit Pattern(int t = 0, char c = ' ') : type(t), ch(c)
    {}
};

class Solution010
{
public:
    bool isMatch(string s, string p);
};


#endif //MY_LEETCODE_CPP_SOLUTION010_H
