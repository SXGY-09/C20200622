#include "SearchRange.h"
#include <iostream>
vector<int> SearchRange::solve(int* A, int n, int target)
{
    //×ó¼Ð±ÆÕÒ×ó±ß½ç
    int lt1 = 0;
    int rt1 = n - 1;
    while (lt1 <= rt1) {
        int mid = lt1 + ((rt1 - lt1) >> 1);
        if (A[mid] < target) {
            lt1 = mid + 1;
        }
        else {
            rt1 = mid - 1;
        }
    }
    //ÏòÓÒ¼Ð±ÆÕÒÓÒ±ß½ç
    int lt2 = lt1;
    int rt2 = n - 1;
    while (lt2 <= rt2) {
        int mid = lt2 + ((rt2 - lt2) >> 1);
        if (A[mid] <= target) {
            lt2 = mid + 1;
        }
        else {
            rt2 = mid - 1;
        }
    }
    if (lt1 <= rt2) {
        return { lt1,rt2 };
    }
    return { -1,-1 };
}

void SearchRange::test()
{
    int A[] = { 5, 7, 7, 8, 8, 10 };
    vector<int> result = solve(A, 6, 8);
    for (int i : result) {
        cout << i << ",";
    }
}
