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

    int n; cin>>n;

    int a[n][n];
    int x = 0, y = 0;
    loop(0,i,n)
    {
        loop(0,j,n)
        {
            cin>>a[i][j];
            if(i==j) x += a[i][j];
            if(i+j==n-1) y += a[i][j];
        }
    }
    cout<<abs(x-y)<<"\n";
    return 0;
}