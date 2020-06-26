#include "CombinationSum2.h"
#include <algorithm>
#include <iostream>
vector<vector<int>> CombinationSum2::solve(vector<int>& candidates, int target)
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

void CombinationSum2::dfs(vector<vector<int>>& path, vector<int>& tmp, int k, vector<int>& candidates, int left)
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
        while (++k < candidates.size() && candidates[k] == candidates[k - 1]);
        dfs(path, tmp, k, candidates, left);
    }
}

void CombinationSum2::test()
{
    vector<int> candidates = { 10,1,2,7,6,1,5 };
    vector<vector<int>> result = solve(candidates, 8);
    for (auto i : result) {
        for (auto j : i) {
            cout << j << ",";
        }
        cout << endl;
    }
}
