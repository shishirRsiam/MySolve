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

    int tl; cin>>tl;
    while(tl--)
    {
        int n; cin>>n;
        int i = 1;
        cout<<i<<" ";
        n -= i;
        i++;
        cout<<i<<" ";
        n -= i;
        cout<<n<<endl;
    }

    return 0;
}