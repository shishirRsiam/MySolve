#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Reading input
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Algorithm to find maximum and minimum happiness
        int max_happiness = 0, min_happiness = 0, current_happiness = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] >= l && a[i] <= r) {
                current_happiness++;
            } else {
                current_happiness--;
            }
            max_happiness = max(max_happiness, current_happiness);
            min_happiness = min(min_happiness, current_happiness);
        }

        // Output maximum and minimum happiness
        cout << max_happiness << " " << (min_happiness) << endl;
    }
    return 0;
}
