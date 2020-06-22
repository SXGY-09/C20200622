#include <vector>
#include <map>
#include <iostream>
#include "TwoSum.h"
using namespace std;
vector<int> TwoSum::solve(vector<int>& numbers, int target) {
	vector<int> result;
	map<int, int> hash1;
	for (int i = 0; i < numbers.size(); i++) {
		hash1[numbers[i]] = i;
	}
	for (int i = 0; i < numbers.size(); i++) {
		int search = target - numbers[i];
		if (hash1.find(search) != hash1.end() && i != hash1[search]) {
			result.push_back(i + 1);
			result.push_back(hash1[search] + 1);
			break;
		}
	}
	return result;
}
void TwoSum::test() {
	vector<int> numbers{ 3, 2, 4 };
	int target = 6;
	vector<int> result = solve(numbers, target);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\t";
	}
	cout << endl;
}