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
        int n; cin>>n;

        if(n==2)
        {
            py;
            continue;
        }

        bool ok = true;
        loop(2,i,sqrt(n)+1)
        {
            if(n%i==0)
            {
                ok = 0;
                break;
            }
        }
        ok?py:pn;
    }

    return 0;
}