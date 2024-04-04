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
    vec a;
    int zero = 0;
    loop(0,i,n)
    {
        int ok; cin>>ok;
        if(ok==0) zero++;
        else a.pb(ok);
    }
    for(int v:a) cout<<v<<" ";
    while(zero--) cout<<"0 ";

    return 0;
}