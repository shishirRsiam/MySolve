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

    vec ok;
    int x = 1;
    int cnt = 0;
    while(cnt != 1000)
    {
        str s = to_string(x);
        if(x%3 != 0 and s.back() != '3') 
        {
            ok.pb(x);
            cnt++;
        }
        x++;
    }

    int t; cin>>t;
    while(t--)
    {
        int idx; cin>>idx;
        idx--;
        cout<<ok[idx]<<"\n";
    }

    return 0;
}