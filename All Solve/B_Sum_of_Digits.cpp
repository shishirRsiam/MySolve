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



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str s; cin>>s;

    int n = s.size(), cnt = 0;
    while(n>1)
    {
        cnt++;
        int sum = 0;
        loop(0,i,n) sum += (s[i]-'0');
        s = to_string(sum);
        n = s.size();
    }
    cout<<cnt<<"\n";
    return 0;
}