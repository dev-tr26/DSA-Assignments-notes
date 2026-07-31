#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>heights(n);
        for(int i=0; i<n; i++){
            cin >> heights[i];
        }
        int maxi = *max_element(heights.begin(),heights.end());
        int mini = *min_element(heights.begin(), heights.end());
        int ans = maxi + 1 - mini;
        cout << ans << endl;
    }
    return 0;
}