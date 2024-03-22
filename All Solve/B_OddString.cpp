#include<bits/stdc++.h>
#define str string 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str s; cin>>s;
    int i = 0, n = s.size();
    while(i<n)
    {
        cout<<s[i];
        i+=2;
    }

    return 0;
}