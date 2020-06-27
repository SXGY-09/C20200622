#pragma once
#include "Interval.h"
#include <vector>
using namespace std;
class IntervalMerge
{
public:
	vector<Interval> merge(vector<Interval>& intervals);
	void test();
};

