#include "SearchInsert.h"
#include <iostream>
using namespace std;
int SearchInsert::solve(int* A, int n, int target)
{
	if (n == 0) {
		return 0;
	}
	//ÕÒ×ó±ß½ç
	int lt = 0;
	int rt = n - 1;
	while (lt <= rt) {
		int mid = lt + ((rt - lt) >> 1);
		if (A[mid] == target) {
			return mid;
		}
		if (A[mid] < target) {
			lt = mid + 1;
		}
		else {
			rt = mid - 1;
		}
	}
	return lt;
}

void SearchInsert::test()
{
	int A[] = { 1,3,5,6 };
	int target = 0;
	int result = solve(A, 4, 0);
	cout << result << endl;
}
