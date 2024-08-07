#include <bits/stdc++.h>
#define str string
#define ll long long
#define by "\n";
#define pi pair<ll, ll>
#define vec vector<ll>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout << "YES\n" : cout << "NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s, i, n) for (int i = s; i < n; i++)
#define print(x)     \
    for (auto v : x) \
        cout << v << " ";
using namespace std;

/*Time   :   20:46:19
Date  	 :   06-08-2024
Author   :   shishirRsiam
File  	 :   C_Showering.cpp*/

bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n, m, s;
    cin >> n >> s >> m;
    int a = 0, b = 0, x;
    vector<pi> aa;
    loop(0, i, n)
    {
        cin >> a >> b;
        aa.pb({a, b});
    }
    sort(bee(aa));

    x = 0;
    for (auto [a, b] : aa)
    {
        if (a - x >= s)
            return true;
        x = b;
    }
    return m - x >= s;
}

int main()
{
    code by shishirRsiam;

    int testcase;
    cin >> testcase;
    while (testcase--)

        _solve_koro_taratari__aro_solve_korte_hobe() ? pyn;

    return 0;
}