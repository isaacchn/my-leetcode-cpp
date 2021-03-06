/**
 * 给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，它们的每个节点只存储单个数字。将两数相加返回一个新的链表。
 * 你可以假设除了数字 0 之外，这两个数字都不会以零开头。
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 */
#include "../common.h"

#ifndef LEETCODE_REFACTOR_SOLUTION_H
#define LEETCODE_REFACTOR_SOLUTION_H

class Solution002 {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);
};


#endif //LEETCODE_REFACTOR_SOLUTION_H
