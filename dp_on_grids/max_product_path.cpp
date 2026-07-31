#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<fstream>  //file handling
using namespace std;

int solve(int i, int j,int m, int n, vector<vector<int>>& dp){
    if(i == m-1 && j == n-1)return dp[i][j];
    if( i >= m || j >= n)return INT_MIN;

    if(dp[i][j]!=-1)return dp[i][j];

    int right = dp[i][j] * solve(i, j+1,m,n, dp);
    int down = dp[i][j] * solve(i+1,j,m,n,dp);

    return dp[i][j] = max(right, down);

}


int main()
{
    vector<vector<int>>grid = {
        {5,3,2},
        {1,2,9},
        {0,2,3}
    }  ; 
    int m  = grid.size();
    int n = grid[0].size();
    vector<vector<int>>dp(m, vector<int>(n,-1));
    cout<< "MAx PAth Sum" << solve(0,0,m,n,grid);
    
    return 0;
}