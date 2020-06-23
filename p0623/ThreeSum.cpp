#include "ThreeSum.h"
#include <map>
#include <algorithm>
#include <iostream>
vector<vector<int>> ThreeSum::solve(vector<int>& num)
{
    vector<vector<int>> result;
    if (num.size() < 3) {
        return result;
    }
    sort(num.begin(), num.end());
    if (num.front() > 0 || num.back() < 0) {
        return result;
    }
    for (auto i = num.begin(); i < num.end() - 2;) {
        auto j = i + 1;
        auto k = num.end() - 1;
        while (j < k) 
        {
            int sum = *i + *j + *k;
            if (sum == 0) {
                result.push_back({ *i,*j,*k });
                while (++j < k && *j == *(j - 1));
                while (--k > j && *k == *(k + 1));
            }
            if (sum < 0) {
                while (++j < k && *j == *(j - 1));
            }
            if (sum > 0) {
                while (--k > j && *k == *(k + 1));
            }
        }
        while (++i < num.end() - 2 && *i == *(i - 1));
    }
    return result;
}

void ThreeSum::test()
{
    vector<int> num{ -1, 0, 1, 2, -1,-4 };
    vector<int> num2{ -2, 0, 1, 1, 2 };
    vector<vector<int>> result = solve(num2);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << ",";
        }
        cout << endl;
    }
}
