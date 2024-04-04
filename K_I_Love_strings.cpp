#include<bits/stdc++.h>
#define str string 
#define ll long long 
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
        str a,b; cin>>a>>b;
        str ans;
        int n = a.size(), m = b.size();
        int i = 0;
        while(i<n and i<m)
        {
            ans += a[i];
            ans += b[i];
            i++;
        }
        while(i<n) ans += a[i++];
        while(i<m) ans += b[i++];
        cout<<ans<<"\n";
    }

    return 0;
}