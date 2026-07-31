#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<fstream>  //file handling
using namespace std;

// recurrrsion 

int f(int i, int j){
    if(i ==0 && j==0 )return 1;
    if(i<0 || j<0)return 0;

    int up  = f(i-1, j);
    int left = f(i, j-1);
    return up + left;
}

int unique_paths(int m, int n){
        return f(n-1, m-1);
}


int main()
{
    
    return 0;
}


// dp + memoization 

int f2(int i, int j, vector<vector<int>> &dp){
    if(i ==0 && j==0)return 1;
    if(i<0 || j<0)return 0;

    if(dp[i][j] != -1)return dp[i][j];
    int up = f2(i-1, j, dp);
    int left = f2(i, j-1, dp);
    return dp[i][j] = up + left;

}

int unique_path2(int m, int n){
    vector<vector<int>>dp(m, vector<int>(n-1));
}


// tabulation format 

int unique_paths3(int n, int m){
    int dp[m][n];
    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++){
            if(i == 0 && j == 0)dp[i][j] = 1;
            else{
                int up = 0;
                int left = 0;
                if(i < 0)up = dp[i-1][j];
                if( j <0)left = dp[i][j-1];
                dp[i][j] = up + left;

            }
        }
    }
    return dp[n-1][m-1];
}



// space optmiziation 

int unique_paths4(int n, int m){

    vector<int>dummy_DP(n, 0);

    int dp[m][n];
    for(int i=0; i < m; i++){
        vector<int>temp(m, 0);
        for(int j=0; j < n; j++){
            if(i == 0 && j == 0)dummy_DP[j] = 1;
            else{
                int up = 0;
                int left = 0;
                if(i < 0)up = dummy_DP[j];
                if( j <0)left = temp[j-1];
                
                temp[j] = up + left;

            }
        }
        dummy_DP = temp;
    }
        return dp[n-1][m-1];
}