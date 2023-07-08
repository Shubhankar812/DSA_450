#include <bits/stdc++.h>
using namespace std;

int findSum(int A[], int N)
{
    // code here.
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > mx)
        {
            mx = A[i];
        }
        if (A[i] < mn)
        {
            mn = A[i];
        }
    }
    return (mx + mn);
}

int main()
{
    int A[] = {-2, 1, -4, 5, 3};
    int n = 5;

    cout<<findSum(A,n)<<endl;

    return 0;
}