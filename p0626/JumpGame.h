#pragma once
#include <vector>
using namespace std;
class JumpGame
{
public:
	int solve(int* A, int n);
	int min1(vector<int> dp, int begin, int len);
	void test();
};

