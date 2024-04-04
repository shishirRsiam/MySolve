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

bool isbinary(str s)
{
    for(char c:s)
    {
        if(c != '0' and c != '1') 
        {
            // cout<<c<<"\n";
            return false;
        }
    }
    return true;
}

bool ok(str s)
{
    int num = stoi(s);
    int div = 2;
    vec v;
    while(num>1)
    {
        while(num%div==0)
        {
            v.pb(div);
            num /= div;
        }
        div++;
    }
    int n = v.size();
    for(int i=0;i<n;i++)
    {
        if(v[i] != 1 and v[i] != 2 and v[i] != 5 and !isbinary(to_string(v[i]))) 
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        str s; cin>>s;
        if(isbinary(s))
        {
            py;
            continue;
        }
        
        ok(s) ? py:pn;
        
    }

    return 0;
}