#include "solution017.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION017_H
#define MY_LEETCODE_CPP_USE_SOLUTION017_H

void test017()
{
    string digits = "222";
    Solution017 solution;
    vector<string> result = solution.letterCombinations(digits);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION017_H
