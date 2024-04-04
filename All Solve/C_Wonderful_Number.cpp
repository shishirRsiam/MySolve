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

bool palindrome(int n)
{
    vec binary;
    while(n>0)
    {
        int num = n%2;
        n /= 2;
        binary.pb(num);
    }
    vec tmp = binary;
    reverse(bee(tmp));
    return binary == tmp;
}

void ok()
{
    ll n; cin>>n;
    palindrome(n) ? py:pn;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ok();

    return 0;
}