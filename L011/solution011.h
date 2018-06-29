#include <vector>
#include <iostream>

/**
 * 给定n个非负整数a1，a2，...，an，每个数代表坐标中的一个点(i,ai)。
 * 画n条垂直线，使得垂直线i的两个端点分别为(i,ai)和(i,0)。找出其中的两条线，使得它们与x轴共同构成的容器可以容纳最多的水。
 */

using std::vector;
using std::cout;
using std::endl;

#ifndef MY_LEETCODE_CPP_SOLUTION011_H
#define MY_LEETCODE_CPP_SOLUTION011_H


class Solution011
{
public:
    int maxArea(vector<int> &height);

    int maxArea2(vector<int> &height);
};


#endif //MY_LEETCODE_CPP_SOLUTION011_H
