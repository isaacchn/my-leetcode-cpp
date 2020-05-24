/**
 * 给定一个字符串，找出不含有重复字符的最长子串的长度。
 * 示例：
 * 给定 "abcabcbb" ，没有重复字符的最长子串是 "abc" ，那么长度就是3。
 * 给定 "bbbbb" ，最长的子串就是 "b" ，长度是1。
 * 给定 "pwwkew" ，最长子串是 "wke" ，长度是3。请注意答案必须是一个子串，"pwke" 是 子序列  而不是子串。
 */
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::endl;
using std::cout;

#ifndef LEETCODE_REFACTOR_SOLUTION003_H
#define LEETCODE_REFACTOR_SOLUTION003_H


class Solution003 {
public:
    int lengthOfLongestSubstring(string s);
};


#endif //LEETCODE_REFACTOR_SOLUTION003_H
