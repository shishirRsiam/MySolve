#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"Anton\n"
#define pn cout<<"Danik\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int A = 0, D = 0;
    loop(0,i,n)
    {
        char c; cin>>c;
        if(c=='A') A++;
        else D++;
    }
    if(A==D) cout<<"Friendship";
    else A > D ? py:pn;
    return 0;
}