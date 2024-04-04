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
    stack<int>st;
    int ans = 0;
    loop(0,i,n)
    {
        int a; cin>>a;
        if(a==-1)
        {
            if(st.empty()) ans++;
            else st.pop();
        }
        else loop(0,j,a) st.push(a);
    }
    cout<<ans<<"\n";
    return 0;
}