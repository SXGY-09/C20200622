#include "RegexMatch2.h"
#include <vector>
#include <iostream>
using namespace std;
bool RegexMatch2::solve(const char* s, const char* p)
{
	if (*p == '\0') {
		return *s == '\0';
	}
	if (*s == '\0') {
		while (*p == '*') {
			p++;
		}
		return *p == '\0';
	}
	if (*p == '*') {
		return solve(s, p + 1) || solve(s + 1, p);
	}
	return (*s == *p || *p == '?') && solve(s + 1, p + 1);
}

bool RegexMatch2::isMatch(const char* s, const char* p)
{
	int m = strlen(s);
	int n = strlen(p);
	vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
	dp[0][0] = true;
	for (int j = 1; j <= n; j++) {
		if (p[j - 1] == '*') {
			dp[0][j] = dp[0][j - 1];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i] == p[j] || p[j] == '?') {
				dp[i + 1][j + 1] = dp[i][j];
			}
			else if (p[j] == '*') {
				dp[i + 1][j + 1] = dp[i][j] || dp[i][j + 1] || dp[i + 1][j];
			}
		}
	}
	return dp[m][n];
}

void RegexMatch2::test()
{
	const char* s = "aaabcd";
	const char* p = "a*?cd**";
	cout << isMatch(s, p) << endl;
}
