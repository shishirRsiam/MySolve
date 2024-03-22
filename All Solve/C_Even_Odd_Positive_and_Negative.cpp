#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n; 
    int even = 0, odd = 0, pos = 0, neg = 0;
    while(n--)
    {
        int a; cin>>a;
        if(a==0) {
            even++; continue;
        }
        a%2==0 ? even++ : odd++;
        a>0 ? pos++ : neg++;
    }

    cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<pos<<"\nNegative: "<<neg<<endl;

    return 0;
}