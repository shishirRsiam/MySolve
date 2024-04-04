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
        str s; cin>>s;
        str ans;
        int i = 0, n = s.size();
        while(i<n)
        {
            str tmp = s.substr(i,2);
            ans += tmp[0];
            i+=2;
        }
        ans += s.back();
        cout<<ans<<"\n";
    }

    return 0;
}