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
        int n; cin>>n;
        str a, b; cin>>a>>b;
        int aa = 0, bb = 0;
        loop(0,i,n)
        {
            if(a[i] == b[i]) aa++, bb++;
            else if(a[i]=='R')
            {
                if(b[i]=='S') aa++;
                else bb++;
            }
            else if(a[i]=='S')
            {
                if(b[i]=='R') bb++;
                else aa++;
            }
            else if(a[i]=='P')
            {
                if(b[i]=='R') aa++;
                else bb++;
            }

            else if(b[i]=='R')
            {
                if(a[i]=='S') bb++;
                else aa++;
            }
            else if(b[i]=='S')
            {
                if(a[i]=='P') bb++;
                else aa++;
            }
            else if(b[i]=='P')
            {
                if(a[i]=='R') bb++;
                else aa++;
            }
        }
        if(aa==bb) cout<<"1\n";
        else aa>bb ? cout<<"0\n" : cout<<bb-aa<<"\n";
    }

    return 0;
}