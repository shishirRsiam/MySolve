#include<bits/stdc++.h>
#define str string
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int notok = 0;
        str s; cin>>s;
        if(s[0] != 'a') notok++;
        if(s[1] != 'b') notok++;
        if(s[2] != 'c') notok++;
        // cout<<notok<<"\n";
        notok==3?pn:py;
    }

    return 0;
}