#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.rbegin(), x.rend()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    int n,m; cin>>n>>m;
    vec bat(n), bol(m);
    loop(0,i,n) cin>>bat[i];
    loop(0,i,m) cin>>bol[i];
    if(n+m < 11 or n<4 or m < 4)
    {
        cout<<"-1\n";
        return;
    }
    sort(bee(bat));
    sort(bee(bol));

    vec add;
    ll ans = 0, cnt = 0;
    loop(0,i,4) 
    {
        add.pb(bat[i]);
        ans += bat[i];
        // cout<<bat[i]<<" ";
        cnt++;
    }
    loop(0,i,4) 
    {
        add.pb(bol[i]);
        ans += bol[i];
        // cout<<bol[i]<<" ";
        cnt++;
    }


    int i = 4, j = 4;

    while(cnt<11 and i<n and j<m)
    {
        if(bat[i]>bol[j])
        {
            add.pb(bat[i]);
            // cout<<bat[i]<<" ";
            ans += bat[i++];
        }
        else 
        {
            add.pb(bol[j]);
            // cout<<bol[j]<<" ";
            ans += bol[j++];
        }
        cnt++;
    }
    while(cnt<11 and i<n)
    {
        add.pb(bat[i]);
        // cout<<bat[i]<<" ";
        ans += bat[i++];
        cnt++;
    }
    
    while(cnt<11 and j<m)
    {
        add.pb(bol[j]);
        // cout<<bol[j]<<" ";
        ans += bol[j++];
        cnt++;
    }

    // sort(bee(add));
    // cout<<i<<" "<<j<<" "<<cnt<<"\n";
    // print(add);

    cout<<ans<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}