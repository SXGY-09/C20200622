#include "ParenthesisCheck.h"
#include <stack>
#include <iostream>
bool ParenthesisCheck::solve(string s)
{
	if (s.length() == 0) {
		return true;
	}
	stack<char> stack1;
	for (char c1 : s) {
		if (c1 == '(' || c1 == '[' || c1 == '{') {
			stack1.push(c1);
		}
		else if (stack1.empty()) {
			return false;
		}
		else {
			char c2 = stack1.top();
			stack1.pop();
			/*if (c1 == ')' && c2 != '(' || c1 == ']' && c2 != '[' || c1 == '}' && c2 != '{') {
				return false;
			}*/
			if (c1 - c2 != 1 && c1 - c2 != 2) {
				return false;
			}
		}
	}
	return stack1.empty();
}

void ParenthesisCheck::test()
{
	string s = "{([{}])}";
	cout << solve(s) << endl;
}
