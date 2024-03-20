#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll days; cin>>days;

    int year = 0, month = 0;

    while(true)
    {
        if(days>=365) year++, days -= 365;
        else if(days>=30) month++, days -= 30;
        else break;
    }
    cout<<year<<" years\n"<<month<<" months\n"<<days<<" days";
    return 0;
}