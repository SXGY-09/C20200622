#include "DivideInt.h"
#include <iostream>
#include <climits>
using namespace std;
int DivideInt::solve(int dividend, int divisor)
{
	if (divisor == 0 || dividend == INT_MIN && divisor == -1) {
		return INT_MAX;
	}
	if (divisor == INT_MIN) {
		return dividend == INT_MIN;
	}
	if (dividend == INT_MIN) {
		if (divisor > 0) {
			return -1 + solve(dividend + divisor, divisor);
		}
		else {
			return 1 + solve(dividend - divisor, divisor);
		}
	}
	int sign = (dividend < 0) ^ (divisor < 0);
	dividend = abs(dividend);
	divisor = abs(divisor);
	int result = 0;
	while (dividend > divisor) {
		long long tmp = divisor;
		long long factor = 1;
		while (dividend > tmp) {
			tmp <<= 1;
			factor <<= 1;
		}
		if (dividend == tmp) {
			dividend = 0;
			result += factor;
			break;
		}
		tmp >>= 1;
		factor >>= 1;
		dividend -= tmp;
		result += factor;
	}
	if (dividend == divisor) {
		result += 1;
	}
	return sign ? -result : result;
}

void DivideInt::test()
{
	int x = 2147483647;
	int y = 1;
	int z = solve(x, y);
	cout << z << endl;
}
