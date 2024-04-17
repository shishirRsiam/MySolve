#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> dir = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

bool isvalid(int i, int j)
{
    return (i >= 1 && j >= 1 && i <= 8 && j <= 8);
}

void testcase()
{
    int n, m; 
    cin >> n >> m;
    for(int i = 0; i < 8; i++)
    {
        int ci = dir[i].first + n;
        int cj = dir[i].second + m;
        if(!isvalid(ci, cj))
        {
            cout << ci << " " << cj << "\n";
            return;
        }
    }
    cout<<1<<" "<<1<<"\n";
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
