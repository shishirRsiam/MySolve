#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
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
        loop(0,i,n) cin>>a[i];

        multiset<ll>ml;
        // int i = 0, j = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                set<ll>st;
                for(int k=i;k<=j;k++)
                {
                    st.insert(a[k]);
                    // cout<<a[k]<<" ";
                }
                cout<<*st.rbegin()<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}