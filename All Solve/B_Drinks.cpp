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
    double sum = 0.00;
    loop(0,i,n)
    {
        int a; cin>>a;
        sum += a;
    }
    double x = sum/n;
    cout<<fixed<<setprecision(12)<<x<<"\n";
    return 0;
}