#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;


bool firstcheck(vec &a, int n)
{
    if(a[0]%2==0)
    {
        for(int i=0;i<n;i+=2)
            if(a[i]%2==1) return false;
    }
    else 
    {
        for(int i=0;i<n;i+=2)
            if(a[i]%2==0) return false;
    }
    return true;
}
bool secondcheck(vec &a, int n)
{

    if(a[1]%2==0)
    {
        for(int i=1;i<n;i+=2)
            if(a[i]%2==1) return false;
    }
    else 
    {
        for(int i=1;i<n;i+=2)
            if(a[i]%2==0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vec a(n);
        loop(0,i,n)  cin>>a[i];
        bool flag = true;
        firstcheck(a, n) and secondcheck(a, n) ?
        cout<<"YES\n" : cout<<"NO\n";
    }

    return 0;
}