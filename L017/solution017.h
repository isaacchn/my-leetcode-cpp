/**
 * 电话号码的字母组合
 * 给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。
 * 给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。
 */

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>

using std::string;
using std::vector;
using std::stringstream;
using std::cout;
using std::endl;
using std::stoi;

#ifndef MY_LEETCODE_CPP_SOLUTION017_H
#define MY_LEETCODE_CPP_SOLUTION017_H


class Solution017
{
public:
    vector<string> letterCombinations(string digits);
};


#endif //MY_LEETCODE_CPP_SOLUTION017_H
