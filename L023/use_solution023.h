#include "solution023.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION023_H
#define MY_LEETCODE_CPP_USE_SOLUTION023_H

void test023() {
    ListNode023 *p3 = new ListNode023(5);
    ListNode023 *p2 = new ListNode023(4, p3);
    ListNode023 *p1 = new ListNode023(1, p2);

    ListNode023 *p6 = new ListNode023(4);
    ListNode023 *p5 = new ListNode023(3, p6);
    ListNode023 *p4 = new ListNode023(1, p5);

    ListNode023 *p8 = new ListNode023(6);
    ListNode023 *p7 = new ListNode023(2, p8);

    Solution023 solution;
    //vector<ListNode023 *> lists{p1, p4, p7};
    ListNode023 *p9 = nullptr;
    ListNode023 *p10 = new ListNode023(1);
    vector<ListNode023 *> lists{p9};

    ListNode023 *result = solution.mergeKLists(lists);
    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
}

#endif //MY_LEETCODE_CPP_USE_SOLUTION023_H
