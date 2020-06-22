#include "ZigZag.h"
#include <vector>
#include <iostream>
string ZigZag::solve(string s, int nRows)
{
    if (nRows <= 1) {
        return s;
    }
    vector<string> parts(nRows);
    int i = 0;
    while (i < s.length()) {
        for (int j = 0; j < nRows; j++) {
            if (i >= s.length()) {
                break;
            }
            parts[j] += s[i++];
        }
        for (int j = nRows - 2; j > 0; j--) {
            if (i >= s.length()) {
                break;
            }
            parts[j] += s[i++];
        }
    }
    string result;
    for (int j = 0; j < nRows; j++) {
        result += parts[j];
    }
    return result;
}

void ZigZag::test()
{
    string s = "PAYPALISHIRING";
    string res = solve(s, 3);
    cout << res << endl;
}
