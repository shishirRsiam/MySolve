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
using namespace std;

bool testcase()
{
    ll a, b, c, ok = 0;;
    cin >> a >> b >> c;
    set<ll> ans;
    long long val = pow(a, ok);
    while (val < c)
    {
        if (c % val) break;
        ll huh = c / val;
        ans.insert(huh);
        while (huh % b == 0)
        {
            huh /= b;
            ans.insert(huh);
        }
        ok++;
        val = pow(a, ok);
    }
    cout << ans.size() << "\n";
    return true;
}

int main()
{
    code by shishirRsiam

    int t; cin >> t;
    while (t--)

        testcase();

    return 0;
}