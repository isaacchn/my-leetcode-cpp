#include "solution589.h"

#ifndef MY_LEETCODE_CPP_USE_SOLUTION589_H
#define MY_LEETCODE_CPP_USE_SOLUTION589_H

void test589() {
    Node *node5 = new Node(5);
    Node *node6 = new Node(6);
    Node *node3 = new Node(3);

    node3->children.push_back(node5);
    node3->children.push_back(node6);

    Node *node2 = new Node(2);
    Node *node4 = new Node(4);
    Node *node1 = new Node(1);
    node1->children.push_back(node3);
    node1->children.push_back(node2);
    node1->children.push_back(node4);

    Solution589 solution589;
    vector<int> result = solution589.preorder2(node1);
    for (auto iter = result.cbegin(); iter < result.end(); iter++) {
        cout << *iter << " ";
    }
}

#endif
