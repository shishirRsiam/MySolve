#include <bits/stdc++.h>
#define str string
#define ll long long
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout << "YES\n" : cout << "NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s, i, n) for (int i = s; i >= 1; i--) // Iterate down from n-1

using namespace std;

int gcd(int a, int b) 
{
    if(b==0) return a;
    return gcd(b, a%b);
}

void testcase() {
    int n;
    cin >> n;
    int ans = 1;
    for(int i=1;i<n;i++)
    {
        int opps = gcd(n, i) + i;
        if(opps < n)
            ans = max(ans, opps);
    }
    cout<<ans<<"\n";
}

int main() {
    code by shishirRsiam

    int t;
    cin >> t;
    while (t--)

        testcase();

    return 0;
}
