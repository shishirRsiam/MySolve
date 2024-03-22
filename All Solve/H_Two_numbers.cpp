#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b; cin>>a>>b;

    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<endl;

    return 0;
}