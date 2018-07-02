#include "solution015.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION015_H
#define MY_LEETCODE_CPP_USE_SOLUTION015_H

void test015()
{
    //vector<int> v{-2, 0, 1, 1, 2};
    vector<int> v{1, 1, -2};
    //vector<int> v{};
//    sort(v.begin(), v.end());
//    for (auto i = v.cbegin(); i != v.cend(); i++)
//    {
//        cout << *i << endl;
//    }

    Solution015 solution;
    vector<vector<int>> result = solution.threeSum(v);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << ",";
        }
        cout << endl;
    }
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION015_H
