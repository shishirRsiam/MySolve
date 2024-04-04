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

    int n; str s; cin>>n>>s;


    str ans;
    char cur = s[0];

    int i = 0, noww = 1;
    while(i<n)
    {
        ans += cur;
        while(noww--) i++;
        cur = s[i++];
        noww = ans.size();
    }
    cout<<ans<<"\n";
    return 0;
}