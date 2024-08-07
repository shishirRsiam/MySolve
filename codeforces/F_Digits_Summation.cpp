#include<bits/stdc++.h>
#define str string 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str a, b; cin>>a>>b;
    cout<<a.back()-'0' + b.back()-'0'<<"\n";

    return 0;
}