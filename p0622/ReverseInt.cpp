#include "ReverseInt.h"
#include <climits>
#include <iostream>
using namespace std;
int ReverseInt::solve(int x)
{
    long result = 0;
    while (x != 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    if (result > INT_MAX || result < INT_MIN) {
        return 0;
    }
    return (int)result;
}

void ReverseInt::test()
{
    int x = -123;
    int y = solve(x);
    cout << y << endl;
}
