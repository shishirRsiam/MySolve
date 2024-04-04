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
        ll sum = 0;
        int n; cin>>n;
        loop(0,i,n)
        {
            int x; cin>>x;
            sum += x;
        }
        ll x = sqrt(sum);
        x*x==sum?py:pn;
    }

    return 0;
}