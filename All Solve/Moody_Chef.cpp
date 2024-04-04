#include <bits/stdc++.h>
#define str string
#define ll long long
#define pi pair<ll, ll>
#define vec vector<ll>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(start, i, end) for (int i = start; i < end; i++)
using namespace std;

void calculateHappiness()
{
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vec arr(n);
        loop(0, i, n)
                cin >>
            arr[i];
        sort(arr.begin(), arr.end());
        int current = 0;
        int happiness = 0;
        for (int v : arr)
        {
            if (v != current)
            {
                if (v > current)
                {
                    happiness += (v - current);
                }
                else
                {
                    happiness += (current - v);
                }
            }
            current++;
        }
        cout << happiness << "\n";
    }
    return 0;
}
