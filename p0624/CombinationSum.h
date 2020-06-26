#pragma once
#include <vector>
using namespace std;
class CombinationSum
{
public:
	vector<vector<int>> solve(vector<int>& candidates, int target);
	/// <summary>
	/// 深度优先搜索，n叉树
	/// </summary>
	/// <param name="path">存储路径集</param>
	/// <param name="tmp">当前路径</param>
	/// <param name="k">第k个数据</param>
	/// <param name="candidates">n叉树</param>
	/// <param name="left">目标值剩余量</param>
	void dfs(vector<vector<int>>& path, vector<int>& tmp, int k, vector<int>& candidates, int left);
	void test();
};

