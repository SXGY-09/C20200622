#pragma once
#include "TreeNode.h"
#include <vector>
using namespace std;
class PreorderTraversal
{
public:
	/// <summary>
	/// ��������ǰ�����
	/// </summary>
	/// <param name="root"></param>
	/// <returns></returns>
	vector<int> preorderTraversal(TreeNode* root);
	void test();
};

