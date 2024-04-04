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

bool isvoule(char &c)
{
    return (c=='a' or c=='e');
}
bool isvalid(int i, int n)
{
    return i < n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        str s; cin>>s;
        int i = 0;
        while(i<n)
        {
            if(isvalid(i+4, n) and isvoule(s[i+4]))
            {
                cout<<s.substr(i,3);
                i+=3;
            }
            else if(isvalid(i+3, n) and isvoule(s[i+3]))
            {
                cout<<s.substr(i,2);
                i+=2;
            }
            else 
            {
                cout<<s.substr(i);
                i+=n;
            }
            if(i < n) cout<<".";
        }
        cout<<"\n";
    }

    return 0;
}