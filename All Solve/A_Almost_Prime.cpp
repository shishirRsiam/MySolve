#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
    int cnt = 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            while(n%i==0) n/= i;
            cnt++;
        }
    }
    if(n>1) cnt++;
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 0; cin>>n;
    for(int i=2;i<=n;i++)
        if(fun(i)==2) ans++;
    cout<<ans<<"\n";

    return 0;
}