#include "PermutationNum.h"
#include <vector>
#include <iostream>
string PermutationNum::getPermution(int n, int k)
{
	vector<char> x;
	for (int i = 1; i <= n; i++) {
		x.push_back(i + '0');
	}
	int fact = 1;
	for (int i = 2; i < n; i++) {
		fact *= i;
	}
	string result = "";
	k--;
	while (n > 1) {
		int first = k/ fact;
		result.push_back(x[first]);
		x.erase(x.begin() + first);
		k %= fact;
		n--;
		fact /= n;
	}
	result.push_back(x[0]);
	return result;
}

void PermutationNum::test()
{
	cout << getPermution(3, 1) << endl;
}
