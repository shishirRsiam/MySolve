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
    str s; cin>>s;
    int i = 0, ans = 1;
    while(s[i]=='0') i++;
    while(s[i]=='1') i++;
    while(s[i] != NULL)
    {
        bool flag = false;
        while(s[i]=='0') flag = true, i++;
        if(flag) ans++, flag = false;
        while(s[i]=='1') flag = true, i++;
        if(flag) ans++;
    }
    if(s[0] != '0' and ans > 2) ans--;
    cout<<ans<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}