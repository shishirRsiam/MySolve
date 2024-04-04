#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"Lucky\n"
#define pn cout<<"Unlucky\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vec a(n);
    map<int,int>mp;
    ll mn = INT_MAX;
    loop(0,i,n)
    {
        cin>>a[i];
        mn = min(mn, a[i]);
        mp[a[i]]++;
    }
    mn%2==1 and mp[mn]%2==1 ? py:pn;
    return 0;
}