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
        int n, k; cin>>n>>k;
        char s[n];
        set<int>st;
        loop(0,i,n)
        {
            cin>>s[i];
            if(s[i]=='B') st.insert(i);
        }
        int i = 0, ans = 0;
        while(i<n)
        {
            if(s[i]=='W') i++;
            else 
            {
                auto it = st.lower_bound(i);
                if(it != st.end() and *it <= i+k) ans++;
                i+=k;
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}