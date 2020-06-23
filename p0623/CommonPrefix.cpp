#include "CommonPrefix.h"
#include <iostream>
string CommonPrefix::solve(vector<string>& strs)
{
	if (strs.size() == 0) {
		return "";
	}
	string comm = strs[0];
	for (int i = 1; i < strs.size(); i++) {
		if (comm.size() == 0) {
			break;
		}
		int commLen = 0;
		for (int j = 0; j < strs[i].size() && j < comm.size(); j++) {
			if (comm[j] == strs[i][j]) {
				commLen++;
			}
			else {
				break;
			}
		}
		comm = comm.substr(0, commLen);
	}
	return comm;
}

void CommonPrefix::test()
{
	vector<string> strs{ "flower","1flow","flight" };
	string result = solve(strs);
	cout << result << endl;
}
