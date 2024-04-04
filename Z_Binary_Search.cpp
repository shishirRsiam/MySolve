#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    while (x--) 
    {
        int num;
        cin >> num;
        binary_search(a.begin(), a.end(), num) ?
            cout << "found" << endl:
            cout << "not found" << endl;
    }

    return 0;
}
