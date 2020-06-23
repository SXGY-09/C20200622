#include "MaxArea.h"
#include <iostream>

int MaxArea::solve(vector<int>& height)
{
    // TODO: 在此处添加实现代码.
    if (height.size() <= 1) {
        return 0;
    }
    int maxArea = 0;
    int begin = 0;
    int end = height.size() - 1;
    while (begin < end) {
        if (height[begin] <= height[end]) {
            maxArea = maxArea >= height[begin] * (end - begin) ? maxArea : height[begin] * (end - begin);
            begin++;
        }
        else {
            maxArea = maxArea >= height[end] * (end - begin) ? maxArea : height[end] * (end - begin);
            end--;
        }
    }
    return maxArea;
}


void MaxArea::test()
{
    // TODO: 在此处添加实现代码.
    vector<int> height{ 1,8,6,2,5,4,8,3,7 };
    int area = solve(height);
    cout << area << endl;
}
