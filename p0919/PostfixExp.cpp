#include "PostfixExp.h"
#include <stack>
#include <iostream>
#include <algorithm>
int PostfixExp::evalRPN(vector<string>& tokens)
{
    stack<int> nums;
    int num1;
    int num2;
    for (string item : tokens) {
        if (item == "+") {
            num2 = nums.top();
            nums.pop();
            num1 = nums.top();
            nums.pop();
            nums.push(num1 + num2);
        }
        else if (item == "-") {
            num2 = nums.top();
            nums.pop();
            num1 = nums.top();
            nums.pop();
            nums.push(num1 - num2);
        }
        else if (item == "*") {
            num2 = nums.top();
            nums.pop();
            num1 = nums.top();
            nums.pop();
            nums.push(num1 * num2);
        }
        else if (item == "/") {
            num2 = nums.top();
            nums.pop();
            num1 = nums.top();
            nums.pop();
            nums.push(num1 / num2);
        }
        else {
            nums.push(atoi(item.c_str()));
        }
    }
    return nums.top();
}

void PostfixExp::test()
{
    vector<string> input = { "20","10","+","30","*" };
    int result = evalRPN(input);
    cout << result << endl;
}
