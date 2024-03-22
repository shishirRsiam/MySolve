#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll mllents(ll a, ll b, ll c)
{
    ll tents_for_introverts = a;

    ll tents_for_extroverts = round(b + 2.0) / 3;

    ll remaining_extroverts = max(0LL,tents_for_extroverts * 3 - b);

    if(remaining_extroverts > c) return -1;

    ll total_tents = tents_for_introverts + tents_for_extroverts;

    return total_tents += round(c-remaining_extroverts+2) / 3;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    ll t; cin >> t;
    while (t--)
    {
        ll a, b, c; cin >> a >> b >> c;
        cout << mllents(a, b, c) << endl;
    }

    return 0;
}
