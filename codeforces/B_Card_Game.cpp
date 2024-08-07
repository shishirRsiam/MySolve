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

/*Time   :   22:30:07
Date  	 :   06-08-2024
Author   :   shishirRsiam
File  	 :   B_Card_Game.cpp*/

bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    int ans = 0;
    if (x1 > y1 and x2 > y2)
        ans++;
    if (x1 > y2 and x2 > y1)
        ans++;
    if (x1 > y2 and x2 > y1)
        ans++;
    if (x1 > y1 and x2 > y2)
        ans++;
    cout << ans << endl;
    return true;
}
int main()
{
    code by shishirRsiam;

    int testcase;
    cin >> testcase;
    while (testcase--)

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}