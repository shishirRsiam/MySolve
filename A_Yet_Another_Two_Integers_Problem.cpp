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



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll a, b; cin>>a>>b;
        if(a>b) swap(a,b);
        b -= a;
        int ans = b/10;
        if(b%10 != 0) ans++;
        cout<<ans<<"\n";
    }

    return 0;
}