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

int fun(str s)
{
    if(s=="Tetrahedron") return 4;
    else if(s=="Cube") return 6;
    else if(s=="Octahedron") return 8;
    else if(s=="Dodecahedron") return 12;
    return 20;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    ll ans = 0;
    while(n--)
    {
        str s; cin>>s;
        ans += fun(s);
    }
    cout<<ans<<"\n";
    return 0;
}