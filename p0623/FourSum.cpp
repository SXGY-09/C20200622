#include "FourSum.h"
#include <algorithm>
#include <iostream>
vector<vector<int>> FourSum::solve(vector<int>& num, int target)
{
	vector<vector<int>> result;
	if (num.size() < 4) {
		return result;
	}
	sort(num.begin(), num.end());
	for (auto i = num.begin(); i < num.end() - 3;) {
		for (auto j = i + 1; j < num.end() - 2;) {
			auto pl = j + 1;
			auto pr = num.end() - 1;
			int x = target - *i - *j;
			while (pl < pr) {
				if (*pl + *pr == x) {
					result.push_back({ *i,*j,*pl,*pr });
					while (++pl < pr && *pl == *(pl - 1));
					while (--pr > pl && *pr == *(pr + 1));
				}
				else if (*pl + *pr < x) {
					while (++pl < pr && *pl == *(pl - 1));
				}
				else {
					while (--pr > pl && *pr == *(pr + 1));
				}
			}
			while (++j < num.end() - 2 && *j == *(j - 1));
		}
		while (++i < num.end() - 3 && *i == *(i - 1));
	}
	return result;
}

void FourSum::test()
{
	vector<int> num{ -1, 0, 1, 2, -1, -4, -2 };
	vector<vector<int>> result = solve(num, 0);
	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < result[i].size(); j++) {
			cout << result[i][j] << ",";
		}
		cout << endl;
	}
}
