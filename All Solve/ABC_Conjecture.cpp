#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"Yes\n"
#define pn cout<<"No\n"
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
        if(a==b)
        {
            py;
            continue;
        }


        int i = 0;
        bool flag = true;
        while(i<n)
        {
            if(a[i]=='c')
            {
                if(b[i]=='b')
                {
                    flag = false;
                    break;
                }
            }
            if(a[i]=='b')
            {
                if(b[i] != 'b')
                {
                    flag = false;
                    break;
                }
            }
            i++;
        }
        flag ? py:pn;
    }

    return 0;
}