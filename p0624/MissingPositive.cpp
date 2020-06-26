#include "MissingPositive.h"
#include <algorithm>
#include <iostream>
using namespace std;
int MissingPositive::solve(int* A, int n)
{
	for (int i = 0; i < n;) {
		if (A[i] > 0 && A[i] <= n && A[A[i] - 1]!= A[i]) {
			swap(A[A[i] - 1], A[i]);
		}
		else {
			i++;
		}
	}
	int i = 1;
	while (i <= n && A[i - 1] == i) {
		i++;
	}
	return i;
}

void MissingPositive::test()
{
	int A[] = { 2,1 };
	cout << solve(A, 2) << endl;
}
