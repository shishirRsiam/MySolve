#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"yes\n"
#define pn cout<<"no\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;


const int N = 105;
char mat[N][N];
int n,m;
bool isvalid(int i, int j)
{
    return (i<n and j<m and i>=0 and j>=0);
}

bool validx(int i, int j)
{
    return (mat[i][j]=='x');
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    loop(0,i,n)
    {
        loop(0,j,m) cin>>mat[i][j];
    }

    int x,y; cin>>x>>y;
    x--, y--;

    bool flag = true;
    vector<pair<int,int>>dir = 
    {{-1, 0}, {-1, -1}, {0, -1}, {1, -1}, {1,0},{1,1},{0,1},{-1,1}};
    
    loop(0,xx,8)
    {
        int i = dir[xx].first + x;
        int j = dir[xx].second + y;
        if(isvalid(i,j) and !validx(i, j))
        {
            flag = false;
            break;
        }
    }

    flag?py:pn;
    return 0;
}