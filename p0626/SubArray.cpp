#include "SubArray.h"
#include <climits>
#include <iostream>
using namespace std;
int SubArray::solve(int* A, int n)
{
	if (n <= 0) {
		return 0;
	}
	int sum = A[0];
	int max = A[0];
	for (int i = 1; i < n; i++) {
		if (sum < 0) {
			sum = 0;
		}
		sum += A[i];
		max = max >= sum ? max : sum;
	}
	return max;
}

void SubArray::test()
{
	int A[] = { -2,1,-3,4,-1,2,1,-5,4 };
	cout << solve(A, 9) << endl;
}
