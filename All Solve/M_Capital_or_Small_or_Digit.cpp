#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char c; cin>>c;

    if(isdigit(c)) cout<<"IS DIGIT";
    else 
    {
        if(isupper(c)) cout<<"ALPHA\nIS CAPITAL";
        else cout<<"ALPHA\nIS SMALL";
    }

    return 0;
}