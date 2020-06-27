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
