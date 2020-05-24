/**
 * 合并两个有序链表
 * 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
 * 示例：
 * 输入：1->2->4, 1->3->4
 * 输出：1->1->2->3->4->4
 */
#include <iostream>

using std::cout;
using std::endl;

#ifndef MY_LEETCODE_CPP_SOLUTION021_H
#define MY_LEETCODE_CPP_SOLUTION021_H

struct ListNode021 {
    int val;
    ListNode021 *next;

    ListNode021(int x) : val(x), next(nullptr) {}
};

class Solution021 {
public:
    ListNode021 *mergeTwoLists(ListNode021 *l1, ListNode021 *l2);
};


#endif //MY_LEETCODE_CPP_SOLUTION021_H
