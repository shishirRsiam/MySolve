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




void testcase()
{
    int a,b,c,d; cin>>a>>b>>c>>d;
    
    bool flag = false;

    int s = min(a, b), e = max(a, b);
    vector<bool >vst(20);
    for(int i=s;i<=e;i++)
        vst[i] = true;
    
    if(vst[c] and !vst[d]) flag = true;
    else if(!vst[c] and vst[d]) flag = true;

    flag ? pyn;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}