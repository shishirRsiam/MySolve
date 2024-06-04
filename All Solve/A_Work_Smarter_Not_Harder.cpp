#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


// https://www.codechef.com/viewsolution/1021734560

void testcase()
{
    int a,b,c; cin>>a>>b>>c;

    int tortoise = ceil(a*1.0/b);
    int hare = ceil(a*1.0/c);

    if(hare >= tortoise) 
    {
        cout<<"-1";
    }
    else cout<<tortoise - hare-1<<by;

    // cout<<tortoise<<" "<<hare<<by;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}