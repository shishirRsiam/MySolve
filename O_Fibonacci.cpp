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

    int n; cin>>n;
    ll dp[n+1];
    dp[1] = 0;
    dp[2] = 1;

    loop(3,i,n+1) dp[i] = dp[i-1] + dp[i-2];

    cout<<dp[n]<<"\n";

    return 0;
}