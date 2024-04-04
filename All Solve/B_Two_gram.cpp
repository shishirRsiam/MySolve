#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    str s; cin>>s;

    unordered_map<str, int>mp;
    int mx = 0; str ans;

    loop(0,i,n-1)
    {
        str t = s.substr(i, 2);
        mp[t]++;
        if(mp[t]>mx) mx = mp[t], ans = t;
        // cout<<t<<"\n";
    }
    cout<<ans<<"\n";
    return 0;
}