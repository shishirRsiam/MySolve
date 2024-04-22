#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), res(33);
    for (int &x : a) cin >> x;

    for (int j = 0; j < 32; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] & (1 << j))
                res[j]++;
        }
    }
    
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        bool ok = true;
        for (int j = 0; j < 32; j++)
        {
            if (res[j] % i != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok) ans.push_back(i);
    }
    // sort(ans.begin(), ans.end());
    for (int x : ans)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
