#include "LongestPalindrome.h"
#include <vector>
#include <iostream>
using namespace std;
string LongestPalindrome::solve(string s)
{
	const int n = s.length();
	if (n == 0) {
		return "";
	}
	int begin = 0;
	int maxLength = 1;
	vector<vector<bool>> dp(n, vector<bool>(n, false));
	for (int j = 0; j < n; j++) {
		dp[j][j] = true;
		for (int i = 0; i < j; i++) {
			if (j - i == 1) {
				dp[i][j] = s[i] == s[j];
			}
			else {
				dp[i][j] = s[i] == s[j] && dp[i + 1][j - 1];
			}
			if (dp[i][j] && j - i + 1 > maxLength) {
				begin = i;
				maxLength = j - i + 1;
			}
		}
	}
	return s.substr(begin, maxLength);
}

void LongestPalindrome::test()
{
	string s = "adcvbngkbkg";
	string res = solve(s);
	cout << res << endl;
}
