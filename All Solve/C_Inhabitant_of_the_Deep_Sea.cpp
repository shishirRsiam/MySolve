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
        ll mn = min(a[0], a.back());
        if(a[0]== mn and a.back()==mn)
        {
            if(k>=mn) ans++;
            k -= mn;
            a.pop_back();
        }
        else if(k >= a[0]+a.back())
        {
            ans += 2;
            k -= a[0]+a.back();
            a.pop_back();
            a.erase(a.begin());
        }
        else if(k >= mn+mn)
        {
            if(a[0]==mn) 
            {
                a.erase(a.begin());
                a[a.size()-1] -= mn;
            }
            else 
            {
                a.pop_back();
                a[0] -= mn;
            }
            k -= (mn+mn);
        }
        else break;
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