#include "PointsInOneLine.h"
#include <iostream>
int PointsInOneLine::maxPoints(vector<Point>& points)
{
	int n = points.size();
	if (n <= 2) {
		return n;
	}
	int max = 0;
	vector<vector<bool>> passed(n, vector<bool>(n, false));
	for (int i = 0; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			if (passed[i][j]) {
				continue;
			}
			vector<int> line = { i,j };
			Point* p1 = &points[i];
			Point* p2 = &points[j];
			while (*p2 == *p1 && j <= n - 1) {
				while (++j <= n - 1 && passed[i][j]);
				line.push_back(j);
				p2 = &points[j];
			}
			for (int k = j + 1; k <= n - 1; k++) {
				if (passed[i][k]) {
					continue;
				}
				if (inOneLine(*p1, *p2, points[k])) {
					for (int index : line) {
						if (points[index] != points[k]) {
							passed[index][k] = true;
						}
					}
					line.push_back(k);
				}
			}
			if (line.size() > max) {
				max = line.size();
			}
		}
	}
	return max;
}

bool PointsInOneLine::inOneLine(Point& p1, Point& p2, Point& p3)
{
	return (p3.y - p1.y) * (p2.x - p1.x) == (p3.x - p1.x) * (p2.y - p1.y);
}

void PointsInOneLine::test()
{
	vector<Point> points = { Point(1,2),Point(3,4),Point(5,6),Point(6,9) };
	vector<Point> p2 = {
		Point(-230,324),Point(-291,141),Point(34,-2),Point(80,22),Point(-28,-134),
		Point(40,-23),Point(-72,-149),Point(0,-17),Point(32,-32),Point(-207,288),
		Point(7,32),Point(-5,0),Point(-161,216),Point(-48,-122),Point(-3,39),
		Point(-40,-113),Point(115,-216),Point(-112,-464),Point(-72,-149),Point(-32,-104),
		Point(12,42),Point(-22,19),Point(-6,-21),Point(-48,-122),Point(161,-288),
		Point(16,11),Point(39,23),Point(39,30),Point(873,-111)
	};
	int result = maxPoints(p2);
	cout << result << endl;
}
