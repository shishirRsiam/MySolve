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



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str a, b; cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a<<b<<endl;
    swap(a[0], b[0]);
    cout<<a<<" "<<b<<endl;

    return 0;
}