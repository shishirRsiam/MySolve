#include<bits/stdc++.h>
#define str string 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    str s = "codeforces";
    unordered_map<char, int>mp;
    for(char c:s) mp[c]++;
    while(t--)
    {
        char c; cin>>c;
        cout<<(mp[c] == 0 ? "No" : "Yes")<<"\n";
    }

    return 0;
}