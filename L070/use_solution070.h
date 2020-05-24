#include "solution070.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION070_H
#define MY_LEETCODE_CPP_USE_SOLUTION070_H

void test070() {
    Solution070 solution;
    for (int i = 1; i <= 10; ++i) {
        cout << "爬" << i << "层楼梯有" << solution.climbStairs(i) << "种方法" << endl;
    }
}

#endif
