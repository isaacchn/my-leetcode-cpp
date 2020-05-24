#include "solution144.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION144_H
#define MY_LEETCODE_CPP_USE_SOLUTION144_H

void test144() {
    TreeNode three(3);
    TreeNode two(2);
    TreeNode root(1);
    root.right = &two;
    two.left = &three;

    Solution144 solution144;
    vector<int> v = solution144.preorderTraversal2(&root);
    for (auto iter = v.cbegin(); iter != v.cend(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

#endif
