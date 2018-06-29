#include <string>
#include <iostream>
#include <list>

/**
 * 给定一个字符串 (s) 和一个字符模式 (p)。实现支持 '.' 和 '*' 的正则表达式匹配。
 * '.' 匹配任意单个字符。
 * '*' 匹配零个或多个前面的元素。
 * 匹配应该覆盖整个字符串 (s) ，而不是部分字符串。
 * 说明:
 * s 可能为空，且只包含从 a-z 的小写字母。
 * p 可能为空，且只包含从 a-z 的小写字母，以及字符 . 和 *。
 */

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
