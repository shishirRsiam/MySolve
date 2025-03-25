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


auto solve()
{
    int n, k; cin>>n>>k;
    str s; cin>>s;

    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j > i; j--)
        {
            if(k == 0) break;
            if(s[i] > s[j])
            {
                swap(s[i], s[j]);
                k--;
            }
        }
    }
    auto ss = s;
    reverse(bee(ss));

    // cout<<s<<" "<<ss<<endl;

    return ss > s;
}

int main()
{
    code by shishirRsiam;

    int testcase;
    cin >> testcase;
    for(int i = 1; i <= testcase; i++)
    {
        // cout<<i<<": ";
        solve() ? pyn;
        // cout<<by;
    }

    return 0;
}