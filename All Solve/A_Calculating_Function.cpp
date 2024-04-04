#include<bits/stdc++.h>
#define ll long long 
#define loop(s,i,n) for(int i=s;i<n;i+=2)
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    ll sum = 0;
    loop(1,i,n+1) sum += i;
    cout<<(n*(n+1)/2) - sum<<"\n";
    return 0;
}