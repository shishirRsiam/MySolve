#include<bits/stdc++.h>
#define str string 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str s; cin>>s;
    str tmp = s;
    reverse(tmp.begin(), tmp.end());
    if(tmp==s) cout<<s<<"\nYES";
    else cout<<stoi(tmp)<<"\nNO";

    return 0;
}