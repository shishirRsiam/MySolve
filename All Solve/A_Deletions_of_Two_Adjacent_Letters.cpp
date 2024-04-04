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
        str s; char c; cin>>s>>c;

        vec idx;
        int n = s.size();
        for(int i=0;i<n;i++)
            if(s[i]==c) idx.pb(i);

        bool ok = false;
        for(auto x:idx) 
        {
            if(x%2==0)
            {
                ok = true;
                break;
            }
        }
        ok ? py:pn;
    }

    return 0;
}