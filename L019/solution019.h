/**
 * 删除链表的倒数第N个节点
 * 给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。
 * 示例：
 * 给定一个链表: 1->2->3->4->5, 和 n = 2.
 * 当删除了倒数第二个节点后，链表变为 1->2->3->5.
 * 说明：
 * 给定的 n 保证是有效的。
 */
#include <iostream>

using std::cout;
using std::endl;

#ifndef MY_LEETCODE_CPP_SOLUTION019_H
#define MY_LEETCODE_CPP_SOLUTION019_H


struct ListNode019 {
    int val;
    ListNode019 *next;

    explicit ListNode019(int x) : val(x), next(nullptr) {}
};

class Solution019 {
public:
    ListNode019 *removeNthFromEnd(ListNode019 *head, int n);
};


#endif //MY_LEETCODE_CPP_SOLUTION019_H
