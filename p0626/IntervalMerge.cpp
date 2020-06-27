#include "IntervalMerge.h"
#include <algorithm>
#include <iostream>
vector<Interval> IntervalMerge::merge(vector<Interval>& intervals)
{
	if (intervals.size() <= 1) {
		return intervals;
	}
	sort(intervals.begin(), intervals.end(), [](Interval i1, Interval i2)->bool {return i1.start < i2.start; });
	vector<Interval> result;
	result.push_back(intervals[0]);
	for (int i = 1; i < intervals.size(); i++) {
		if (intervals[i].start <= result.back().end) {
			result.back().end = result.back().end >= intervals[i].end ? result.back().end : intervals[i].end;
		}
		else {
			result.push_back(intervals[i]);
		}
	}
	return result;
}

void IntervalMerge::test()
{
	//[1,3],[2,6],[8,10],[15,18],
	vector<Interval> intervals = { Interval(1,3),Interval(2,6),Interval(8,10),Interval(15,18) };
	vector<Interval> result = merge(intervals);
	for (auto i : result) {
		cout << "[" << i.start << "," << i.end << "],";
	}
}

