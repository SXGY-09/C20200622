#pragma once
using namespace std;
/// <summary>
/// �������������������λ��
/// </summary>
class MedianNumber
{
public:
	/// <summary>
	/// ��ѯ��kС����
	/// </summary>
	/// <param name="A">����A</param>
	/// <param name="m">����A����</param>
	/// <param name="B">����B</param>
	/// <param name="n">����B����</param>
	/// <param name="k">��kС</param>
	/// <returns></returns>
	double findKth(int A[], int m, int B[], int n, int k);
	double solve(int A[], int m, int B[], int n);
	void test();
};

