#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.rbegin(), x.rend()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


int main()
{
    code by shishirRsiam

    int a, b, c, ans = 0; cin>>a>>b>>c;
    
    if(a==1)
    {
        ans += (1+b);
        if(c==1) ans++;
        else ans = (ans*c);
    }
    else if(b==1)
    {
        ans += (1+(min(a,c)));
        if(max(a,c)==1) ans++;
        else ans = (ans*max(a,c));
    }
    else if(c==1)
    {
        ans += (1+b);
        if(a==1) ans++;
        else ans = (ans*a);
    }
    else ans = (a*b*c);

    cout<<ans;
    
    return 0;
}