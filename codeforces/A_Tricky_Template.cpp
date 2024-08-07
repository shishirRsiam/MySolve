#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


/*Time   :   23:01:04
Date  	 :   29-06-2024
Author   :   shishirRsiam
File  	 :   A_Tricky_Template.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n; str a,b,c; cin>>n>>a>>b>>c;

    for(int i=0;i<n;i++)
        if(a[i] != c[i] and b[i] != c[i])
            return true;
    return false;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe() ? pyn;

    return 0;
}