#include "RemoveDuplicate.h"
#include <iostream>
using namespace std;
int RemoveDuplicate::solve(int A[], int n)
{
	if (n == 0) {
		return 0;
	}
	int i = 0;
	int j = 1;
	while (j < n) {
		if (A[j] != A[i]) {
			A[++i] = A[j];
		}
		j++;
	}
	return i + 1;
}

void RemoveDuplicate::test()
{
	int A[] = { 1,1,1,2,3,3,4,6,9,9 };
	int result = solve(A, 10);
	cout << result << endl;
}
