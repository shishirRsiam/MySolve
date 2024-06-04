#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"Yes\n"
#define pn cout<<"No\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;



void testcase()
{
    str a,b; cin>>a>>b;
    bool flag = false;
    
    str tmp = a;
    reverse(bee(tmp));

    int x = stoi(tmp), y = stoi(a);

    if(x > y) a = tmp;
    tmp = b;
    reverse(bee(tmp));
    x = stoi(tmp), y = stoi(b);
    if(x < y) b = tmp;

    if(a>b) flag = true;

    flag ? py:pn;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}