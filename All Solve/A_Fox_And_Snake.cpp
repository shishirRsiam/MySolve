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

    int n,m; cin>>n>>m;
    str hash, dot;
    loop(0,i,m) hash += "#";
    loop(1,i,m) dot += ".";

    vector<str>ans;
    bool ok = true;
    loop(0,i,n)
    {
        if(i%2==0) ans.pb(hash);
        else 
        {
            str tmp = dot;
            if(ok) tmp += "#";
            else tmp.insert(tmp.begin(), '#');
            ans.pb(tmp);
            ok = !ok;
        }
    }
    for(auto x:ans) cout<<x<<"\n";
    return 0;
}