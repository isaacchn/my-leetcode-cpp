/**
 * 给定一个 N 叉树，返回其节点值的前序遍历。
 * 例如，给定一个 3叉树 :
 * Input: root = [1,null,3,2,4,null,5,6]
 * Output: [1,3,5,6,2,4]
 * Example2
 * Input: root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
 * Output: [1,2,3,6,7,11,14,4,8,12,5,9,13,10]
 */
#include <vector>
#include <stack>

#ifndef MY_LEETCODE_CPP_SOLUTION589_H
#define MY_LEETCODE_CPP_SOLUTION589_H

using std::vector;
using std::stack;

class Node {
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
};

class Solution589 {
public:
    vector<int> preorder(Node *root) {
        vector<int> result;
        if (root == nullptr)
            return result;
        result.push_back(root->val);
        if (root->children.size() != 0) {
            for (auto iter = root->children.begin(); iter < root->children.end(); iter++) {
                vector<int> sub_result = preorder(*iter);
                result.insert(result.end(), sub_result.begin(), sub_result.end());
            }
        }
        return result;
    }

    vector<int> preorder2(Node *root) {
        vector<int> result;
        if (root == nullptr)
            return result;
        else if (root->children.empty()) {
            result.push_back(root->val);
            return result;
        }
        stack<Node *> nodeStack;
        stack<int> intStack;
        nodeStack.push(root);
        intStack.push(0);
        result.push_back(root->val);
        while (nodeStack.top()) {
            Node *nodeTop = nodeStack.top();
            int intTop = intStack.top();

            //有子节点
            if (!nodeTop->children.empty() && intTop < nodeTop->children.size()) {
                Node *cur = nodeTop->children[intTop];
                intStack.pop();
                int temp = intTop + 1;
                intStack.push(temp);
                nodeStack.push(cur);
                intStack.push(0);
                result.push_back(cur->val);
            } else { //叶节点 或 已遍历完子节点的父节点
                nodeStack.pop();
                intStack.pop();
            }
        }
        return result;
    }
};

#endif
