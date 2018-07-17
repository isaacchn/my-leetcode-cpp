#include "solution025.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION025_H
#define MY_LEETCODE_CPP_USE_SOLUTION025_H

void testReverseList(ListNode *head, int k)
{
    Solution025 solution;
    ListNode *p = solution.reverseList(head, k);
    while (p)
    {
        cout << p->val << " ";
        p = p->next;
    }
}

void test025()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
    //ListNode *f = new ListNode(6);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    //e->next = f;

    Solution025 solution;
    ListNode *p = solution.reverseKGroup(a, 3);
    while (p)
    {
        cout << p->val << " ";
        p = p->next;
    }
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION025_H
