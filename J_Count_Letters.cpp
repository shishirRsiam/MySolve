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

    str s; cin>>s;
    map<char, int>mp;
    for(char c:s) mp[c]++;
    for(auto x:mp) cout<<x.first<<" : "<<x.second<<"\n";

    return 0;
}