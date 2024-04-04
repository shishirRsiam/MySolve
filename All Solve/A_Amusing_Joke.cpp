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


    str ok = "newyearandchristmasmen";
    str a, b, c; cin>>a>>b>>c;
    unordered_map<char,int>mp;
    for(char &ch:a) 
    {
        ch = tolower(ch);
        mp[ch]++;
    }
    for(char &ch:b) 
    {
        ch = tolower(ch);
        mp[ch]++;
    }
    for(char &ch:c) 
    {
        ch = tolower(ch);
        mp[ch]++;
    }

    bool flag = true;
    for(char ch:ok)
    {
        if(mp[ch]==0)
        {
            ok = false;
            break;
        }
        mp[ch]--;
    }

    flag ? py:pn;

    return 0;
}