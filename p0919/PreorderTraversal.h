#pragma once
#include "TreeNode.h"
#include <vector>
using namespace std;
class PreorderTraversal
{
public:
	/// <summary>
	/// 二叉树的前序遍历
	/// </summary>
	/// <param name="root"></param>
	/// <returns></returns>
	vector<int> preorderTraversal(TreeNode* root);
	void test();
};

