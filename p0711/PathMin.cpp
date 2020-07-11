#include "PathMin.h"
#include <algorithm>
#include <iostream>
int PathMin::minPathSum(vector<vector<int>>& grid)
{
    if (grid.size() == 0 || grid[0].size() == 0) {
        return 0;
    }
    int m = grid.size();//行数
    int n = grid[0].size();//列数
    vector<vector<int>> dp(m, vector<int>(n, 0));
    dp[m - 1][n - 1] = grid[m - 1][n - 1];
    for (int i = m - 2; i >= 0; i--) {
        dp[i][n - 1] = grid[i][n - 1] + dp[i + 1][n - 1];
    }
    for (int j = n - 2; j >= 0; j--) {
        dp[m - 1][j] = grid[m - 1][j] + dp[m - 1][j + 1];
    }
    for (int i = m - 2; i >= 0; i--) {
        for (int j = n - 2; j >= 0; j--) {
            dp[i][j] = grid[i][j] + min(dp[i + 1][j], dp[i][j + 1]);
        }
    }
    return dp[0][0];
}

void PathMin::test()
{
    vector<vector<int>> grid = { {1,2},{5,6},{1,1} };
    int res = minPathSum(grid);
    cout << res << endl;
}
