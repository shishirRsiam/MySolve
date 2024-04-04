#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    vector<str>num = {"1","11","111","1111"};
    while(t--)
    {
        int n; cin>>n;
        vector<str>store;
        ll haha = 0, multiply = 1;
        while(haha != n)
        {
            for(int i=0;i<4;i++)
            {
                haha = stoll(num[i])*multiply;
                store.pb(to_string(haha));
                // cout<<haha<<" ";
                if(haha==n) break;
            }
            multiply++;
        }


        int ans = 0;
        for(auto x:store)
            ans += x.size();
        cout<<ans<<"\n";
    }

    return 0;
}