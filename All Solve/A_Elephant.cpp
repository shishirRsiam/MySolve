#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    ll now = 0;
    int cnt = 0;
    while(n>now)
    {
        now += 5;
        cnt++;
    }
    cout<<cnt<<"\n";

    return 0;
}