#pragma once
class RegexMatch
{
public:
	/// <summary>
	/// �ݹ鷨���Ӻ���ǰ��
	/// </summary>
	/// <param name="s">��ƥ���ַ���</param>
	/// <param name="p">������ʽ</param>
	/// <returns></returns>
	bool solve(const char* s, const char* p);
	/// <summary>
	/// ��̬�滮������ǰ������
	/// </summary>
	/// <param name="s">��ƥ���ַ���</param>
	/// <param name="p">������ʽ</param>
	/// <returns></returns>
	bool isMatch(const char* s, const char* p);
	void test();
};

