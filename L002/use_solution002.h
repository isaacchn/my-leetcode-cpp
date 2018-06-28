#include <vector>
#include <iostream>
#include "solution002.h"

#ifndef LEETCODE_REFACTOR_USE_SOLUTION2_H
#define LEETCODE_REFACTOR_USE_SOLUTION2_H

using std::vector;
using std::cout;
using std::endl;

ListNode *get_nodes(unsigned int i)
{
    ListNode *result = new ListNode(i - (i / 10) * 10);
    ListNode *end = result;
    i /= 10;
    do
    {
        int last = i - (i / 10) * 10;

        ListNode *temp = new ListNode(last);
        end->next = temp;
        end = temp;

        i = i / 10;
    } while (i != 0);
    return result;
}

void print_nodes(const ListNode *nodes)
{
    while (nodes)
    {
        cout << nodes->val << " ";
        nodes = nodes->next;
    }
    cout << endl;
}

void test002()
{
    ListNode *a = get_nodes(1);
    ListNode *b = get_nodes(99);
    print_nodes(a);
    print_nodes(b);

    Solution002 s;
    ListNode *c = s.addTwoNumbers(a, b);
    print_nodes(c);
}

#endif //LEETCODE_REFACTOR_USE_SOLUTION_H
