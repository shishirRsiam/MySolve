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
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




bool testcase()
{
    int n; cin>>n;
    vec a(n), b(n+1);
    loop(0,i,n) cin>>a[i];
    loop(0,i,n+1) cin>>b[i];

    ll ans = 1, flag = true, val = b.back();

    loop(0,i,n)
    {
        ans += abs(a[i]-b[i]);
        if(a[i] >= val and b[i] <= val) flag = false;
        if(a[i] <= val and b[i] >= val) flag = false;
    }

    if(flag)
    {
        ll mn = INT_MAX;
        loop(0,i,n)
        {
            mn = min(mn, abs(a[i] - val));
            mn = min(mn, abs(b[i] - val));
        }
        ans += mn;
    }

    cout<<ans<<by 


    return true;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}