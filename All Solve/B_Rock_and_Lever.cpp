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

void testcase()
{
    ll n,k; cin>>n>>k;
    ll ans = 0;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    bool flag = true;
    while(k>0 and !a.empty())
    {
        if(a[0] + a.back() <= k)
        {
            if(a[0] == a.back())
            {
                if(flag)
                {

                }
            }
            ll mn = min(a.back(), a[0]);
            if(flag)
            {
                a[a.size()-1] -= mn;
                a.erase(a.begin());
                // if(mn%2==0) flag = !flag;
            }
            else 
            {
                a[0] -= mn;
                a.pop_back();
            }
            k -= (mn+mn);
        }
        else 
        {
            if(flag) 
            {
                a[0]--;
                if(a[0] == 0)
                {
                    ans++;
                    a.erase(a.begin());
                }
            }
            else 
            {
                int idx = a.size()-1;
                a[idx]--;
                if(a[idx]==0)
                {
                    ans++;
                    a.pop_back();
                }
            }
            flag = !flag;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) testcase();

    return 0;
}