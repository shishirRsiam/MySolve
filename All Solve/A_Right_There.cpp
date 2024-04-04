#include <bits/stdc++.h>
#define str string
#define ll long long
#define vec vector<ll>
#define PB(x) push_back(x)
#define loop(s, i, n) for (int i = s; i < n; i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}