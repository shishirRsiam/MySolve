#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"will take number\n"
#define pn cout<<"will not take number\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    unordered_map<int,int>mp;
    while(n--)
    {
        loop(0,i,m)
        {
            int a; cin>>a;
            mp[a]++;
        }
    }
    int x; cin>>x;
    mp[x] == 0 ? py:pn;
    return 0;
}