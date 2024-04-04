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

    vec primes = 
    {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
    31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
    73, 79, 83, 89, 97};
    unordered_map<int,int>prime;
    for(int v:primes) prime[v]++;


    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    sort(bee(a));
    reverse(bee(a));

    cout<<"The maximum number : "<<a[0]<<"\n";
    cout<<"The minimum number : "<<a[n-1]<<"\n";

    int primee = 0;
    int palindrome = 0;
    for(int v:a)
    {
        if(prime[v]>0) primee++;
        str s = to_string(v);
        str t = s;
        reverse(bee(t));
        if(s==t) palindrome++;
    }
    cout<<"The number of prime numbers : "<<primee<<"\n";
    cout<<"The number of palindrome numbers : "<<palindrome<<"\n";
    
    int div = 0;
    int mx = 0;
    for(int v:a)
    {
        int cur = 0;
        loop(1,i,sqrt(v)+1)
        {
            if(v%i==0) cur++;
        }
        if(cur>=mx)
        {
            mx = cur;
            div = v;
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<div<<"\n";
    return 0;
}