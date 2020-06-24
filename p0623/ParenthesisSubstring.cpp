#include "ParenthesisSubstring.h"
#include <stack>
#include <algorithm>
#include <iostream>
int ParenthesisSubstring::solve(string s)
{
	int last = -1;
	int maxLen = 0;
	stack<int> stack1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			stack1.push(i);
			continue;
		}
		//以下是)的情况
		if (stack1.empty()) {
			last = i;
		}
		else {
			stack1.pop();
			if (stack1.empty()) {
				maxLen = max(maxLen, i - last);
			}
			else {
				maxLen = max(maxLen, i - stack1.top());
			}
		}
	}
	return maxLen;
}

void ParenthesisSubstring::test()
{
	string s = "(()";
	int result = solve(s);
	cout << result << endl;
}
