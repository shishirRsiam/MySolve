#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

void testcase()
{
    int n; cin>>n;
    vec a(n),b(n),c(n),d(n);
    loop(0,i,n) cin>>a[i];
    loop(0,i,n) cin>>b[i];
    loop(0,i,n) cin>>c[i];
    loop(0,i,n) cin>>d[i];


    ll aa = 0, bb = 0, cc = 0, dd = 0;
    loop(0,i,n)
    {
        aa += a[i];
        bb += b[i];
        cc += c[i];
        dd += d[i];
    }


    if(aa > cc and bb > dd) cout<<"A\n";
    else if(aa < cc and bb < dd) cout<<"P\n";
    else cout<<"DRAW\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) testcase();

    return 0;
}