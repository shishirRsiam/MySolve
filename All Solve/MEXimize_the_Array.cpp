#include <iostream>
#include <vector>

using namespace std;

bool canMakeNonDecreasing(vector<int> &A)
{
    int n = A.size();
    int decreasingCount = 0;
    int decreasingIndex = -1;

    // Step 1: Find the first decreasing element
    for (int i = 1; i < n; ++i)
    {
        if (A[i] < A[i - 1])
        {
            decreasingCount++;
            if (decreasingCount > 2)
            {
                return false; // More than one decreasing sequence
            }
            decreasingIndex = i;
        }
    }

    // Step 2: Check if it's possible to adjust the decreasing element
    if (decreasingCount == 1)
    {
        if (decreasingIndex == 1 || A[decreasingIndex - 2] <= A[decreasingIndex])
        {
            return true; // It's possible to adjust A[i-1] or A[i]
        }
        if (A[decreasingIndex - 1] <= A[decreasingIndex + 1])
        {
            return true; // It's possible to adjust A[i] or A[i+1]
        }
        return false; // It's not possible to adjust A[i-1] or A[i]
    }

    return true; // No decreasing sequence found or more than one decreasing sequence found
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }

        if (canMakeNonDecreasing(A))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
