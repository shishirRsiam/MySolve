#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define PB(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    ll sum = 0;
    vec a(n);
    loop(0,i,n) cin>>a[i], sum += a[i];

    int target = sum / 2;

    bool dp[n+1][target+1];

    loop(0,i,target+1) dp[0][i] = false;
    dp[0][0] = true;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=target;j++)
        {
            dp[i][j] = dp[i-1][j];
            if(a[i-1]<=j)
                dp[i][j] = dp[i][j] or dp[i-1][j-a[i-1]];
        }
    }
    
    dp[n][target] ? py:pn;
    return 0;
}