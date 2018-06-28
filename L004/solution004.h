/**
 * 给定两个大小为 m 和 n 的有序数组 nums1 和 nums2 。请找出这两个有序数组的中位数。要求算法的时间复杂度为 O(log (m+n)) 。
 * Example 1:
 * nums1 = [1, 3]
 * nums2 = [2]
 * The median is 2.0
 *
 * Example 2:
 * nums1 = [1, 2]
 * nums2 = [3, 4]
 * The median is (2 + 3)/2 = 2.5
 */

#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

#ifndef LEETCODE_REFACTOR_SOLUTION004_H
#define LEETCODE_REFACTOR_SOLUTION004_H


class Solution004
{
private:
    int min(int a, int b);

    /**
     * 从两个有序集合中查找第k小的元素
     */
    int findKth(vector<int> &nums1, int p1, vector<int> &nums2, int p2, int k);

public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2);
};


#endif //LEETCODE_REFACTOR_SOLUTION004_H
