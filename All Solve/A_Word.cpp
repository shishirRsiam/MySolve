#include<bits/stdc++.h>
#define str string
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str s; cin>>s;
    int up = 0, low = 0;
    str ups = s, lows = s;
    int n = s.size();
    loop(0,i,n)
    {
        char c = s[i];
        if(isupper(c)) up++;
        else low++;
        ups[i] = toupper(c);
        lows[i] = tolower(c);
    }
    cout<<(up > low ? ups:lows);

    return 0;
}