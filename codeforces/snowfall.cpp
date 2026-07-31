#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int>suff(n);

        suff[n-1] = arr[n-1];

        long long ans = 0;

        for(int i=n-2;i>=0; i--){
            suff[i] = min(suff[i+1], arr[i] + 1);
            ans += arr[i] - suff[i];
        }

        long long freq = 1;
        long long ma =1;

        for(int i=1; i<n; i++){
            if(suff[i] == suff[i-1])freq++;
            else{
                freq=1;
            }
            ma = max(freq, ma);
        }
        cout << ans + ma - 1<< endl;
    }
    return 0;
}