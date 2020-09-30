#pragma once
#include <vector>
#include "Point.h"
using namespace std;
class PointsInOneLine
{
public:
	/// <summary>
	/// 计算处于同一平面的最多点数
	/// </summary>
	/// <param name="points"></param>
	/// <returns></returns>
	int maxPoints(vector<Point>& points);
	/// <summary>
	/// 三点是否花线
	/// </summary>
	/// <param name="p1"></param>
	/// <param name="p2"></param>
	/// <param name="p3"></param>
	/// <returns></returns>
	bool inOneLine(Point& p1, Point& p2, Point& p3);
	void test();
};

