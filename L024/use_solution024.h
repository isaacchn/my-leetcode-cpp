#ifndef MY_LEETCODE_CPP_USE_SOLUTION024_H
#define MY_LEETCODE_CPP_USE_SOLUTION024_H

#include "Solution024.h"

void print(ListNode024 *p)
{
    while (p)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

void test024()
{
    ListNode024 *a = new ListNode024(1);
    ListNode024 *b = new ListNode024(2);
    ListNode024 *c = new ListNode024(3);
    ListNode024 *d = new ListNode024(4);
    a->next = b;
    b->next = c;
    c->next = d;

    ListNode024 *e = new ListNode024(100);

    Solution024 solution;
    ListNode024 *p = solution.swapPairs(a);

    print(p);

    ListNode024 *p1 = solution.swapPairs(e);
    print(p1);
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION024_H
