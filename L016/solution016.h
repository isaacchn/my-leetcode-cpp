/**
 * 最接近的三数之和
 * 给定一个包括 n 个整数的数组 nums 和 一个目标值 target。找出 nums 中的三个整数，使得它们的和与 target 最接近。返回这三个数的和。假定每组输入只存在唯一答案。
 * 例如，给定数组 nums = [-1，2，1，-4], 和 target = 1.
 * 与 target 最接近的三个数的和为 2. (-1 + 2 + 1 = 2).
 */
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

using std::vector;
using std::cout;
using std::endl;
using std::sort;
using std::abs;

#ifndef MY_LEETCODE_CPP_SOLUTION016_H
#define MY_LEETCODE_CPP_SOLUTION016_H


class Solution016 {
public:
    int threeSumClosest(vector<int> &nums, int target);
};


#endif //MY_LEETCODE_CPP_SOLUTION016_H
