#pragma once
class RegexMatch
{
public:
	/// <summary>
	/// 递归法，从后往前收
	/// </summary>
	/// <param name="s">待匹配字符串</param>
	/// <param name="p">正则表达式</param>
	/// <returns></returns>
	bool solve(const char* s, const char* p);
	/// <summary>
	/// 动态规划法，从前往后推
	/// </summary>
	/// <param name="s">待匹配字符串</param>
	/// <param name="p">正则表达式</param>
	/// <returns></returns>
	bool isMatch(const char* s, const char* p);
	void test();
};

