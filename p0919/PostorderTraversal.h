#pragma once
#include "TreeNode.h"
#include <vector>
using namespace std;
class PostorderTraversal
{
public:
	/// <summary>
	/// �������
	/// </summary>
	/// <param name="root"></param>
	/// <returns></returns>
	vector<int> postorderTraversal(TreeNode* root);
	void test();
};

