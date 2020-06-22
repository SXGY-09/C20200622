#include "LongestSubstr.h"
#include <unordered_map>
#include <iostream>
using namespace std;
int LongestSubstr::solve(string s)
{
    unordered_map<char, int> map;
    int max = 0, p = 0, q = 0;
    for (q = 0; q < s.length(); q++) {
        while (map[s[q]]) {
            map[s[p]]--;
            p++;
        }
        max = max >= q - p + 1 ? max : q - p + 1;
        map[s[q]]++;
    }
    return max;
}

void LongestSubstr::test()
{
    string s = "abcdcbad";
    int x = solve(s);
    cout << x << endl;
}
