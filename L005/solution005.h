/**
 * 给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为1000。
 *
 * 示例 1：
 *
 * 输入: "babad"
 * 输出: "bab"
 * 注意: "aba"也是一个有效答案。
 *
 * 示例 2：
 *
 * 输入: "cbbd"
 * 输出: "bb"
 */
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

#ifndef LEETCODE_REFACTOR_SOLUTION005_H
#define LEETCODE_REFACTOR_SOLUTION005_H


class Solution005 {
public:
    string longestPalindrome(const string &s);
};


#endif //LEETCODE_REFACTOR_SOLUTION005_H
