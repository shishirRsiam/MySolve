#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double n; cin>>n;

    n = n*n;

    double ans = 3.141592653*n;

    cout<<fixed<<setprecision(9)<<ans<<"\n";

    return 0;
}