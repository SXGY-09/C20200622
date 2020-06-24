#include "ParenthesisGenerator.h"
#include <iostream>
vector<string> ParenthesisGenerator::solve(int n)
{
    if (n <= 0) {
        return {};
    }
    //��(0,0)->(n,n)��ȫ��·����·����(x,y)����x>=y
    vector<string> result;
    generate(0, 0, n, "", result);
    return result;
}

void ParenthesisGenerator::generate(int x, int y, int n, string s, vector<string>& target) {
    if (y == n) {
        target.push_back(s);
    }
    if (x < n) {
        generate(x + 1, y, n, s + "(", target);
    }
    if (x > y) {
        generate(x, y + 1, n, s + ")", target);
    }
}

void ParenthesisGenerator::test()
{
    vector<string> result = solve(3);
    for (string item : result) {
        cout << item << ",";
    }
}
