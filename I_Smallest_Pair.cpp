#include<bits/stdc++.h>
#define str string 
#define ll long long 
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
        int n; cin>>n;
        vec a(n);
        loop(0,i,n) cin>>a[i];
        ll ans = INT_MAX;
        loop(0,i,n)
        {
            loop(i+1,j,n)
            {
                ll x = (a[i]+a[j]+j)-i;
                ans = min(ans, x);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}