#include "UniquePath.h"
#include <iostream>
int UniquePath::uniquePaths(int m, int n)
{
	vector<vector<int>> dp(m, vector<int>(n, 1));
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
		}
	}
	return dp[m - 1][n - 1];
}

int UniquePath::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
{
	if (obstacleGrid.size() == 0 || obstacleGrid[0].size() == 0) {
		return 0;
	}
	int m = obstacleGrid.size();
	int n = obstacleGrid[0].size();
	vector<vector<int>> dp(m, vector<int>(n, 0));
	dp[m - 1][n - 1] = !obstacleGrid[m - 1][n - 1];
	for (int i = m - 2; i >= 0; i--) {
		dp[i][n - 1] = !obstacleGrid[i][n - 1] && dp[i + 1][n - 1];
	}
	for (int j = n - 2; j >= 0; j--) {
		dp[m - 1][j] = !obstacleGrid[m - 1][j] && dp[m - 1][j + 1];
	}
	for (int i = m - 2; i >= 0; i--) {
		for (int j = n - 2; j >= 0; j--) {
			dp[i][j] = obstacleGrid[i][j] == 1 ? 0 : dp[i][j + 1] + dp[i + 1][j];
		}
	}
	return dp[0][0];
}

void UniquePath::test()
{
	vector<vector<int>> obstacleGrid = { {1,0} };
	cout << uniquePathsWithObstacles(obstacleGrid) << endl;
}
