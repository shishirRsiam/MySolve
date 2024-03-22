#include<bits/stdc++.h>
#define str string 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    str need = "yes";
    while(t--)
    {
        str s; cin>>s;
        for(char &c:s) c = tolower(c);
        cout<<(s==need?"YES\n":"NO\n");
    }

    return 0;
}