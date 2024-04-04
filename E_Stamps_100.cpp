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

    int t; cin>>t;
    while(t--)
    {
        int n ; cin>>n;
        str s; cin>>s;

        int idx = s.find('1');
        if(idx==-1 or idx==n-1 or idx==n-2)
        {
            cout<<s<<"\n";
            continue;
        }

        int i = 0;
        while(s[i]=='0') i++;
        i++;
        while(i<n) s[i++] = '0';
        cout<<s<<"\n";
    }

    return 0;
}