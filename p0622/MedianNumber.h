#pragma once
using namespace std;
/// <summary>
/// 查找两个有序数组的中位数
/// </summary>
class MedianNumber
{
public:
	/// <summary>
	/// 查询第k小的数
	/// </summary>
	/// <param name="A">数组A</param>
	/// <param name="m">数组A长度</param>
	/// <param name="B">数组B</param>
	/// <param name="n">数组B长度</param>
	/// <param name="k">第k小</param>
	/// <returns></returns>
	double findKth(int A[], int m, int B[], int n, int k);
	double solve(int A[], int m, int B[], int n);
	void test();
};

