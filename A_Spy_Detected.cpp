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

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        unordered_map<int,int>mp;
        unordered_map<int,int>idx;
        loop(1,i,n+1)
        {
            int a; cin>>a;
            idx[a] = i;
            mp[a]++;
        }
        for(auto x:mp)
        {
            if(x.second == 1) cout<<idx[x.first]<<"\n";
        }
    }

    return 0;
}