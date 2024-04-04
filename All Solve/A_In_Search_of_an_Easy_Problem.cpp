#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"EASY\n"
#define pn cout<<"HARD\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    bool ok = true;
    while(t--)
    {
        int x; cin>>x;
        if(x==1) ok = false;
    }
    ok ? py:pn;
    return 0;
}