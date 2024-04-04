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
        vec a(n);
        ll mn = INT_MAX;
        loop(0,i,n) 
        {
            cin>>a[i];
            mn = min(mn, a[i]);
        }

        ll product = 1;
        bool flag = true;
        loop(0,i,n)
        {
            if(flag and a[i]==mn)
            {
                a[i]++;
                flag = !flag;
            }
            product *= a[i];
        }
        cout<<product<<"\n";
    }

    return 0;
}