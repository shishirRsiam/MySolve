#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    ll n; cin>>n;
    int ans = 100 - n;
    if(ans < 10)
    {
        cout<<"0\n";
        return;
    }
    str s = to_string(ans);
    if(s.back() != '0') 
        s[1] = '0';
    cout<<s<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}