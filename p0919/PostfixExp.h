#pragma once
#include <string>
#include <vector>
using namespace std;
class PostfixExp
{
public:
	/// <summary>
	/// 计算逆波兰表达式
	/// </summary>
	/// <param name="tokens"></param>
	/// <returns></returns>
	int evalRPN(vector<string>& tokens);
	void test();
};

