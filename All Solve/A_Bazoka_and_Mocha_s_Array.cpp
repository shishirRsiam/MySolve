#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"Yes\n":cout<<"No\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;



bool testcase()
{
    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    vec x, y;
    x.pb(a[0]);
    int i = 1;
    while(i < n)
    {
        if(a[i] < x.back()) break;
        x.pb(a[i++]);
    }
    while(i < n) y.pb(a[i++]);

    y.insert(y.end(), x.begin(), x.end());
    sort(bee(a));

    return a == y;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase() ? pyn;

    return 0;
}