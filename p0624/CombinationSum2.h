#pragma once
#include <vector>
using namespace std;
class CombinationSum2
{
public:
	vector<vector<int>> solve(vector<int>& candidates, int target);
	/// <summary>
	/// �������������n����
	/// </summary>
	/// <param name="path">�洢·����</param>
	/// <param name="tmp">��ǰ·��</param>
	/// <param name="k">��k������</param>
	/// <param name="candidates">n����</param>
	/// <param name="left">Ŀ��ֵʣ����</param>
	void dfs(vector<vector<int>>& path, vector<int>& tmp, int k, vector<int>& candidates, int left);
	void test();
};

