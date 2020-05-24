#include "solution001.h"

#ifndef LEETCODE_REFACTOR_USE_SOLUTION_H
#define LEETCODE_REFACTOR_USE_SOLUTION_H

template<typename T>
void print_v(vector<T> v) {
    for (auto iter = v.cbegin(); iter != v.cend(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

void test001() {
    Solution001 s;
    vector<int> v{0, 4, 3, 0};
    int target = 0;
    vector<int> result = s.twoSum(v, target);
    print_v(result);
}

#endif //LEETCODE_REFACTOR_USE_SOLUTION_H
