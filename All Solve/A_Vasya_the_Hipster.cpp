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

    int a,b; cin>>a>>b;
    int mn = min(a,b);
    int mx = max(a,b);
    cout<<mn<<" ";
    mx -= mn;
    mn = 0;
    while(mx>1) 
    {
        mn++;
        mx -= 2;
    }
    cout<<mn<<"\n";

    return 0;
}