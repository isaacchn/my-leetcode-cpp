/**
 * 给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
 * 你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
 */

#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cout;
using std::endl;
using std::string;

#ifndef LEETCODE_REFACTOR_SOLUTION001_H
#define LEETCODE_REFACTOR_SOLUTION001_H

#define uint unsigned int

class Solution001 {
public:
    vector<int> twoSum(vector<int> &nums, int target);
};


#endif //LEETCODE_REFACTOR_SOLUTION_H
