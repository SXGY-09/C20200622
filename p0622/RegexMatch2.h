#pragma once
class RegexMatch2
{
public:
	/// <summary>
	/// �ݹ鷨�����Ӷȴ�
	/// </summary>
	/// <param name="s"></param>
	/// <param name="p"></param>
	/// <returns></returns>
	bool solve(const char* s, const char* p);
	/// <summary>
	/// ��̬�滮��
	/// </summary>
	/// <param name="s"></param>
	/// <param name="p"></param>
	/// <returns></returns>
	bool isMatch(const char* s, const char* p);
	void test();
};

