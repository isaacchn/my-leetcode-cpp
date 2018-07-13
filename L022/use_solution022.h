#include "solution022.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION022_H
#define MY_LEETCODE_CPP_USE_SOLUTION022_H

void test022()
{
    int n = 4;

    Solution022 solution;
    vector<string> vector1 = solution.generateParenthesis(n);
    for (string s:vector1)
    { cout << s << endl; }
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION022_H
