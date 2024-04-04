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

void dfs(vec mat[], int s, vector<bool>&vst)
{
    cout<<s<<" ";
    vst[s] = true;
    for(int c:mat[s])
    {
        if(!vst[c]) dfs(mat, c, vst);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    
    vec mat[n+1];
    int e = n;
    while(e--)
    {
        int a, b; cin>>a>>b;
        mat[a].pb(b);
        mat[b].pb(a);
    }

    vector<bool>vst(n+1);

    dfs(mat, n/2+1, vst);

    return 0;
}