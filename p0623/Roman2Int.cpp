#include "Roman2Int.h"
#include <iostream>
#include <map>
int Roman2Int::solve(string s)
{
    if (s.length() == 0) {
        return 0;
    }
    map<char, int> map1{ {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };
    int num = map1[s[s.length() - 1]];
    for (int i = 0; i < s.length() - 1; i++) {
        if (map1[s[i]] >= map1[s[i + 1]]) {
            num += map1[s[i]];
        }
        else {
            num -= map1[s[i]];
        }
    }
    return num;
}

void Roman2Int::test()
{
    string roman = "DCXXI";
    int result = solve(roman);
    cout << result << endl;
}
