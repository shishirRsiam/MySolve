#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<"\n";
using namespace std;




class cmp
{
    public:
    bool operator()(str &a, str &b)
    {
        if(a.size() == b.size()) return a < b;
        return a.size() < b.size();
    }
};

int main()
{
    code by shishirRsiam

    int n; cin>>n;
    vector<str>s(n);
    loop(0,i,n) cin>>s[i];

    sort(bee(s), cmp());

    // print(s);
    bool ok = true;
    map<int,bool>mp;
    for(int i=0;i<n-1;i++)
    {
        str one = s[i], two;
        bool flag = false;
        for(int j=i+1;j<n;j++)
        {
            two = s[j];
            if(!mp[j])
            {
                if(two.find(one) != -1)
                {
                    mp[j] = true;
                    flag = true;
                    break;
                }
            }
        }
        if(!flag) 
        {
            ok = false;
            break;
        }
    }

    if(ok)
    {
        py;
        print(s);
    }
    else pn;

    return 0;
}