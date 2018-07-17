/**
 * k个一组翻转链表
 * 给出一个链表，每 k 个节点一组进行翻转，并返回翻转后的链表。
 * k 是一个正整数，它的值小于或等于链表的长度。如果节点总数不是 k 的整数倍，那么将最后剩余节点保持原有顺序。
 * 示例 :
 * 给定这个链表：1->2->3->4->5
 * 当 k = 2 时，应当返回: 2->1->4->3->5
 * 当 k = 3 时，应当返回: 3->2->1->4->5
 * 说明 :
 * 你的算法只能使用常数的额外空间。
 * 你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。
 */
#include <iostream>
#include "../common.h"

using std::cout;
using std::endl;

#ifndef MY_LEETCODE_CPP_SOLUTION025_H
#define MY_LEETCODE_CPP_SOLUTION025_H

class Solution025
{
public:
    /**
     * 倒序链表前k个元素
     * 如果head的长度少于k则不处理
     */
    ListNode *reverseList(ListNode *head, int k);

    /**
     * 倒序链表head前k个元素，并将pre与倒序后的链表连接起来
     */
    void reverseKGroupHelper(ListNode *pre, ListNode *head, int k);

    ListNode *reverseKGroup(ListNode *head, int k);
};


#endif //MY_LEETCODE_CPP_SOLUTION025_H
