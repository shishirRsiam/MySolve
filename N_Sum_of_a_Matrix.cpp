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

    int n,m; cin>>n>>m;
    vector<vec>arr(n, vec(m));
    loop(0,i,n)
    {
        loop(0,j,m)
            cin>>arr[i][j];
    }
    
    loop(0,i,n)
    {
        loop(0,j,m)
        {
            int x; cin>>x;
            arr[i][j] += x;
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}