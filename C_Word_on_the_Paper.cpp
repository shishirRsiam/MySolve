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

void tasecase()
{
    int n = 8;
    str ans;
    loop(0,i,n)
    {
        loop(0,j,n)
        {
            char c; cin>>c;
            if(islower(c)) ans += c;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) tasecase();

    return 0;
}