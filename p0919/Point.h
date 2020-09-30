#pragma once
struct Point
{
	int x;
	int y;
	Point(int x, int y) :x(x), y(y) {}
	bool operator==(Point p2) {
		return this->x == p2.x && this->y == p2.y;
	}
	bool operator!=(Point p2) {
		return !operator==(p2);
	}
};
