#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
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
        vec a(n);
        ll sum = 0;
        loop(0,i,n) cin>>a[i], sum += (a[i]*2);
        

        int idx = 0;
        bool flag = true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]*2>=a[i+1])
            {
                idx = i+1;
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<a[idx]*2<<endl;
            continue;
        }

        ll ans = a[idx]*2;
        for(int i=0;i<idx;i++) 
        {
            ans += a[i];
        }
        cout<<ans<<endl;
        // cout<<sum<<" "<<ans<<endl;
    }

    return 0;
}