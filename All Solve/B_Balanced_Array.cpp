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




bool testcase()
{
    int n; cin>>n;
    if(n%4)
    {
        pn;
        return 0;
    }

    py;

    n /= 2;

    ll even = 0, odd = 0;
    for(int i=1;i<=n;i++)
    {
        cout<<i+i<<" ";
        even += i+i;
    }
    for(int i=1;i<n;i++)
    {
        cout << i+i-1<<" ";
        odd += i+i-1;
    }

    cout<<even - odd<<"\n";

    return true;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}