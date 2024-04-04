#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b; cin>>a>>b;
    int cnt = 0;
    while(b+1>a)
    {
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}