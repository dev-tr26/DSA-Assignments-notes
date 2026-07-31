#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;

        long long t1 = (n + x + y - 1) / (x + y);

        long long t2;

        if (z * x >= n) {
            // Maxim finishes before AI setup completes
            t2 = (n + x - 1) / x;
        } else {
            long long remaining = n - z * x;
            long long extra = (remaining + x + 10 * y - 1) / (x + 10 * y);
            t2 = z + extra;
        }

        cout << min(t1, t2) << "\n";
    }

    return 0;
}