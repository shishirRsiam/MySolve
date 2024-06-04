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
    int n,k; str s; cin>>n>>k>>s;
    int ans = 1;
    int cnt = count(bee(s), 'B');
    if(cnt == k)
    {
        cout<<"0\n";
        return false;
    }
    cout<<ans<<"\n";
    if(k==0)
    {
        cout<<n<<" A"<<by;
        return false;
    }


    int need = abs(cnt - k);
    int ok = 0;
    if(cnt < k)
    {
        for(int i=1;i<=n;i++)
        {
            char ch = s[i-1];
            if(ch=='A') ok++;
            if(ok == need) 
            {
                cout<<i<<" B\n";
                return false;
            }
        }
    }
    else 
    {
        for(int i=1;i<=n;i++)
        {
            char ch = s[i-1];
            if(ch=='B') ok++;
            if(ok == need) 
            {
                cout<<i<<" A\n";
                return false;
            }
        }
    }

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