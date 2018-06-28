#include "solution009.h"

#ifndef LEETCODE_REFACTOR_USE_SOLUTION009_H
#define LEETCODE_REFACTOR_USE_SOLUTION009_H

void test009()
{
    int i = 237732;
    Solution009 s;
    string s1 = s.isPalindrome(i) ? "true" : "false";
    cout << i << " is palindrome number? " << s1 << endl;
}

#endif //LEETCODE_REFACTOR_USE_SOLUTION009_H
