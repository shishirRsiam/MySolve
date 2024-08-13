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

/*Time   :   20:41:49
Date  	 :   13-08-2024
Author   :   shishirRsiam
File  	 :   A_Primary_Task.cpp*/

bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    str s;
    cin >> s;
    if (s.size() <= 2)
        return false;
    if (s[0] != '1' or s[1] != '0')
        return 0;
    // char a = s.back();
    // char b = s[s.size() - 2];

    // int val = a - '0' + b - '0';

    s = s.substr(2);
    // cout << s << endl;
    if (s[0] == '0')
        return false;

    int val = stoi(s);

    return val > 1;
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