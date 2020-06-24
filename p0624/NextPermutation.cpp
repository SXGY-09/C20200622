#include "NextPermutation.h"
#include <algorithm>
#include <iostream>
void NextPermutation::solve(vector<int>& num)
{
	if (num.size() <= 1) {
		return;
	}
	int i = num.size() - 1;
	while (i > 0 && num[i] <= num[i - 1]) {
		i--;
	}
	if (i == 0) {
		reverse(num.begin(), num.end());
		return;
	}
	int j = num.size() - 1;
	while (j > i && num[j] <= num[i - 1]) {
		j--;
	}
	swap(num[i - 1], num[j]);
	sort(num.begin() + i, num.end());
}

void NextPermutation::test()
{
	vector<int> num{ 1,3,5,8,4,7,6,5,3,1 };
	solve(num);
	for (int i : num) {
		cout << i << ",";
	}
}
