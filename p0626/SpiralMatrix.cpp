#include "SpiralMatrix.h"
#include <iostream>
vector<int> SpiralMatrix::solve(vector<vector<int>>& matrix)
{
	vector<int> result;
	if (matrix.size() == 0 || matrix[0].size() == 0) {
		return result;
	}
	step(matrix, result, 0, matrix.size(), matrix[0].size());
	return result;
}

vector<vector<int>> SpiralMatrix::generateMatrix(int n)
{
	vector<vector<int>> matrix(n, vector<int>(n, 0));
	step2(matrix, 0, n, n, 1);
	return matrix;
}

void SpiralMatrix::test()
{
	vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9} };
	vector<int> result = solve(matrix);
	for (int i : result) {
		cout << i << ",";
	}
}

void SpiralMatrix::step(vector<vector<int>>& matrix, vector<int>& result, int begin, int endY, int endX)
{
	if (endY <= begin || endX <= begin) {
		return;
	}
	if (endY == begin + 1) {
		for (int j = begin; j < endX; j++) {
			result.push_back(matrix[begin][j]);
		}
		return;
	}
	if (endX == begin + 1) {
		for (int i = begin; i < endY; i++) {
			result.push_back(matrix[i][begin]);
		}
		return;
	}
	for (int j = begin; j < endX - 1; j++) {
		result.push_back(matrix[begin][j]);
	}
	for (int i = begin; i < endY - 1; i++) {
		result.push_back(matrix[i][endX - 1]);
	}
	for (int j = endX - 1; j > begin; j--) {
		result.push_back(matrix[endY - 1][j]);
	}
	for (int i = endY - 1; i > begin; i--) {
		result.push_back(matrix[i][begin]);
	}
	step(matrix, result, begin + 1, endY - 1, endX - 1);
}

void SpiralMatrix::step2(vector<vector<int>>& matrix, int begin, int endY, int endX, int sequence)
{
	if (endY <= begin || endX <= begin) {
		return;
	}
	if (endY == begin + 1) {
		for (int j = begin; j < endX; j++) {
			matrix[begin][j] = sequence++;
		}
		return;
	}
	if (endX == begin + 1) {
		for (int i = begin; i < endY; i++) {
			matrix[i][begin] = sequence++;
		}
		return;
	}
	for (int j = begin; j < endX - 1; j++) {
		matrix[begin][j] = sequence++;
	}
	for (int i = begin; i < endY - 1; i++) {
		matrix[i][endX - 1] = sequence++;
	}
	for (int j = endX - 1; j > begin; j--) {
		matrix[endY - 1][j] = sequence++;
	}
	for (int i = endY - 1; i > begin; i--) {
		matrix[i][begin] = sequence++;
	}
	step2(matrix, begin + 1, endY - 1, endX - 1, sequence);
}
