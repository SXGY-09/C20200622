#pragma once
struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode() :TreeNode(0) {}
	TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
};
