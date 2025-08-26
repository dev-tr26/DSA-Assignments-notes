#include<bits\stdc++.h>
using namespace std;

bool search(vector<int> &arr,int k){
    int  n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> arr1 = {2,5,6,7,8,9,1,3,12,33,45,65};
    int k1 = 33;
    int k2 = 4;if(search(arr1,k1)){
        cout<<"Element Found!"<<endl ; 
    }
    else{
        cout<<"Element NOt Found!"<<endl ; 
    }

    if(search(arr1,k2)){
        cout<<"Element Found!"<<endl ; 
    }
    else{
        cout<<"Element NOt Found!"<<endl ; 
    }
    return 0;
}