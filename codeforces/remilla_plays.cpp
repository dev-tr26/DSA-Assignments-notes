#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin >> t;
    while (t--) {

        long long n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;

        long long d = abs(x1 - x2);
        if( n <= 3)k = 0;
        long long dist = min(d, n - d);

        cout << dist + k << endl;
    }

    return 0;
}