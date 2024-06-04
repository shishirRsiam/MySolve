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


int main()
{
    code by shishirRsiam

    int n; cin>>n;
    bool flag = true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag = !flag;
            break;
        }
    }
    flag ? pyn;
    return 0;
}