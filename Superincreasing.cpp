#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"Yes\n"
#define pn cout<<"No\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

class emni
{
    public: 
    ll a, b, c;
    emni(ll x, ll y, ll z)
    {
        a = x;
        b = y;
        c = z;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // loop(0,i,10) cout<<pref[i]<<" ";

    int t; cin>>t;
    ll mx = INT_MIN;

    vector<emni>test;

    loop(0,i,t)
    {
        ll a, b, c; cin>>a>>b>>c;
        mx = max(a, mx);
        test.push_back(emni(a,b,c));
    }


    vec pref;
    ll prev = 1;
    pref.pb(prev);
    loop(1,i,mx+10)
    {
        ll newsum = pref.back()*2;
        pref.pb(newsum);
        // cout<<newsum<<" ";
    }

    loop(0,i,10) cout<<pref[i]<<" ";

    for(auto x:test)
    {
        ll a = x.a, b = x.b, c = x.c;
        if(c>=pref[b-1]) py;
        else pn;
    }

    return 0;
}