#pragma once
#include "Interval.h"
#include <vector>
using namespace std;
class IntervalInsert
{
public:
	vector<Interval> insert(vector<Interval>& intervals, Interval newInterval);
	void test();
};

