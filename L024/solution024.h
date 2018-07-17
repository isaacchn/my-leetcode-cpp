/**
 * 两两交换链表中的节点
 * 给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。
 * 示例:
 * 给定 1->2->3->4, 你应该返回 2->1->4->3.
 * 说明:
 * 你的算法只能使用常数的额外空间。
 * 你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。
 */
#include <iostream>

using std::cout;
using std::endl;

#ifndef MY_LEETCODE_CPP_SOLUTION024_H
#define MY_LEETCODE_CPP_SOLUTION024_H


struct ListNode024
{
    int val;
    ListNode024 *next;

    explicit ListNode024(int x) : val(x), next(nullptr)
    {}
};

class solution024
{
private:
    void swapPairsHelper(ListNode024 *pre, ListNode024 *head);

public:
    ListNode024 *swapPairs(ListNode024 *head);
};


#endif //MY_LEETCODE_CPP_SOLUTION024_H
