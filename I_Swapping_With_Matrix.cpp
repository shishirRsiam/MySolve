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

    int n, a, b; cin>>n>>a>>b;
    vector<vector<ll>>v(n,vector<ll>(n));
    loop(0,i,n)
    {
        loop(0,j,n)
            cin>>v[i][j];
    }

    loop(0,i,n)
        swap(v[i][a-1], v[i][b-1]);
    swap(v[a-1], v[b-1]);

    loop(0,i,n)
    {
        loop(0,j,n)
            cout<<v[i][j]<<" ";
        cout<<"\n";
    }

    return 0;
}