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

    str s; cin>>s;
    bool ok = true, four = false, seven = false;
    for(char c:s)
    {
        if(c == '4') four = true;
        else if(c == '7') seven = true;
        else 
        {
            ok = false;
            break;
        }
    }
    ok and four and seven ? py:pn;
    return 0;
}