#include "QueenPermutation.h"
#include <iostream>
vector<vector<string>> QueenPermutation::solve(int n)
{
	vector<vector<string>> result;
	if (n <= 0) {
		return result;
	}
	string empty = "";
	for (int i = 0; i < n; i++) {
		empty += ".";
	}
	vector<string> tmp(n, empty);
	dfs(result, tmp, 0);
	return result;
}

int QueenPermutation::solve2(int n)
{
	if (n <= 0) {
		return 0;
	}
	string empty = "";
	for (int i = 0; i < n; i++) {
		empty += ".";
	}
	vector<string> tmp(n, empty);
	int num = 0;
	dfs2(&num, tmp, 0);
	return num;
}

void QueenPermutation::test()
{
	vector<vector<string>> result = solve(5);
	for (auto i : result) {
		for (string j : i) {
			cout << j << endl;
		}
		cout << endl;
	}
}

void QueenPermutation::dfs(vector<vector<string>>& permution, vector<string>& tmp, int row)
{
	if (row == tmp.size()) {
		permution.push_back(tmp);
		return;
	}
	for (int j = 0; j < tmp.size(); j++) {
		if (isValid(tmp, row, j)) {
			tmp[row][j] = 'Q';
			dfs(permution, tmp, row + 1);
			tmp[row][j] = '.';
		}
	}
}

void QueenPermutation::dfs2(int* num, vector<string>& tmp, int row)
{
	if (row == tmp.size()) {
		(*num)++;
		return;
	}
	for (int j = 0; j < tmp.size(); j++) {
		if (isValid(tmp, row, j)) {
			tmp[row][j] = 'Q';
			dfs2(num, tmp, row + 1);
			tmp[row][j] = '.';
		}
	}
}

bool QueenPermutation::isValid(vector<string>& tmp, int i, int j)
{
	if (i == 0) {
		return true;
	}
	for (int k = 1; i >= k; k++) {
		if (tmp[i-k][j] == 'Q') {
			return false;
		}
		if (j >= k && tmp[i - k][j - k] == 'Q') {
			return false;
		}
		if (j + k < tmp.size() && tmp[i - k][j + k] == 'Q') {
			return false;
		}
	}
	return true;
}
