#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k; cin>>n>>k;
    int ans = 0;
    while(n>0)
    {
        ans++;
        n /= k;
    }
    cout<<ans<<endl;

    return 0;
}