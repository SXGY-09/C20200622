#include "JumpGame.h"
#include <algorithm>
#include <iostream>
int JumpGame::solve(int* A, int n)
{
    if (n <= 1) {
        return 0;
    }
    vector<int> dp(n, 0);
    dp[n - 2] = 1;
    for (int i = n - 3; i >= 0; i--) {
        int len = A[i] <= n - 1 - i ? A[n] : n - 1 - i;
        dp[i] = 1 + min1(dp, i + 1, len);
    }
    return dp[0];
}

int JumpGame::min1(vector<int> dp, int begin, int len)
{
    int x = dp[begin];
    for (int i = 1; i < len; i++) {
        x = x <= dp[begin + i] ? x : dp[begin + i];
    }
    return x;
}

void JumpGame::test()
{
    int A[] = { 1,2,3 };
    cout << solve(A, 3) << endl;
}
