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

    str s; cin>>s;
    if(s.size()==1) 
    {
        cout<<0;
        return 0;
    }

    reverse(s.begin(), s.end());

    int i = 0, remove = 0;
    while(true)
    {
        if(s[i]=='0') remove++;
        else break;
        i++;
    }
    int ans = s.size()-remove;
    cout<<(ans==0?"1":to_string(ans));
    return 0;
}