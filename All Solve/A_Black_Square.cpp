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

    int n = 4;
    vec a(n);
    loop(0,i,n) cin>>a[i];
    str s; cin>>s;
    
    ll sum = 0;
    for(char c:s)
    {
        int idx = c-'0'-1;
        sum += a[idx];
    }
    cout<<sum<<"\n";

    return 0;
}