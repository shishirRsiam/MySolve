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

    int n,k; cin>>n>>k;
    ll sum = 0;
    vec pref;
    pref.pb(sum);

    loop(0,i,n)
    {
        int a; cin>>a;
        sum += a;
        pref.pb(sum);
    }

    cout<<pref[n]-pref[k-1]<<"\n";

    return 0;
}