#include "solution020.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION020_H
#define MY_LEETCODE_CPP_USE_SOLUTION020_H

void test020() {
    Solution020 solution;
    string s1 = "{[(())()(){[]}]}";
    cout << solution.isValid(s1) << endl;
    string s2 = "]";
    cout << solution.isValid(s2) << endl;
    string s3 = "((((((()))[]}";
    cout << solution.isValid(s3) << endl;
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION020_H
