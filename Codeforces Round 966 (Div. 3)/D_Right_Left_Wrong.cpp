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

/*Time   :   22:06:25
Date  	 :   13-08-2024
Author   :   shishirRsiam
File  	 :   D_Right_Left_Wrong.cpp*/

void _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n;
    cin >> n;
    vec a(n);
    loop(0, i, n) cin >> a[i];

    bool flag = false;
    deque<int> dq_l, dq_r;
    loop(0, i, n)
    {
        char ch;
        cin >> ch;
        if (ch == 'L')
            flag = true;
        if (flag)
        {
            ch == 'L' ? dq_l.push_front(i) : dq_r.push_back(i);
        }
    }

    vector<ll> pref(n);
    pref[0] = a[0];
    loop(1, i, n)
        pref[i] = pref[i - 1] + a[i];
    ll ans = 0;
    while (!dq_l.empty() and !dq_r.empty())
    {
        int l = dq_l.back();
        int r = dq_r.back();
        if (l > r)
            break;
        // cout << l << " " << r << endl;
        ans += pref[r] - (l > 0 ? pref[l - 1] : 0);
        dq_l.pop_back();
        dq_r.pop_back();
    }
    // cout << "Done\n";
    cout << ans << endl;
}

int main()
{
    code by shishirRsiam;

    int testcase;
    cin >> testcase;
    while (testcase--)

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}