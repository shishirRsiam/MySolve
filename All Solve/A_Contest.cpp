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
    ll a,b,c,d; cin>>a>>b>>c>>d;
    ll misha = max(a*3/10, a - ((a/250) * c));
    ll vasya = max(b*3/10, b - ((b/250) * d));
    if(misha == vasya) cout<<"Tie\n";
    else cout<<(misha > vasya ? "Misha\n" : "Vasya\n");
}

int main()
{
    code by shishirRsiam

    // int t; cin>>t;
    // while(t--) 
        testcase();

    return 0;
}