#include "SubstringIndex.h"
#include <algorithm>
#include <map>
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

vector<int> SubstringIndex::solve2(string S, vector<string>& L)
{
	vector<int> result;
	if (L.size() == 0 || S.length() < L.size() * L[0].length()) {
		return result;
	}
	int wordLength = L[0].length();
	map<string, int> mp1;
	for (string str : L) {
		mp1[str]++;
	}
	for (int i = 0; i <= S.length() - wordLength * L.size(); i++) {
		map<string, int> mp2;
		int j = 0;
		for (; j < L.size(); j++) {
			string word = S.substr(i + j * wordLength, wordLength);
			if(mp1.find(word)==mp1.end()){
				break;
			}
			mp2[word]++;
			if (mp2[word] > mp1[word]) {
				break;
			}
		}
		if (j == L.size()) {
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
