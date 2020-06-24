#pragma once
#include <vector>
#include <string>
using namespace std;
class ParenthesisGenerator
{
public:
	vector<string> solve(int n);
	void generate(int x, int y, int n, string s, vector<string>& target);
	void test();
};

