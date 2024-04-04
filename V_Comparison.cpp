#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"Right\n"
#define pn cout<<"Wrong\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

bool fun()
{
    int a, c; str b; 
    cin>>a>>b>>c;
    if(b==">") return a > c;
    if(b=="<") return a < c;
    if(b=="=") return a == c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    fun() ? py:pn;

    return 0;
}