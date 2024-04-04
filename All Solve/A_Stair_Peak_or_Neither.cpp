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

void print(bool ok)
{
    ok? cout<<"##\n##" : cout<<"..\n..";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        n += n;
        loop(0,i,n)
        {
            loop(0,j,n)
            {
                loop(0,x,i+2)
                {
                    loop(0,y,j+2)
                    {
                        
                    }
                }
            }
            cout<<"\n";
        }
    }


    return 0;
}