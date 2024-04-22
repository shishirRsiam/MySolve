#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;


void testcase()
{
    int n; cin>>n;
    unordered_map<int,int>mp;
    loop(0,i,n) 
    {
        int a; cin>>a;
        mp[a]++;
    }
    int ans = 0;
    for(auto x:mp)
    {
        int num = x.second;
        if(num<3) continue;
        while(num>=3) ans++, num -= 3;
    }
    cout<<ans<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}