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
	/// ������ת����
	/// </summary>
	/// <param name="matrix">�������</param>
	/// <param name="begin">����ƫ��</param>
	/// <param name="endY">���Ҷ�</param>
	/// <param name="endX">��׶�</param>
	/// <param name="sequence">���б��</param>
	void step2(vector<vector<int>>& matrix, int begin, int endY, int endX, int sequence);
};

