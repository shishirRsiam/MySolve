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

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        bool ok = true;
        for(int i=0;i<n;i++)
        {
            vector<str>v;
            for(int j=0;j<n;j++)
            {
                if(ok) v.push_back("##");
                else v.push_back("..");
                ok = !ok;
            }
            
            if(n%2==0) ok = !ok;
            for(auto c:v) cout<<c;
            cout<<endl;
            for(auto c:v) cout<<c;
            cout<<endl;
        }
    }


    return 0;
}