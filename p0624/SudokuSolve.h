#pragma once
#include <vector>
using namespace std;
class SudokuSolve
{
public:
	void solve(vector<vector<char>>& board);
	bool solveOne(vector<vector<char>>& board, int num);
	bool isValid(const vector<vector<char>>& board, int m, int n, char c);
	void test();
};

