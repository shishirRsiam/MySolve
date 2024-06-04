#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    int n,k,l; cin>>n>>k>>l;
    priority_queue<int>pq;
    loop(0,i,n)
    {
        int a, b; cin>>a>>b;
        if(b==l) pq.push(a);
    }

    if(pq.size() < k)
    {
        cout<<"-1\n";
        return;
    }

    ll sum = 0;
    while(k-- and !pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    if(sum) cout<<sum<<"\n";
    else cout<<"-1\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}