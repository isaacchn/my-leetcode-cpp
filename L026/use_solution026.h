#include "solution026.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION026_H
#define MY_LEETCODE_CPP_USE_SOLUTION026_H

void print(vector<int> &v) {
    for (auto iter = v.cbegin(); iter != v.cend(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

void test026() {
    vector<int> v1 = {1, 1, 2};
    vector<int> v2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> v3 = {1, 2};

    Solution026 solution026;
    cout << solution026.removeDuplicates3(v1) << endl;
    print(v1);
    cout << solution026.removeDuplicates3(v2) << endl;
    print(v2);
    cout << solution026.removeDuplicates3(v3) << endl;
    print(v3);
}


#endif
