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



int main()
{
    code by shishirRsiam

    int n, x; cin>>n;
    map<int,int>mp;
    vec a(n);
    loop(0,i,n)
    {
        cin>>a[i];
        mp[a[i]] = i;
    }


    vector<pi>v;
    for(auto [a, b]:mp)
        v.pb({b, a});
    sort(bee(v));

    cout<<mp.size()<<by 
    for(auto [a, b]:v)
        cout<<b<<" ";

    return 0;
}