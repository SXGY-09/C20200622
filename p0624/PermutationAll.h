#pragma once
#include <vector>
using namespace std;
class PermutationAll
{
public:
	/// <summary>
	/// �������ȫ���У��������ظ�����
	/// </summary>
	/// <param name="num"></param>
	/// <returns></returns>
	vector<vector<int>> permute(vector<int>& num);
	/// <summary>
	/// �������ȫ���У������ظ�����
	/// </summary>
	/// <param name="num"></param>
	/// <returns></returns>
	vector<vector<int>> permuteUnique(vector<int>& num);
	void test();
private:
	/// <summary>
	/// ��������㷨���������ظ�
	/// </summary>
	/// <param name="permute">�洢ȫ����</param>
	/// <param name="num">����</param>
	/// <param name="begin">��ʼλ��</param>
	void dfs(vector<vector<int>>& permute, vector<int>& num, int begin);
	/// <summary>
	/// ��������㷨���������ظ�
	/// </summary>
	/// <param name="permute">�洢ȫ����</param>
	/// <param name="num">Դ����</param>
	/// <param name="used">ʹ�ñ��</param>
	/// <param name="list">�ݴ�·��</param>
	void dfs(vector<vector<int>>& permute, vector<int>& num, vector<bool>& used, vector<int>& list);
	/// <summary>
	/// ��������㷨�������ظ�
	/// </summary>
	/// <param name="permute">�洢ȫ����</param>
	/// <param name="num">Դ����</param>
	/// <param name="used">ʹ�ñ��</param>
	/// <param name="list">�ݴ�·��</param>
	void dfs2(vector<vector<int>>& permute, vector<int>& num, vector<bool>& used, vector<int>& list);
};

