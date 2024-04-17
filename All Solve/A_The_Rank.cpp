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

class cmp
{
    public:
    bool operator()(pi &a, pi &b)
    {
        if(a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
};

ll testcase()
{
    int n = 4;
    ll sum = 0;
    loop(0,i,n)
    {
        int c; cin>>c;
        sum += c;    
    } 
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    priority_queue<pi, vector<pi>, cmp>pq;
    loop(1,i,t+1)
    {
        ll sum = testcase();
        pq.push({sum, i});
    }
    int cnt = 1;
    while(!pq.empty())
    {
        if(pq.top().second == 1) 
        {
            cout<<cnt<<"\n";
            break;
        }
        cnt++;
        // cout<<pq.top().second<<" "<<pq.top().first<<"\n";
        pq.pop();
    }
    return 0;
}