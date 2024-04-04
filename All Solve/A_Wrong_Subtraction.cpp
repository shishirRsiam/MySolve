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

    ll a, k; cin>>a>>k;
    while(k--)
    {
        str s = to_string(a);
        if(s.back()=='0')
        {
            s.pop_back();
            a = stoi(s);
        }
        else a--;
    }
    cout<<a<<"\n";
    return 0;
}