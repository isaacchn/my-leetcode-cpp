#include "solution018.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION018_H
#define MY_LEETCODE_CPP_USE_SOLUTION018_H

void test018()
{
    vector<int> src{-3, -2, -1, 1, 1, 1, 1, 1, 2, 3, 4};
    Solution018 solution;
    vector<vector<int>> result = solution.fourSum(src, 0);
    for (vector<int> v1:result)
    {
        cout << "[ ";
        for (int i:v1)
        {
            cout << i << " ";
        }
        cout << "]" << endl;
    }
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION018_H
