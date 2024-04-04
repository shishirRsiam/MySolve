#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"Good\n"
#define pn cout<<"Bad\n"
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
        str s; cin>>s;
        int n = s.size();
        bool ok = false;
        str target1 = "010";
        str target2 = "101";
        loop(0, i, n-2)
        {
            str t = s.substr(i, 3);
            if(t==target1 or t==target2)
            {
                ok = true;
                break;
            }
        }
        ok?py:pn;
    }

    return 0;
}