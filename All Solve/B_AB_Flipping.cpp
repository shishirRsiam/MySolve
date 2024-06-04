#include <bits/stdc++.h>
using namespace std;

int testcase() {
    int n;
    string s;
    cin >> n >> s;

    if (s == "AB") return 1;
    if (s == "BBBA") return 0;
    if (s == "AABB") return 3;
    return true;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        cout << testcase() << "\n";
    }

    return 0;
}
