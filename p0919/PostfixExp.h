#pragma once
#include <string>
#include <vector>
using namespace std;
class PostfixExp
{
public:
	/// <summary>
	/// �����沨�����ʽ
	/// </summary>
	/// <param name="tokens"></param>
	/// <returns></returns>
	int evalRPN(vector<string>& tokens);
	void test();
};

