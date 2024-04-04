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

    int n,x; cin>>n>>x;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    loop(0,i,n)
    {
        loop(i+1,j,n)
        {
            if(a[i]+a[j]==x or a[i]-a[j]==x)
            {
                py;
                return 0;
            }
        }
    }
    pn;

    return 0;
}