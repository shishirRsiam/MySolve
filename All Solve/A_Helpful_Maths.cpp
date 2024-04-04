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

    str s; cin>>s;
    sort(bee(s));
    s.erase(remove(bee(s), '+'), s.end());
    // cout<<s<<"\n";

    str ans;
    int n = s.size();
    for(int i=0;i<n;i++)
    {
        ans += s[i];
        if(i<n-1) ans += "+";
    }
    cout<<ans<<"\n";
    return 0;
}