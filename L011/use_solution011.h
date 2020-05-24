#include "solution011.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION011_H
#define MY_LEETCODE_CPP_USE_SOLUTION011_H

void test011() {
    vector<int> heights{1, 5, 3, 2};
    Solution011 solution;
    cout << "max area is " << solution.maxArea(heights) << endl;
    cout << "max area is " << solution.maxArea2(heights) << endl;
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION011_H
