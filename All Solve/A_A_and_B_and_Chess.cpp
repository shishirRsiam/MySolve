#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"Black\n":cout<<"White\n"
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;

/*
the queen's weight is 9,
the rook's weight is 5,
the bishop's weight is 3,
the knight's weight is 3,
the pawn's weight is 1,
*/
int value(char c)
{
    if(c=='q') return 9;
    if(c=='r') return 5;
    if(c=='b') return 3;
    if(c=='n') return 3;
    if(c=='p') return 1;
    return 0;
}

void testcase()
{
    int n = 8;
    str s;
    loop(0,i,n)
    {
        loop(0,j,n)
        {
            char c; cin>>c;
            if(c=='.') continue;
            s += c;
        }
    }
    ll black = 0, white = 0;
    for(char c:s)
    {
        if(isupper(c)) white += value(tolower(c));
        else black += value(c);
    }
    if(black == white) cout<<"Draw";
    else black > white ? pyn;
}

int main()
{
    code by shishirRsiam

    // int t; cin>>t;
    // while(t--) 
        testcase();

    return 0;
}