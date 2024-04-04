#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b; cin>>a>>b;

    vector<str>v;
    for(int i=a;i<=b;i++)
    {
        str s = to_string(i);
        bool flag = true;
        for(int x=0;x<s.size();x++)
        {
            if(s[x] == '4' or s[x] == '7') continue;
            else 
            {
                flag = false;
                break;
            }
        }
        if(flag) v.PB(s);
    }
    if(v.size()>0) for(str a:v) cout<<a<<" "; 
    else cout<<"-1";

    return 0;
}