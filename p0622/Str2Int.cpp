#include "Str2Int.h"
#include <iostream>
#include <climits>
using namespace std;
int Str2Int::solve(const char* str)
{
    if (*str == '\0') {
        return 0;
    }
    const char* p = str;
    while (*p == ' ') {
        p++;
    }
    int sign = 1;
    if (*p == '+' || *p == '-') {
        sign = *p == '+' ? 1 : -1;
        p++;
    }
    long result = 0;
    while (isdigit(*p)) {
        result = result * 10 + (*p - '0');
        p++;
        if (result * sign > INT_MAX) {
            return INT_MAX;
        }
        if (result * sign < INT_MIN) {
            return INT_MIN;
        }
    }
    return result * sign;
}

void Str2Int::test()
{
    const char* str = " 123.6";
    int res = solve(str);
    cout << res << endl;
}
