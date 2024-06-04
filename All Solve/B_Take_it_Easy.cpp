#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
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
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    int n; cin>>n;
    vec a(n);
    ll sum = 0;
    loop(0,i,n)
    {
        cin>>a[i];
        sum += a[i];
    }

    int target = sum / n;
    if(sum%2==1 or target %2==1)
    {
        pn;
        return;
    }


    // sort(bee(a));
    ll opps = 0;
    loop(0,i,n)
    {
        opps += a[i] - target;
        a[i] = target;
    }
    // print(a);
    // py;
    // cout<<opps<<"\n";
    opps == 0 ? pyn;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}