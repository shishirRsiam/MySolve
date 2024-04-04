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
    while(t--)
    {
        int n; cin>>n;
        int nn = sqrt(n);
        int cnt = 0;
        set<ll>st;
        loop(1,i,n+1)
        {
            ll x2 = i*i;
            ll x3 = i*i*i;
            if(x2<=n) st.insert(x2);
            if(x3<=n) st.insert(x3);
            // if(x2>n) break;
            // cout<<x2<<" "<<x3<<"\n";
        }
        cout<<st.size()<<"\n";
    }

    return 0;
}