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

    int n,k; cin>>n>>k;
    int ans = -1;
    loop(n,i,k+1)
    {
        str s = to_string(i);
        set<char>st(bee(s));
        if(s.size() == st.size())
        {
            ans = i;
            break;
        }
    }   
    cout<<ans<<"\n";
    return 0;
}