#include<bits/stdc++.h>
#define str string 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    while(true)
    {
        n++;
        str s = to_string(n);
        set<int>st(s.begin(), s.end());
        if(st.size()==4)
        {
            cout<<n;
            break;
        }
    }

    return 0;
}