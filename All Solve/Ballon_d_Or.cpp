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

void testcase()
{
    int n; cin>>n;
    ll product = 1;
    loop(0,i,n)
    {
        int a; cin>>a;
        if(a==2) product += product;
    }
    loop(1,i,5)
    {
        ll num = pow(i, 8);
        cout<<product<<" "<<num<<"\n";
    }
    cout<<pow(64, 8);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) testcase();

    return 0;
}