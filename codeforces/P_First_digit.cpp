#include<bits/stdc++.h>
#define str string 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str s; cin>>s;

    int digit = s[0]-'0';

    cout<<(digit%2==0 ? "EVEN":"ODD")<<"\n";

    return 0;
}