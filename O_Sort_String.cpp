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

    int n; cin>>n;
    str s; cin>>s;
    loop(0,i,n-1)
    {
        loop(i+1,j,n)
        {
            if(s[i]>s[j])
            {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    cout<<s;
    return 0;
}