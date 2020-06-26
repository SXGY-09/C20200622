#include "PermutationAll.h"
#include <algorithm>
#include <iostream>
vector<vector<int>> PermutationAll::permute(vector<int>& num)
{
	vector<vector<int>> result;
	if (num.size() == 0) {
		return result;
	}
	sort(num.begin(), num.end());
	vector<bool> used(num.size(), false);
	vector<int> list;
	dfs(result, num, used, list);
	//dfs(result, num, 0);
	return result;
}

vector<vector<int>> PermutationAll::permuteUnique(vector<int>& num)
{
	vector<vector<int>> result;
	if (num.size() == 0) {
		return result;
	}
	sort(num.begin(), num.end());
	vector<bool> used(num.size(), false);
	vector<int> list;
	dfs2(result, num, used, list);
	return result;
}

void PermutationAll::dfs(vector<vector<int>>& permute, vector<int>& num, int begin)
{
	if (begin == num.size() - 1) {
		permute.push_back(num);
		return;
	}
	dfs(permute, num, begin + 1);
	for (int i = begin + 1; i < num.size(); i++) {
		swap(num[begin], num[i]);
		dfs(permute, num, begin + 1);
		swap(num[begin], num[i]);
	}
}

void PermutationAll::dfs(vector<vector<int>>& permute, vector<int>& num, vector<bool>& used, vector<int>& list)
{
	if (list.size() == num.size()) {
		permute.push_back(list);
		return;
	}
	for (int i = 0; i < num.size(); i++) {
		if (used[i]) {
			continue;
		}
		used[i] = true;
		list.push_back(num[i]);
		dfs(permute, num, used, list);
		used[i] = false;
		list.pop_back();
	}
}

void PermutationAll::dfs2(vector<vector<int>>& permute, vector<int>& num, vector<bool>& used, vector<int>& list)
{
	if (list.size() == num.size()) {
		permute.push_back(list);
		return;
	}
	for (int i = 0; i < num.size(); i++) {
		if (used[i]) {
			continue;
		}
		if (i > 0 && num[i - 1] == num[i] && !used[i - 1]) {
			continue;
		}
		used[i] = true;
		list.push_back(num[i]);
		dfs2(permute, num, used, list);
		used[i] = false;
		list.pop_back();
	}
}

void PermutationAll::test()
{
	vector<int> num{ 1,2,3 };
	vector<vector<int>> result = permute(num);
	int k = 1;
	for (auto i : result) {
		for (auto j : i) {
			cout << j << ",";
		}
		cout << k++ << "," << endl;
	}
}
