#include "RotatedArray.h"
#include <algorithm>
#include <iostream>
using namespace std;
int RotatedArray::solve(int* A, int n, int target)
{
	//¶ş·Ö²éÕÒ
	int lt = 0;
	int rt = n - 1;
	while (lt <= rt) {
		int mid = lt + ((rt - lt) >> 1);
		if (A[mid] == target) {
			return mid;
		}
		if (A[mid] > target && (A[lt] <= target || A[rt] > target && A[lt] > A[mid])) {
			rt = mid - 1;
		}
		else if (A[mid] < target && A[rt]<target && A[lt]>A[mid]) {
			rt = mid - 1;
		}
		else {
			lt = mid + 1;
		}
	}
	return -1;
}

void RotatedArray::test()
{
	int A[] = { 258,260,265,266,268,269,271,275,276,278,280,282,287,288,289,293,2,4,5,9,16,23,24,25,26,27,28,36,37,46,47,52,55,56,60,63,67,71,74,75,76,79,80,81,82,92,97,99,103,104,106,109,111,112,117,121,125,131,133,136,141,142,143,144,154,160,161,168,169,179,187,190,201,202,204,206,208,209,211,213,218,220,222,224,225,226,229,230,231,234,240,241,242,243,244,245,247,249,252,253,254,257 };
	int result = solve(A, 102, 81);
	cout << result << endl;
}
