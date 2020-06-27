#pragma once
#include <vector>
using namespace std;
class JumpGame
{
public:
	int solve(int* A, int n);
	bool canJump(int* A, int n);
	void test();
private:
	int min1(vector<int> dp, int begin, int len);
};

