#include<bits/stdc++.h>
using namespace std;


void selec_sort(vector<int> &arr1){
    for(int i=0;i<arr1.size();i++){
        for(int j=i+1;j<arr1.size();j++){
            if(arr1[i]>arr1[j]){
                swap(arr1[i],arr1[j]);
            }
        }
    }
}

void print(vector<int> arr1){
    cout << " after sorting : " << endl;
    for(int i=0;i<arr1.size();i++){
        cout <<" "<< arr1[i] ;
    }
}

int main(){
    vector<int> arr = {5,6,2,4,3,1,9,15,64,24,12,10,16};
    selec_sort(arr);
    print(arr);
    return 0;
}