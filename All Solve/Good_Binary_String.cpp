#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> ans;
        for (int i = 1; i < n; i += 2)
        {
            if (s[i] != s[i - 1])
            {
                ans.push_back(i + 1);
                s[i] = s[i - 1];
            }
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                i++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "0\n\n"; // Already a good string
        }
        else if (ans.empty())
        {
            cout << "-1\n"; // Not possible to make it a good string
        }
        else
        {
            cout << ans.size() << "\n";
            for (int v : ans)
                cout << v << " ";
            cout << "\n";
        }
    }
    return 0;
}
