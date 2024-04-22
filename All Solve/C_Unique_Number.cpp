#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v;
using namespace std;


void testcase()
{
    int n; cin>>n;
    if(n<=9) cout<<n<<"\n";
    else if(n<=17) cout<<n-9<<9<<"\n";
    else if(n<=24) cout<<n-17<<89<<"\n";
    else if(n<=30) cout<<n-24<<789<<"\n";
    else if(n<=35) cout<<n-30<<6789<<"\n";
    else if(n<=39) cout<<n-35<<56789<<"\n";
    else if(n<=42) cout<<n-39<<456789<<"\n";
    else if(n<=44) cout<<n-42<<3456789<<"\n";
    else if(n==45) cout<<123456789<<"\n";
    else cout<<"-1\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}