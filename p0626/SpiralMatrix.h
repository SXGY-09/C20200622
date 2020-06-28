#pragma once
#include <vector>
using namespace std;
class SpiralMatrix
{
public:
	vector<int> solve(vector<vector<int>>& matrix);
	vector<vector<int>> generateMatrix(int n);
	void test();
private:
	void step(vector<vector<int>>& matrix, vector<int>& result, int begin, int endY, int endX);
	/// <summary>
	/// 生成旋转矩阵
	/// </summary>
	/// <param name="matrix">结果矩阵</param>
	/// <param name="begin">行数偏移</param>
	/// <param name="endY">最右端</param>
	/// <param name="endX">最底端</param>
	/// <param name="sequence">序列编号</param>
	void step2(vector<vector<int>>& matrix, int begin, int endY, int endX, int sequence);
};

