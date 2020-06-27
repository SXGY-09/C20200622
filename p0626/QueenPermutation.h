#pragma once
#include <vector>
#include <string>
using namespace std;
class QueenPermutation
{
public:
	vector<vector<string>> solve(int n);
	int solve2(int n);
	void test();
private:
	void dfs(vector<vector<string>>& permution, vector<string>& tmp, int row);
	void dfs2(int* num, vector<string>& tmp, int row);
	bool isValid(vector<string>& tmp, int i, int j);
};

