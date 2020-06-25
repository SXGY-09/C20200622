#include "CountAndSay.h"
#include <algorithm>
#include <iostream>
string CountAndSay::solve(int n)
{
    if (n == 0) {
        return "";
    }
    string x = "1";
    string result = "1";
    while (--n) {
        result = "";
        for (int i = 0; i < x.length();) {
            int j = 1;
            while (i + j < x.length() && x[i + j] == x[i]) {
                j++;
            }
            //j¸öx[i]
            result = result + to_string(j) + x[i];
            i += j;
        }
        x = result;
    }
    return result;
}

void CountAndSay::test()
{
    cout << solve(1) << endl;
    cout << solve(2) << endl;
    cout << solve(3) << endl;
    cout << solve(4) << endl;
    cout << solve(5) << endl;
    cout << solve(6) << endl;
    cout << solve(7) << endl;
    cout << solve(8) << endl;
    cout << solve(9) << endl;
    cout << solve(10) << endl;
}
