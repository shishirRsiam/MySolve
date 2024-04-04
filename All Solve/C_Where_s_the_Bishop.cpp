#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define yy cout << "YES\n"
#define nn cout << "NO\n"
#define PB(x) push_back(x)
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
        int n = 8;
        unordered_map<int, int>mp;
        bool flag = true;
        vector<vector<char>>mat(n, vector<char>(n));
        loop(0, i, n)
        {
            int k = 0;
            loop(0,j,n) 
            {
                cin>>mat[i][j];
                if(mat[i][j]=='#')
                {
                    mp[i]++;
                    k = j+1;
                }
            }
            if(flag and i != 0 and mp[i]==1 and mp[i-1]==2)
            {
                cout<<i+1<<" "<<k<<endl;
                flag = false;
            }
        }
    }

    return 0;
}