#include "solution010.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION010_H
#define MY_LEETCODE_CPP_USE_SOLUTION010_H

void test010()
{
    Solution010 solution;
    string t1 = "csaaaab";
    string p1 = "e*.*a*..b";
    string t2 = "aaaaaaaaaaaaab";
    string p2 = "a*a*a*a*a*a*a*a*a*a*c";
    string t3 = "b";
    string p3 = "c";
    cout << solution.isMatch(t1, p1) << endl;
    cout << solution.isMatch(t2, p2) << endl;
    cout << solution.isMatch(t3, p3) << endl;
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION010_H
