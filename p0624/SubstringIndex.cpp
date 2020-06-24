#include "SubstringIndex.h"
#include <algorithm>
#include <set>
#include <iostream>
vector<int> SubstringIndex::solve(string S, vector<string>& L)
{
	vector<int> result;
	if (L.size() == 0) {
		return result;
	}
	int len = L[0].length();
	if (len == 0) {
		for (int i = 0; i < S.length(); i++) {
			result.push_back(i);
		}
		return result;
	}
	if (S.length() < len * L.size()) {
		return result;
	}
	for (int i = 0; i <= S.length() - len * L.size(); i++) {
		vector<string> tmpV(L);
		for (int j = 0; j < L.size(); j++) {
			auto tmp = find(tmpV.begin(), tmpV.end(), S.substr(i + j * len, len));
			if (tmp == tmpV.end()) {
				break;
			}
			else {
				tmpV.erase(tmp);
			}
		}
		if (tmpV.empty()) {
			result.push_back(i);
		}
	}
	return result;
}

void SubstringIndex::test()
{
	string S = "lingmindraboofooowingdingbarrwingmonkeypoundcake";
	vector<string> L{ "fooo","barr","wing","ding","wing" };
	vector<int> result = solve(S, L);
	for (int item : result) {
		cout << item << ",";
	}
}
