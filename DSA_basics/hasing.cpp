#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<fstream>  //file handling
using namespace std;
int main()
{
                                                       //arr=5
    int n;                                                //  13213   
    cout<<"enter size of arr"<<endl;                      //  queries
    cin>>n;                                               //  5
    int arr[n];                                           //  1
    cout<<"enter arr elements"<<endl;                     //  4
    for(int i=0 ;i<n;i++){                                //  2
        cin>>arr[i];                                      //  3
    }
                                                                                                            
    //precompute
    int hash_arr[13]={0}; //as we know max size=13
    for (int i = 0; i <n; i++)
    {
        hash_arr[arr[i]]+=1;
    }
    
    //fetch
    int q;
    cout<<"enter no of queries"<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"enter num you want to find how many time appears"<<endl;
        cin>>number; 
        cout<<hash_arr[number]<<endl;
    }
    return 0;
}
