#include "RemoveElement.h"
#include <iostream>
using namespace std;
int RemoveElement::solve(int A[], int n, int elem)
{
	if (n == 0) {
		return 0;
	}
	int i = 0;
	int j = 0;
	while (j < n) {
		if (A[j] == elem) {
			j++;
			continue;
		}
		else if (j != i) {
			A[i] = A[j];
		}
		i++;
		j++;
	}
	return i;
}

void RemoveElement::test()
{
	int A[] = { 1,1,1,2,3,3,4,6,9,9 };
	int result = solve(A, 10, 1);
	cout << result << endl;
}
