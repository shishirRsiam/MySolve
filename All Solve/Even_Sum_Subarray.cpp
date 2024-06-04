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
    vec a(n);
    ll sum = 0;
    loop(0,i,n) 
    {
        cin>>a[i];
        sum += a[i];
    }

    int ans = n-1;

    if(sum%2==1)
    {
        for(auto val:a)
        {
            if(val%2) break;
            ans--;
        }
        int temp = n-1;
        reverse(bee(a));
        for(auto val:a)
        {
            if(val%2) break;
            temp--;
        }
        ans = max(ans, temp);
    }

    else ans = n;

    cout<<ans<<by;

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