#include "PalindromeInt.h"
#include <iostream>
#include <string>
using namespace std;
bool PalindromeInt::solve(int x)
{
	if (x < 0) {
		return false;
	}
	string s = to_string(x);
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - i - 1]) {
			return false;
		}
	}
	return true;
}

void PalindromeInt::test()
{
	int x = 123321;
	int y = 2636;
	cout << solve(x) << endl << solve(y) << endl;
}
