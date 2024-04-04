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

    int n; cin>>n;
    vector<vec>mat(n, vec(n));
    loop(0,i,n)
    {
        mat[i][0] = 1;
        mat[0][i] = 1;
    }

    loop(1,i,n)
    {
        loop(1,j,n)
        {
            mat[i][j] = mat[i-1][j] + mat[i][j-1];
        }
    }
    cout<<mat[n-1][n-1]<<"\n";

    return 0;
}