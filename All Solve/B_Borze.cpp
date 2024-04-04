#include<bits/stdc++.h>
#define str string
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str s; cin>>s;
    str ans;
    int i = 0, n = s.size();
    while(i<n)
    {
        if(s[i]=='.') ans += "0", i++;
        else if(s[i]=='-' and s[i+1]=='.') ans += "1", i+=2;
        else ans += "2", i+=2;
    }
    cout<<ans<<"\n";
    return 0;
}