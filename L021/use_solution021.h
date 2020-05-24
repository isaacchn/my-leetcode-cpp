#include "solution021.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION021_H
#define MY_LEETCODE_CPP_USE_SOLUTION021_H

void test021() {
    ListNode021 l1(1);
    ListNode021 l2(5);
    ListNode021 l3(7);

    ListNode021 r1(2);
    ListNode021 r2(3);
    ListNode021 r3(4);

    l1.next = &l2;
    l2.next = &l3;

    r1.next = &r2;
    r2.next = &r3;
    Solution021 solution;
    ListNode021 *result = solution.mergeTwoLists(&l1, &r1);

    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION021_H
