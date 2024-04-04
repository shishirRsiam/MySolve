#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
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
        str s; cin>>s;
        int hour = stoi(s.substr(0,2));
        int minute = stoi(s.substr(3,2));
        int total_minute = (hour*60) + minute;
        // cout<<hour<<" "<<minute<<" "<<total_minute<<"\n";
        if(total_minute<720)
        {
            if(hour == 0)
            {
                s[0] = '1';
                s[1] = '2';
            }
            cout<<s<<" AM\n";
        }
        else 
        {
            if(hour != 12)
            {
                str x = to_string(hour-12);
                if(x.size()==1)
                {
                    s[0] = '0';
                    s[1] = x[0];
                }
                else 
                {
                    s[0] = x[0];
                    s[1] = x[1];
                }
            }
            cout<<s<<" PM\n";
        }
    }

    return 0;
}