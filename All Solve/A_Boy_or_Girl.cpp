#include<bits/stdc++.h>
#define str string
#define py cout<<"CHAT WITH HER!\n"
#define pn cout<<"IGNORE HIM!\n"
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str s; cin>>s;
    set<char>st;
    for(char c:s) st.insert(c);

    st.size()%2==0?py:pn;

    return 0;
}