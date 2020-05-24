/**
 * 二叉树的前序遍历
 * 给定一个二叉树，返回它的 前序 遍历。

 示例:

输入: [1,null,2,3]
   1
    \
     2
    /
   3

输出: [1,2,3]
进阶: 递归算法很简单，你可以通过迭代算法完成吗？
*/
#include <iostream>
#include <vector>
#include <stack>
#include "../common.h"

using std::vector;
using std::stack;
using std::cout;
using std::endl;

#ifndef MY_LEETCODE_CPP_SOLUTION144_H
#define MY_LEETCODE_CPP_SOLUTION144_H


class Solution144 {
public:
    vector<int> preorderTraversal1(TreeNode *root);

    vector<int> preorderTraversal2(TreeNode *root);
};


#endif //MY_LEETCODE_CPP_SOLUTION144_H
