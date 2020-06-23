#include "LetterCombination.h"
#include <map>
#include <algorithm>
#include <iostream>
vector<string> LetterCombination::solve(string digits)
{
	vector<string> result{ "" };
	map<char, string> mp = { {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"} };
	for (char c1 : digits) {
		int sz = result.size();
		for (int i = 0; i < sz; i++) {
			for (char c2 : mp[c1]) {
				result.push_back(result[i] + c2);
			}
		}
		result.erase(result.begin(), result.begin() + sz);
	}
	return result;
}

void LetterCombination::test()
{
	string digits = "232";
	vector<string> result = solve(digits);
	for (auto i : result) {
		cout << i << ",";
	}
}
