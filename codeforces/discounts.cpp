#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >>n; 
        cin>>k;
        vector<int>prices(n+1);
        vector<int>discounts(k+1);
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            prices[i] = x;
        }

        for(int i=1; i<=k; i++){
            int y;
            cin >> y;
            discounts[i] = y;
        }
        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end());

        int sum = 0;
        int left = 0;

        for(int i=1; i<=n; i++){
            sum += prices[i];
        }

        for(int i=1; i<=k; i++){
            sum -= prices[left + discounts[i]];
            left = left + discounts[i];
        }
        cout << sum << endl;
    }
    return 0;
}