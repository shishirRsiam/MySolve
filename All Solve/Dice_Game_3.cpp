#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
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
        if(n%2==0)
        {
            ll ans = 13;
            n /= 2;
            cout<<ans*n<<endl;
        }
        else 
        {
            ll ans = 13;
            n /= 2;
            cout<<ans*n+6<<endl;
        }
    }

    return 0;
}