#include "solution019.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION019_H
#define MY_LEETCODE_CPP_USE_SOLUTION019_H

void test019() {
    ListNode019 n5(5);
    ListNode019 n4(4);
    ListNode019 n3(3);
    ListNode019 n2(2);
    ListNode019 n1(1);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    ListNode019 *head = &n1;
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    Solution019 solution;
    head = &n1;
    head = solution.removeNthFromEnd(head, 2);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION019_H
