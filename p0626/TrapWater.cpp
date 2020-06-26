#include "TrapWater.h"
#include <iostream>
using namespace std;
int TrapWater::solve(int* A, int n)
{
	if (n <= 2) {
		return 0;
	}
	//找到制高点
	int highest = A[0];
	int highestId = 0;
	for (int i = 1; i < n; i++) {
		if (A[i] > highest) {
			highest = A[i];
			highestId = i;
		}
	}
	//总水量
	int sum = 0;
	//左侧
	int left = A[0];
	for (int i = 1; i < highestId; i++) {
		if (A[i] > left) {
			left = A[i];
		}
		else if (A[i] < left) {
			sum += left - A[i];
		}
	}
	//右侧
	int right = A[n - 1];
	for (int j = n - 2; j > highestId; j--) {
		if (A[j] > right) {
			right = A[j];
		}
		else if (A[j] < right) {
			sum += right - A[j];
		}
	}
	return sum;
}

void TrapWater::test()
{
	int A[] = { 0,1,0,2,1,0,1,3,2,1,2,1 };
	int result = solve(A, 12);
	cout << result << endl;
}
