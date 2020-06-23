#include "RegexMatch.h"
#include <iostream>
#include <vector>
using namespace std;
bool RegexMatch::solve(const char* s, const char* p)
{
	//以p的长度分类处理
	if (*p == '\0') {
		return *s == '\0';
	}
	if (strlen(p) == 1) {
		return strlen(s) == 1 && (*s == *p || *p == '.');
	}
	if (p[1] != '*') {
		if (*s == '\0') {
			return false;
		}
		return (*s == *p || *p == '.') && solve(s + 1, p + 1);
	}
	while (*s != '\0' && (*s == *p || *p == '.')) {
		if (solve(s, p + 2)) {
			return true;
		}
		s = s + 1;
	}
	return solve(s, p + 2);
}

bool RegexMatch::isMatch(const char* s, const char* p)
{
	int m = strlen(s), n = strlen(p);
	vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, 0));
	dp[0][0] = 1;
	for (int i = 0; i <= m; i++)
		for (int j = 1; j <= n; j++) {
			if (j > 1 && p[j - 1] == '*')
				dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j]);
			else dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
		}
	return dp[m][n];
}

void RegexMatch::test()
{
	const char* s = "aaabcd";
	const char* p = "a*.cd";
	cout << solve(s, p) << endl;
}
