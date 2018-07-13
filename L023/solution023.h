/**
 * 合并K个排序链表
 */
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <climits>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::count;

#ifndef MY_LEETCODE_CPP_SOLUTION023_H
#define MY_LEETCODE_CPP_SOLUTION023_H

struct ListNode023
{
    int val;
    ListNode023 *next;

    ListNode023(int x) : val(x), next(nullptr)
    {}

    ListNode023(int x, ListNode023 *p) : val(x), next(p)
    {}
};

class Solution023
{
public:
    ListNode023 *mergeKLists1(vector<ListNode023 *> &lists);
    ListNode023 *mergeKLists(vector<ListNode023 *> &lists);
};


#endif //MY_LEETCODE_CPP_SOLUTION023_H
