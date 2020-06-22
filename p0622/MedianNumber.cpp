#include "MedianNumber.h"
#include <iostream>
double MedianNumber::findKth(int A[], int m, int B[], int n, int k)
{
    //始终保持元素较小的位于前
    if (m > n) {
        return findKth(B, n, A, m, k);             
    }
    if (m == 0) {
        return B[k - 1];
    }
    if (k == 1) {
        return A[0] <= B[0] ? A[0] : B[0];
    }
    int pa = k / 2 <= m ? k / 2 : m;
    int pb = k - pa;
    if (A[pa - 1] < B[pb - 1]) {
        return findKth(A + pa, m - pa, B, n, k - pa);
    }
    else if(A[pa - 1] > B[pb - 1]) {
        return findKth(A, m, B + pb, n - pb, k - pb);
    }
    else {
        return A[pa - 1];
    }
}

double MedianNumber::solve(int A[], int m, int B[], int n)
{
    if ((m + n) & 0x01) {
        return findKth(A, m, B, n, (m + n) / 2 + 1);
    }
    return (findKth(A, m, B, n, (m + n) / 2) + findKth(A, m, B, n, (m + n) / 2 + 1)) / 2;
}

void MedianNumber::test()
{
    int A[] = { 1,2,3,4,5,6 };
    int B[] = { 3,5 };
    double result = solve(A, 6, B, 2);
    cout << result << endl;
}
