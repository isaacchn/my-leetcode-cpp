#include "solution016.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION016_H
#define MY_LEETCODE_CPP_USE_SOLUTION016_H

void test016() {
    vector<int> src{-1, 2, 1, -4};
    int target = 1;
    Solution016 solution;
    int result = solution.threeSumClosest(src, target);
    cout << result << endl;
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION016_H
