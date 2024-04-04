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

    int n, k; cin>>n>>k;
    priority_queue<int>pq;
    while(n--)
    {
        int a; cin>>a;
        if(a>0) pq.push(a);
    }
    ll sum = 0;
    while(!pq.empty() and k--)
    {
        sum += pq.top();
        pq.pop();
    }
    cout<<sum<<"\n";

    return 0;
}