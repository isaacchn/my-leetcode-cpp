#ifndef MY_LEETCODE_CPP_COMMON_H
#define MY_LEETCODE_CPP_COMMON_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

#endif
