#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll a, b, c; cin>>a>>b>>c;
        if(a==b) cout<<c<<"\n";
        if(a==c) cout<<b<<"\n";
        if(c==b) cout<<a<<"\n";
    }

    return 0;
}