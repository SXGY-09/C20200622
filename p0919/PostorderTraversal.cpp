#include "PostorderTraversal.h"
#include <stack>
#include <iostream>
vector<int> PostorderTraversal::postorderTraversal(TreeNode* root)
{
	vector<int> list;
	if (root == nullptr) {
		return list;
	}
	TreeNode* lastVisited = nullptr;
	stack<TreeNode*> st;
	st.push(root);
	while (!st.empty()) {
		TreeNode* cur = st.top();
		if (cur->left == nullptr && cur->right == nullptr || (lastVisited != nullptr && (cur->left == lastVisited || cur->right == lastVisited))) {
			list.push_back(cur->val);
			st.pop();
			lastVisited = cur;
		}
		else {
			if (cur->right != nullptr) {
				st.push(cur->right);
			}
			if (cur->left != nullptr) {
				st.push(cur->left);
			}
		}
	}
	return list;
}

void PostorderTraversal::test()
{
	TreeNode root(1);
	TreeNode leaf1(2);
	TreeNode leaf2(3);
	root.right = &leaf1;
	leaf1.left = &leaf2;
	vector<int> result = postorderTraversal(&root);
	for (int item : result) {
		cout << item << endl;
	}
}
