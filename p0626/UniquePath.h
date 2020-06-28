#pragma once
#include <vector>
using namespace std;
class UniquePath
{
public:
	int uniquePaths(int m, int n);
	int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid);
	void test();
};

