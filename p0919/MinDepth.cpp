#include "MinDepth.h"
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int MinDepth::run(TreeNode* root)
{
	if (root == nullptr) {
		return 0;
	}
	if (root->left == nullptr && root->right == nullptr) {
		return 1;
	}
	if (root->left == nullptr) {
		return 1 + run(root->right);
	}
	if (root->right == nullptr) {
		return 1 + run(root->left);
	}
	return 1 + min(run(root->left), run(root->right));
}

int MinDepth::levelTraversal(TreeNode* root)
{
	if (root == nullptr) {
		return 0;
	}
	if (root->left == nullptr && root->right == nullptr) {
		return 1;
	}
	int depth = 0;
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty()) {
		int size = q.size();
		depth++;
		while (size-- > 0) {
			TreeNode* node = q.front();
			q.pop();
			if (node->left == nullptr && node->right == nullptr) {
				return depth;
			}
			if (node->left != nullptr) {
				q.push(node->left);
			}
			if (node->right != nullptr) {
				q.push(node->right);
			}
		}
	}
	return 0;
}

void MinDepth::test()
{
	TreeNode root(0);
	TreeNode tree01(1);
	TreeNode tree02(2);
	TreeNode tree011(3);
	TreeNode tree012(4);
	root.left = &tree01;
	root.right = &tree02;
	root.left->left = &tree011;
	root.left->right = &tree012;
	int depth = levelTraversal(&root);
	cout << depth << endl;
}
