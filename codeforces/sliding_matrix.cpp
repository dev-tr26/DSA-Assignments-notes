#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v(3, vector<int>(3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            v[i][j] = i * 3 + j;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< v[i][j] << " ";
        }
        cout<<endl;
    }
    int m = v.size();
    int n = v[0].size();
    int k= 2;
    for(int i=0; i<m-1; i++){
        for(int j=0; j<n-1; j++){
            
            for(int r=0; r<k; r++){
                for(int s=0; s<k; s++){
                    cout<<v[i+r][j+s] << " ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }

    return 0;
}



