#include<bits/stdc++.h>
#define ll long long 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int point(int i, int j)
{
    int n = 10;
    if(i==0 or j==0 or i==n-1 or j==n-1) return 1;
    if(i==1 or j==1 or i==n-2 or j==n-2) return 2;
    if(i==2 or j==2 or i==n-3 or j==n-3) return 3;
    if(i==3 or j==3 or i==n-4 or j==n-4) return 4;
    return 5;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll ans = 0;
        int n = 10;
        loop(0,i,n)
        {
            loop(0,j,n)
            {
                char c; cin>>c;
                if(c=='X')
                {
                    ans += point(i,j);
                }
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}