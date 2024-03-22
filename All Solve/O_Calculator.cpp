#include<bits/stdc++.h>
#define str string 
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str s; cin>>s;

    int fnd = s.find('+');
    if(fnd != -1) 
    {
        // cout<<s.substr(0,fnd)<<endl;
        // cout<<s.substr(fnd+1,s.size())<<endl;
        cout<<stoi(s.substr(0,fnd)) + stoi(s.substr(fnd+1,s.size()));
        return 0;
    }
    fnd = s.find('-');
    if(fnd != -1) 
    {
        // cout<<s.substr(0,fnd)<<endl;
        // cout<<s.substr(fnd+1,s.size())<<endl;
        cout<<stoi(s.substr(0,fnd)) - stoi(s.substr(fnd+1,s.size()));
        return 0;
    }
    fnd = s.find('*');
    if(fnd != -1) 
    {
        // cout<<s.substr(0,fnd)<<endl;
        // cout<<s.substr(fnd+1,s.size())<<endl;
        cout<<stoi(s.substr(0,fnd)) * stoi(s.substr(fnd+1,s.size()));
        return 0;
    }

    fnd = s.find('/');
    if(fnd != -1) 
    {
        // cout<<s.substr(0,fnd)<<endl;
        // cout<<s.substr(fnd+1,s.size())<<endl;
        cout<<stoi(s.substr(0,fnd)) / stoi(s.substr(fnd+1,s.size()));
        return 0;
    }
}