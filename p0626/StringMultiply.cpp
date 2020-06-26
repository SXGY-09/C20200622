#include "StringMultiply.h"
#include <vector>
#include <stack>
#include <iostream>
string StringMultiply::solve(string num1, string num2)
{
	string result = "";
	int len1 = num1.length();
	int len2 = num2.length();
	if (len1 == 0 || len2 == 0) {
		return result;
	}
	vector<int> tmp(len1 + len2, 0);
	for (int i = 0; i < len1; i++) {
		for (int j = 0; j < len2; j++) {
			tmp[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
		}
	}
	int carry = 0;
	for (int i = tmp.size() - 1; i >= 0; i--) {
		tmp[i] += carry;
		carry = tmp[i] / 10;
		tmp[i] %= 10;
	}
	int left = 0;
	while (left < tmp.size() - 1 && tmp[left] == 0) {
		left++;
	}
	for (; left < tmp.size(); left++) {
		result += ('0' + tmp[left]);
	}
	return result;
}

void StringMultiply::test()
{
	cout << solve("123", "999") << endl;
	cout << 123 * 999 << endl;
}
