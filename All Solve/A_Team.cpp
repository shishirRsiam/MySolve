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
    int cnt = 0;
    while(t--)
    {
        map<int,int>mp;
        int a,b,c; cin>>a>>b>>c;
        mp[a]++, mp[b]++, mp[c]++;
        if(mp[1]>1) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}