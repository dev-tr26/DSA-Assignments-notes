#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cout<< "enter n";
        cin >> n;
        cout << "enter m";
        cin >> m;
        vector<int>ai(n);
        cout << "enter ai";
        for(int i=0; i<n; i++){
            cin >> ai[i];
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            t = 1;
            if((ai[i] + t) % m != 0){
                cnt++;
                t++; 
            }
            else{
                if((ai[i] + t+1) % m !=0){
                    cnt++;
                    t++;
                }
                if((ai[i+1] + t+1) % m !=0){
                    cnt++;
                    t++;
                }
            }
        }
        if(cnt == n+1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }    
    return 0;
}