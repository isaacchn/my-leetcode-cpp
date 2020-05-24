#include "solution144.h"

//使用递归的方式
vector<int> Solution144::preorderTraversal1(TreeNode *root) {
    vector<int> v;
    if (root != nullptr) {
        //cout << root->val << endl;
        v.push_back(root->val);
        vector<int> v1 = preorderTraversal1(root->left);
        v.insert(v.end(), v1.begin(), v1.end());

        vector<int> v2 = preorderTraversal1(root->right);
        v.insert(v.end(), v2.begin(), v2.end());
    }
    return v;
}

//使用遍历的方式
vector<int> Solution144::preorderTraversal2(TreeNode *root) {
    vector<int> v;
    stack<TreeNode *> stack;
    TreeNode *current = root;
    while (current != nullptr || !stack.empty()) {
        while (current != nullptr) {
            v.push_back(current->val);
            stack.push(current);
            current = current->left;
        }
        if (!stack.empty()) {
            current = stack.top();
            stack.pop();
            current = current->right;
        }
    }

    return v;
}