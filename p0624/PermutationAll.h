#pragma once
#include <vector>
using namespace std;
class PermutationAll
{
public:
	/// <summary>
	/// 求数组的全排列，不考虑重复数字
	/// </summary>
	/// <param name="num"></param>
	/// <returns></returns>
	vector<vector<int>> permute(vector<int>& num);
	/// <summary>
	/// 求数组的全排列，考虑重复数字
	/// </summary>
	/// <param name="num"></param>
	/// <returns></returns>
	vector<vector<int>> permuteUnique(vector<int>& num);
	void test();
private:
	/// <summary>
	/// 深度优先算法，不考虑重复
	/// </summary>
	/// <param name="permute">存储全排列</param>
	/// <param name="num">数组</param>
	/// <param name="begin">初始位置</param>
	void dfs(vector<vector<int>>& permute, vector<int>& num, int begin);
	/// <summary>
	/// 深度优先算法，不考虑重复
	/// </summary>
	/// <param name="permute">存储全排列</param>
	/// <param name="num">源数组</param>
	/// <param name="used">使用标记</param>
	/// <param name="list">暂存路径</param>
	void dfs(vector<vector<int>>& permute, vector<int>& num, vector<bool>& used, vector<int>& list);
	/// <summary>
	/// 深度优先算法，考虑重复
	/// </summary>
	/// <param name="permute">存储全排列</param>
	/// <param name="num">源数组</param>
	/// <param name="used">使用标记</param>
	/// <param name="list">暂存路径</param>
	void dfs2(vector<vector<int>>& permute, vector<int>& num, vector<bool>& used, vector<int>& list);
};

