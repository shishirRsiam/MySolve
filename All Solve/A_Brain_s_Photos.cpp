#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"#Color\n"
#define pn cout<<"#Black&White\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    bool ok = false;
    loop(0,i,n)
    {
        loop(0,j,m)
        {
            char c; cin>>c;
            if(c=='C' or c=='M' or c=='Y')
            {
                ok = true;
            }
        }
    }
    ok?py:pn;

    return 0;
}