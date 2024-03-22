#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b; cin>>a>>b;
    cout<<(a%b==0 or b%a==0 ? "Multiples" : "No Multiples");

    return 0;
}