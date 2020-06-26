#include "CombinationSum.h"
#include <algorithm>
#include <iostream>
vector<vector<int>> CombinationSum::solve(vector<int>& candidates, int target)
{
    vector<vector<int>> path;
    if (candidates.size() == 0) {
        return path;
    }
    sort(candidates.begin(), candidates.end());
    vector<int> tmp;
    dfs(path, tmp, 0, candidates, target);
    return path;
}

void CombinationSum::dfs(vector<vector<int>>& path, vector<int>& tmp, int k, vector<int>& candidates, int left)
{
    if (left == 0) {
        path.push_back(tmp);
        return;
    }
    if (k >= candidates.size()) {
        return;
    }
    if (candidates[k] <= left) {
        tmp.push_back(candidates[k]);
        dfs(path, tmp, k + 1, candidates, left - candidates[k]);
        tmp.pop_back();
        dfs(path, tmp, k + 1, candidates, left);
    }
}

void CombinationSum::test()
{
    vector<int> candidates = { 2,3,6,7 };
    vector<vector<int>> result = solve(candidates, 7);
    for (auto i : result) {
        for (auto j : i) {
            cout << j << ",";
        }
        cout << endl;
    }
}
