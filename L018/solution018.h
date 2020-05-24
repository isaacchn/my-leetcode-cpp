/**
 * 4Sum 四数之和
 * 给定一个包含 n 个整数的数组 nums 和一个目标值 target，判断 nums 中是否存在四个元素 a，b，c 和 d ，使得 a + b + c + d 的值与 target 相等？找出所有满足条件且不重复的四元组。
 */
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

#ifndef MY_LEETCODE_CPP_SOLUTION018_H
#define MY_LEETCODE_CPP_SOLUTION018_H


class Solution018 {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target);
};


#endif //MY_LEETCODE_CPP_SOLUTION018_H
