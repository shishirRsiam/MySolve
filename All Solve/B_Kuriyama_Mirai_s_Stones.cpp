#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define PB(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vec a(n);
    vec pref, suff;
    ll sum = 0;
    pref.PB(sum);
    loop(0,i,n) cin>>a[i], sum += a[i], pref.PB(sum);

    sort(bee(a));
    sum = 0;
    suff.PB(sum);
    for(int v:a) sum += v, suff.PB(sum);

    int m; cin>>m;
    while(m--)
    {
        int x,y,z; cin>>x>>y>>z;
        y--;
        if(x==1) cout<<pref[z]-pref[y]<<"\n";
        else if(x==2) cout<<suff[z]-suff[y]<<"\n";
    }
    return 0;
}