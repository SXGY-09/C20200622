#pragma once
#include <vector>
using namespace std;
class SpiralMatrix
{
public:
	vector<int> solve(vector<vector<int>>& matrix);
	void test();
private:
	void step(vector<vector<int>>& matrix, vector<int>& result, int begin, int endY, int endX);
};

