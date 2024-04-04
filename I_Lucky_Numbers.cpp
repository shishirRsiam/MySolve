#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int k = 1, s = n-1;
    for(int i=1;i<=n*2;i++)
    {
        for(int j=0;j<s;j++) cout<<" ";
        for(int j=0;j<k;j++) cout<<"*";
        cout<<"\n";
        if(i<=n)
        {
            k += 2;
            s--;
        }
        else if(i>=n-2)
        {
            k -= 2;
            s++;
        }
    }

    return 0;
}