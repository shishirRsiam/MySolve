#include <bits/stdc++.h>
#define str string
#define ll long long
#define pi pair<ll, ll>
#define vec vector<ll>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s, i, n) for (int i = s; i < n; i++)
using namespace std;

void testcase()
{
    ll a, b, n;
    cin >> n >> a >> b;
    ll p = 0;
    ll tmp = n;
    while (tmp > 1)
    {
        p += b;
        tmp -= 2;
    }
    if(n%2==1) p += a;
    ll first = n * a;
    cout << min(first, p) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        testcase();

    return 0;
}