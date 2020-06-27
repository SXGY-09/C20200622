#include "RotateImage.h"
#include <algorithm>
#include <iostream>
void RotateImage::solve(vector<vector<int>>& matrix)
{
	if (matrix.size() == 0 || matrix[0].size() != matrix.size()) {
		return;
	}
	int n = matrix.size();
	//关于y=x对称
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}
	//关于x轴对称
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n / 2; j++) {
			swap(matrix[i][j], matrix[i][n - 1 - j]);
		}
	}
}

void RotateImage::test()
{
	vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9} };
	for (auto i : matrix) {
		for (auto j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
	solve(matrix);
	for (auto i : matrix) {
		for (auto j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
}
