#pragma once
#include "TreeNode.h"
class MinDepth
{
public:
	/// <summary>
	/// �ݹ鷽ʽ
	/// </summary>
	/// <param name="root"></param>
	/// <returns></returns>
	int run(TreeNode* root);
	/// <summary>
	/// ���������ʽ
	/// </summary>
	/// <param name="root"></param>
	/// <returns></returns>
	int levelTraversal(TreeNode* root);
	void test();
};

