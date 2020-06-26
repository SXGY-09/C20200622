#pragma once
class RegexMatch2
{
public:
	/// <summary>
	/// 递归法，复杂度大
	/// </summary>
	/// <param name="s"></param>
	/// <param name="p"></param>
	/// <returns></returns>
	bool solve(const char* s, const char* p);
	/// <summary>
	/// 动态规划法
	/// </summary>
	/// <param name="s"></param>
	/// <param name="p"></param>
	/// <returns></returns>
	bool isMatch(const char* s, const char* p);
	void test();
};

