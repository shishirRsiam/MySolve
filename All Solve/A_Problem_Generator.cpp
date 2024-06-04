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
#define print(x) for(auto v:x) cout<<v;
using namespace std;


/*Time   :   20:38:40
Date  	 :   03-06-2024
Author   :   Md. Sishir Rahman Siam
File  	 :   A_Problem_Generator.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    str need = "ABCDEFG";
    int n, m; cin>>n>>m;
    str s; cin>>s;
    
    map<char,int>mp;
    for(char ch:s) mp[ch]++;

    long long ans = 0;
    for(auto ch:need)
    {
        if(mp[ch] < m) ans += (abs(mp[ch] - m));
        // cout<<ch<<" -> "<<mp[ch]<<by 
    }
    cout<<ans<<by 
    // cout<<by 

    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}