#pragma once
#include "TreeNode.h"
class MinDepth
{
public:
	/// <summary>
	/// 递归方式
	/// </summary>
	/// <param name="root"></param>
	/// <returns></returns>
	int run(TreeNode* root);
	/// <summary>
	/// 层序遍历方式
	/// </summary>
	/// <param name="root"></param>
	/// <returns></returns>
	int levelTraversal(TreeNode* root);
	void test();
};

