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

/*Time   :   21:39:47
Date  	 :   13-08-2024
Author   :   shishirRsiam
File  	 :   C_Numeric_String_Template.cpp*/

bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n;
    cin >> n;
    vec a(n);
    loop(0, i, n) cin >> a[i];

    int q;
    cin >> q;

    while (q--)
    {
        str s;
        cin >> s;
        map<char, int> mp;
        map<int, char> mp2;
        int len = s.size();
        // cout << s.size() << " " << n << endl;
        if (len != n)
        {
            pn;
            continue;
        }
        bool valid = true;
        loop(0, i, n)
        {
            if (mp.find(s[i]) != mp.end())
            {
                if (mp[s[i]] != a[i])
                {
                    valid = false;
                    break;
                }
            }
            mp[s[i]] = a[i];
            if (mp2.find(a[i]) != mp2.end())
            {
                if (mp2[a[i]] != s[i])
                {
                    valid = false;
                    break;
                }
            }
            mp2[a[i]] = s[i];
        }
        valid ? pyn;
    }

    return true;
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