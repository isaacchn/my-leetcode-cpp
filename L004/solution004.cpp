#include "solution004.h"

int Solution004::min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}

/**
 * 从两个有序集合中查找第k小的元素
 */
int Solution004::findKth(vector<int> &nums1, int p1, vector<int> &nums2, int p2, int k)
{
    int m = nums1.size() - p1;
    int n = nums2.size() - p2;
    if (m > n)
    {
        return findKth(nums2, p2, nums1, p1, k);
    }
    if (m == 0)
    {
        return nums2[k - 1 + p2];
    }
    if (k == 1)
    {
        return min(nums1[p1], nums2[p2]);
    }
    int i = min(m, k / 2);
    int j = k - i;
    int val1 = nums1[i - 1 + p1];
    int val2 = nums2[j - 1 + p2];
    if (val1 < val2)//nums1 i之前的元素都比第k小的元素要小
    {
        return findKth(nums1, p1 + i, nums2, p2, k - i);
    } else if (val1 > val2)//nums2 j之前的元素都比第k小的元素要小
    {
        return findKth(nums1, p1, nums2, p2 + j, k - j);
    } else
    {
        return val1;
    }
}

double Solution004::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int m = nums1.size();
    int n = nums2.size();
    if ((m + n) % 2 == 1)
    {
        return findKth(nums1, 0, nums2, 0, (m + n) / 2 + 1);
    } else
    {
        return ((double) findKth(nums1, 0, nums2, 0, (m + n) / 2) +
                (double) findKth(nums1, 0, nums2, 0, (m + n) / 2 + 1)) / 2;
    }
}