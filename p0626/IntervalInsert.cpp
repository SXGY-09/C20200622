#include "IntervalInsert.h"
#include <iostream>
vector<Interval> IntervalInsert::insert(vector<Interval>& intervals, Interval newInterval)
{
	vector<Interval> result;
	if (intervals.size() == 0) {
		result.push_back(newInterval);
		return result;
	}
	int i = 0;
	for (; i < intervals.size(); i++) {
		if (intervals[i].start <= newInterval.start) {
			result.push_back(intervals[i]);
		}
		else {
			break;
		}
	}
	if (i == 0 || result.back().end < newInterval.start) {
		result.push_back(newInterval);
	}
	else if (result.back().end < newInterval.end) {
		result.back().end = newInterval.end;
	}
	for (; i < intervals.size(); i++) {
		if (result.back().end > intervals[i].end) {
			continue;
		}
		if (intervals[i].start <= result.back().end) {
			result.back().end = intervals[i].end;
			i++;
			break;
		}
		break;
	}
	for (; i < intervals.size(); i++) {
		result.push_back(intervals[i]);
	}
	return result;
}

void IntervalInsert::test()
{
	//[1,2],[3,5],[6,7],[8,10],[12,16],
	vector<Interval> intervals = { Interval(1,2),Interval(3,5), Interval(6,7), Interval(8,10), Interval(12,16) };
	Interval newInterval(4, 9);
	vector<Interval> result = insert(intervals, newInterval);
	for (auto i : result) {
		cout << "[" << i.start << "," << i.end << "],";
	}
}
