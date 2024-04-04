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

    str target = "codeforces";
    int n = 10;
    int t; cin>>t;
    while(t--)
    {
        str s; cin>>s;
        int cnt = 0;
        loop(0,i,n)
        {
            if(s[i] != target[i]) cnt++;
        }
        cout<<cnt<<"\n";
    }

    return 0;
}