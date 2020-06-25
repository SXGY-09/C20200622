#include "SudokuValid.h"
#include <map>
#include <iostream>
bool SudokuValid::solve(vector<vector<char>>& board)
{
	map<char, int> mp1;
	//ÅÐÐÐ
	for (int i = 0; i < 9; i++) {
		mp1.clear();
		for (int j = 0; j < 9; j++) {
			if (board[i][j] != '.' && mp1[board[i][j]]) {
				return false;
			}
			mp1[board[i][j]]++;
		}
	}
	//ÅÐÁÐ
	for (int j = 0; j < 9; j++) {
		mp1.clear();
		for (int i = 0; i < 9; i++) {
			if (board[i][j] != '.' && mp1[board[i][j]]) {
				return false;
			}
			mp1[board[i][j]]++;
		}
	}
	//ÅÐ¹¬
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			mp1.clear();
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (board[i + 3 * x][j + 3 * y] != '.' && mp1[board[i + 3 * x][j + 3 * y]]) {
						return false;
					}
					mp1[board[i + 3 * x][j + 3 * y]]++;
				}
			}
		}
	}
	return true;
}

void SudokuValid::test()
{
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
	bool result = solve(board);
	cout << result << endl;
}
