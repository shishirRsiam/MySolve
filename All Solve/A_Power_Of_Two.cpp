#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

bool powOfTwo(ll n)
{
    return (n & n-1) == 0;
}

bool isPowerOfTwo(ll n) 
{
    if (n <= 0) return false; 

    while (n != 1) 
    {
        if (n % 2 != 0) return false;
        n /= 2;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;

    // isPowerOfTwo(n) ? py:pn;
    powOfTwo(n) ? py:pn;

    return 0;
}