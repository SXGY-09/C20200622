#include "PathStairs.h"
#include <iostream>
using namespace std;
int PathStairs::climbStairs(int n)
{
    int prior = 1;//前面
    int next = 1;//后面
    int tmp;
    while (--n > 0) {
        tmp = next;
        next += prior;
        prior = tmp;
    }
    return next;
}

void PathStairs::test()
{
    cout << climbStairs(9) << endl;
}
