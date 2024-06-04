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
    int a,b; cin>>a>>b;
    vec ans;
    loop(1,i,a+1) ans.pb(i);

    if(b == 0)
    {
        print(ans);
        cout<<"\n";
        return;
    }

    if((a/2) <= b) cout<<"-1\n";
    else 
    {  
        {
            int idx = (b*2)-1;
            // swap(ans[idx], ans[a-b-1]);
            ans.insert(ans.begin() + idx, ans[a-b-1]);
            ans.erase(ans.begin()+a-b);
        }
        print(ans);
        cout<<"\n";
    }
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}