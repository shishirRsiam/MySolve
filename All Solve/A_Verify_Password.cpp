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
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


bool testcase()
{
    int n; str s; cin>>n>>s;
    str temp = s;
    sort(bee(s));
    return temp == s;
}

bool testcase()
{
    int n; cin>>n;
    str s; cin>>s;
    bool flag = true;
    str num, ch;
    for(char c:s)
    {
        if(isalpha(c))
        {
            if(flag) flag = false;
            ch += c;
        }
        else 
        {
            if(!flag) return false;
            num += c;
        }
    }
    str nums = num, chs = ch;
    sort(bee(nums));
    sort(bee(chs));
    return num == nums and chs == ch;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase() ? pyn;

    return 0;
}