#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
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
        int n,k; cin>>n>>k;
        priority_queue<ll>pq;
        ll sum = 0;
        ll mn = INT_MAX;
        set<ll>st;
        loop(0,i,n)
        {
            ll val; cin>>val;
            pq.push(val);
            sum += val;
            mn = min(mn, val);
            st.insert(val);
        }


        while(k>0)
        {
            cout<<k<<" ";
            ll product = mn*n;
            auto nextgreater = st.upper_bound(mn);
            if(mn+1<=*nextgreater)
            {
                k--;
            }
            else if(mn+1000<=*nextgreater)
            {
                k -= 1000;
            }
            else if(mn+10000<=*nextgreater)
            {
                k -= 10000;
            }
            else if(mn+100000<=*nextgreater)
            {
                k -= 100000;
            }
            else if(nextgreater == st.end())
            {
                mn++;
                k--;
            }
            else break;
        }
        
        // cout<<*nextgreater<<"\n";

        cout<<mn<<"\n";







        // sum += k;
        // while(!pq.empty())
        // {
        //     ll product = pq.top()*n;
        //     if(product<=sum)
        //     {
        //         cout<<pq.top()<<"\n";
        //         break;
        //     }
        //     pq.pop();
        // }
        // int i = 1;
        // while(i*n<=sum)
        // {
        //     i++;
        //     if(i*n>sum) break;
        // }
        // cout<<i-1<<"\n";
    }

    return 0;
}