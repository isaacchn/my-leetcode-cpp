/**
 * 有效的括号
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 * 有效字符串需满足：
 * 1. 左括号必须用相同类型的右括号闭合。
 * 2. 左括号必须以正确的顺序闭合。
 * 注意空字符串可被认为是有效字符串。
 */
#include <string>
#include <stack>
#include <iostream>

using std::string;
using std::stack;
using std::cout;
using std::endl;

#ifndef MY_LEETCODE_CPP_SOLUTION020_H
#define MY_LEETCODE_CPP_SOLUTION020_H


class Solution020 {
public:
    bool isValid(string s);
};


#endif //MY_LEETCODE_CPP_SOLUTION020_H
