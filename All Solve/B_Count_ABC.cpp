#include<bits/stdc++.h>
#define str string 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    str s; cin>>s;
    int ans = 0;
    while(s.find("ABC") != -1) 
    {
        s.erase(s.find("ABC"), 3);
        ans++;
    }

    cout<<ans<<"\n";

    return 0;
}





#include<bits/stdc++.h>
#define str string 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i = 0, ans = 0;; cin>>n;
    str s; cin>>s;
    while(i<n)
    {
        if(s[i]=='A' and s[i+1]=='B' and s[i+2]=='C') ans++, i+=3;
        else i++;
    }
    cout<<ans<<"\n";
    return 0;
}

// https://atcoder.jp/contests/abc150/tasks/abc150_b