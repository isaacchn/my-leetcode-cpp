#include "solution004.h"

#ifndef LEETCODE_REFACTOR_USE_SOLUTION004_H
#define LEETCODE_REFACTOR_USE_SOLUTION004_H

void test004()
{
    Solution004 s;
    vector<int> m1({1});
    vector<int> n1({1});
    double val1 = s.findMedianSortedArrays(m1, n1);
    cout << val1 << endl;

    vector<int> m2({1, 2});
    vector<int> n2({3, 4});
    double val2 = s.findMedianSortedArrays(m2, n2);
    cout << val2 << endl;
}

#endif //LEETCODE_REFACTOR_USE_SOLUTION004_H
