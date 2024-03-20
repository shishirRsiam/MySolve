#include<bits/stdc++.h>
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        unordered_map<int, int>mp;
        int ans = -1;
        loop(0,i,n)
        {
            int a; cin>>a;
            mp[a]++;
            if(mp[a]==3) ans = a;
        }
        cout<<ans<<endl;
    }

    return 0;
}