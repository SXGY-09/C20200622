#include "SudokuSolve.h"
#include <iostream>
void SudokuSolve::solve(vector<vector<char>>& board)
{
	if (board.size() != 9 && board[0].size() != 9) {
		return;
	}
	solveOne(board, 0);
}

bool SudokuSolve::solveOne(vector<vector<char>>& board, int num)
{
	if (num == 81) {
		return true;
	}
	int m = num / 9;
	int n = num % 9;
	if (board[m][n] != '.') {
		return solveOne(board, num + 1);
	}
	//试凑
	for (char c = '1'; c <= '9'; c++) {
		if (!isValid(board, m, n, c)) {
			continue;
		}
		board[m][n] = c;
		if (solveOne(board, num + 1)) {
			return true;
		}
		//试凑若后续不能填完，恢复空格
		board[m][n] = '.';
	}
	return false;
}

bool SudokuSolve::isValid(const vector<vector<char>>& board, int m, int n, char c)
{
	//行检查
	for (int j = 0; j < 9; j++) {
		if (board[m][j] == c) {
			return false;
		}
	}
	//列检查
	for (int i = 0; i < 9; i++) {
		if (board[i][n] == c) {
			return false;
		}
	}
	//宫检查
	for (int i = 3*(m / 3); i < 3*(m / 3) + 3; i++) {
		for (int j = 3 * (n / 3); j < 3 * (n / 3) + 3; j++) {
			if (board[i][j] == c) {
				return false;
			}
		}
	}
	return true;
}

void SudokuSolve::test(){
	vector<vector<char>> board{
		{'5','3','.','.','7','.','.','.','.'},
		{'6','.','.','1','9','5','.','.','.'},
		{'.','9','8','.','.','.','.','6','.'},
		{'8','.','.','.','6','.','.','.','3'},
		{'4','.','.','8','.','3','.','.','1'},
		{'7','.','.','.','2','.','.','.','6'},
		{'.','6','.','.','.','.','2','8','.'},
		{'.','.','.','4','1','9','.','.','5'},
		{'.','.','.','.','8','.','.','7','9'},
	};
	solve(board);
	for (auto i : board) {
		for (auto j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
}
