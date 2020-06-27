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

bool JumpGame::canJump(int* A, int n)
{
	if (n <= 1) {
		return n == 1;
	}
	vector<bool> jmp(n, false);
	jmp[n - 1] = true;
	for (int i = n - 2; i >= 0; i--) {
		for (int j = i + 1; j <= i + A[i] && j < n; j++) {
			if (jmp[j]) {
				jmp[i] = true;
				break;
			}
		}
	}
	return jmp[0];
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
	cout << canJump(A, 2) << endl;
}
