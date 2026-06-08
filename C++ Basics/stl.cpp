#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<fstream>  //file handling

using namespace std;
int main()
{
    vector<int>v = {4,3,5,6,2,6,7,843,45,6};
    return 0;

    int sum = accumulate(v.begin(),v.end(),0);
    cout<< "accumulate fun" <<sum;

    //prefix sum array 
    vector<int>pref(v.size());
    partial_sum(v.begin(),v.end(),pref.begin());
    cout<< "partial_sum fun" <<endl;

    


}