#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char c; cin>>c;
    cout << (islower(c) ? char(toupper(c)) : char(tolower(c)));
    return 0;
}