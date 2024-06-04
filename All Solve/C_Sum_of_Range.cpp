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

    int a, b; cin>>a>>b;
    if(a > b) swap(a, b);
    ll all = 0, even = 0, odd = 0;
    loop(a,i,b+1)
    {
        all += i;
        if(i%2) odd += i;
        else even += i;
    }
    cout<<all<<"\n"<<even<<"\n"<<odd<<"\n";
    return 0;
}