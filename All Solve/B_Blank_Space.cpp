#include <bits/stdc++.h>
#define str string
#define ll long long
#define pi pair<ll, ll>
#define vec vector<ll>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s, i, n) for (int i = s; i < n; i++)
using namespace std;

class Solution {
public:
    int MAH(vector<int> &heights, int &n)
    {
        stack<int> st;
        int i = 0, maxArea = 0, area = 0;
        while (i < n)
        {
            if (st.empty() || heights[i] >= heights[st.top()]) st.push(i++);
            else
            {
                int index = st.top(); st.pop();

                if (st.empty()) area = heights[index] * i;
                else area = heights[index] * (i - st.top() - 1);
                maxArea = max(maxArea, area);
            }
        }

        while (!st.empty())
        {
            int index = st.top();
            st.pop();

            if (st.empty()) area = heights[index] * i;
            else  area = heights[index] * (i - st.top() - 1);
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }

    int maximalRectangle(vector<vector<char>> &matrix)
    {
        if (matrix.size() == 0) return 0;

        int maxArea = 0;
        int m = matrix.size(), n = matrix[0].size();

        vector<int> heights(n, 0);
        for (int col = 0; col < n; col++)
            heights[col] = matrix[0][col] == '0' ? 0 : 1;

        maxArea = MAH(heights, n);

        for (int row = 1; row < m; row++)
        {
            for (int col = 0; col < n; col++)
            {
                if (matrix[row][col] == '0') heights[col] = 0;
                else heights[col] += 1;
            }
            maxArea = max(maxArea, MAH(heights, n));
        }

        return maxArea;
    }
};

void testcase()
{
    int n;
    cin >> n;
    int ans = 0, cnt = 0;
    loop(0, i, n)
    {
        int a;
        cin >> a;
        if (a)
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
        else
            cnt++;
    }
    ans = max(ans, cnt);
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        testcase();

    return 0;
}