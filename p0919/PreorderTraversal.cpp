#include "PreorderTraversal.h"
#include <stack>
#include <iostream>
vector<int> PreorderTraversal::preorderTraversal(TreeNode* root)
{
	vector<int> list;
	if (root == nullptr) {
		return list;
	}
	stack<TreeNode*> st;
	st.push(root);
	while (!st.empty()) {
		TreeNode* cur = st.top();
		st.pop();
		list.push_back(cur->val);
		if (cur->right != nullptr) {
			st.push(cur->right);
		}
		if (cur->left != nullptr) {
			st.push(cur->left);
		}
	}
	return list;
}

void PreorderTraversal::test()
{
	TreeNode root(1);
	TreeNode leaf1(2);
	TreeNode leaf2(3);
	root.right = &leaf1;
	leaf1.left = &leaf2;
	vector<int> result = preorderTraversal(&root);
	for (int item : result) {
		cout << item << endl;
	}
}
