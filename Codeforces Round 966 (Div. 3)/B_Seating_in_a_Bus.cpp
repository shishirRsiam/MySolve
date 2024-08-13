#include <bits/stdc++.h>
#define str string
#define ll long long
#define by "\n";
#define pi pair<ll, ll>
#define vec vector<ll>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout << "YES\n" : cout << "NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s, i, n) for (int i = s; i < n; i++)
#define print(x)     \
    for (auto v : x) \
        cout << v << " ";
using namespace std;

/*Time   :   21:21:56
Date  	 :   13-08-2024
Author   :   shishirRsiam
File  	 :   B_Seating_in_a_Bus.cpp*/

bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n;
    cin >> n;
    vec aa(n);
    set<int> st;
    loop(0, i, n) cin >> aa[i];
    int i = 0;
    for (auto a : aa)
    {
        if (i == 0)
        {
            i++;
            st.insert(a);
            continue;
        }

        if (st.count(a - 1) == 0 && st.count(a + 1) == 0)
            return false;
        st.insert(a);
    }

    return true;
}

int main()
{
    code by shishirRsiam;

    int testcase;
    cin >> testcase;
    while (testcase--)

        _solve_koro_taratari__aro_solve_korte_hobe() ? pyn;

    return 0;
}
