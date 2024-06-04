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




void testcase()
{
    int n; cin>>n;
    str s;
    map<char,int>mp;
    bool A = false, B = A, C = A;
    
    loop(0,i,n)
    {
        char ch; cin>>ch;
        if(ch == 'a') A = true;
        else if(A and ch == 'b') B = true;
        else if(A and B and ch == 'c') C = true;

        if(ch == 'a' and A) s += ch, mp[ch]++;
        else if(ch == 'b' and B) s += ch, mp[ch]++;
        else if(ch == 'c' and C) s += ch, mp[ch]++;
    }

    cout<<min({mp['a'], mp['b'] , mp['c']})<<by;

    // cout<<s<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}