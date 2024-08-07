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

/*Time   :   21:26:29
Date  	 :   06-08-2024
Author   :   shishirRsiam
File  	 :   D_Slavic_s_Exam.cpp*/

str s, t;
bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    bool flag = false;
    cin >> s >> t;
    int i = 0, n = t.size();
    for (char &ch : s)
    {

        if (ch == t[i] or ch == '?')
        {
            ch = t[i++];
        }

        if (i == n)
        {
            flag = true;
            break;
        }
    }
    // cout << i << " " << n << endl;
    if (flag)
    {
        for (char &ch : s)
        {
            if (ch == '?')
            {
                ch = 'a';
            }
        }
    }
    return flag;
}

int main()
{
    code by shishirRsiam;

    int testcase;
    cin >> testcase;
    while (testcase--)

        if (_solve_koro_taratari__aro_solve_korte_hobe())
        {
            py;
            cout << s << endl;
        }
        else
            pn;

    return 0;
}