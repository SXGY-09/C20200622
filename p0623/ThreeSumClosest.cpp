#include "ThreeSumClosest.h"
#include <algorithm>
#include <climits>
#include <iostream>
int ThreeSumClosest::solve(vector<int>& num, int target)
{
	if (num.size() < 3) {
		return 0;
	}
	sort(num.begin(), num.end());
	int diff = INT_MAX;
	int sum = 0;
	for (auto i = num.begin(); i < num.end() - 2;) {
		auto j = i + 1;
		auto k = num.end() - 1;
		while (j < k) {
			int sum1 = *i + *j + *k;
			if (abs(sum1 - target) < diff) {
				diff = abs(sum1 - target);
				sum = sum1;
			}
			if (sum1 - target == 0) {
				return target;
			}
			else if (sum1 - target < 0) {
				while (++j < k && *j == *(j - 1));
			}
			else {
				while (--k > j && *k == *(k + 1));
			}
		}
		while (++i < num.end() - 2 && *i == *(i - 1));
	}
	return sum;
}

void ThreeSumClosest::test()
{
	vector<int> num{ 3,-74,21,43,-94,-83,2,-97,-28,83,76,-4,17,95,62,5,-55,73,94,18,-32,79,-40,-60,-42,-10,23,43,71,3,40,64,-53,36,-18,-66,-20,-52,18,-96,-86,-45,19,16,-91,-90,-61,-92,-22,-26,-48,-24,-68,-95,19,-13,-61,-46,-45,3,14,98,-44,-54,49,40,-37,97,-72,-58,13,-27,28,21,1,40,-49,56,25,25,56,36,-27,31,56,21,-59,-44,89,-25,88,-72,0,-95,70,65,-84,52,66,-76,-71,91,-12,82,-98,56,-3,87,-54,-62,0,-15,94,95,49,46,-34,-14,70,12,34,-18,95,74,-86,-71,-61,35,-19,-45,-33,20,61,45,-97,64,23,34,20,-31,8,23,21,-22,-20,41,92,52,63,-14,-52,22,94,-59,-97,-51,59,-7,98,52,63,-3,-21,38,85,75,31,79,-20,-70,27,54,60,-98,23,-7,-9,73,100,-80,63,87,17,-50,69,53,5,14,0,55,-94,41,5,99,-91,-55,65,-46,-39,-52,-82,35,-77,-85,-94,32,33,22 };
	int sum = solve(num, 256);
	cout << sum << endl;
}
