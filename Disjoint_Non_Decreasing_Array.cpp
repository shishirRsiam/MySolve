#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"Yes\n"
#define pn cout<<"No\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

bool sorted(vec &a, int n)
{
    loop(0,i,n-1)
    {
        if(a[i]>a[i+1]) return false;
    }
    return true;
}

void fun()
{
    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];


    vec idx;
    loop(1,i,n)
    {
        if(a[i]<a[i-1]) idx.pb(i);
    }

    if(sorted(a, n) or idx.size() == 1)
    {
        py;
        return;
    }


    if(idx.size() > 2)
    {
        pn; 
        return;
    }

    int huh = idx.back()-1;
    if(huh==idx[0]) huh++;

    int idx1 = idx[0], idx2 = idx[1];
    ll replace = a[huh];
    loop(idx1-2, i, idx2+1) 
    {
        if(i<n and i>= 0)
        {
            replace = max(replace, a[i]);
        }
    }
        
    a[idx1] = replace, a[idx2] = replace;

    sorted(a, n) ? py : pn;

    // for(int v:a) cout<<v<<" ";
    // cout<<"\n\n";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        fun();
    }

    return 0;
}