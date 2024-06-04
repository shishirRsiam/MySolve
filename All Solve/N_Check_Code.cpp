#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"Yes\n"
#define pn cout<<"No\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"No\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    int a, b; cin>>a>>b;
    str s; cin>>s;

    int cnt = count(bee(s), '-');

    if(cnt == 1)
    {
        bool flag = false;
        if(s[a]=='-') flag = true;
        flag ? py : pn;
    }
    else pn;
}

int main()
{
    code by shishirRsiam

    // int t; cin>>t;
    // while(t--) 

        testcase();

    return 0;
}