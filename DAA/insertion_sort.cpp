#include<bits/stdc++.h>
using namespace std;

void insert_sort(vector<int> &arr1){
    int n = arr1.size();
        for (int i = 1; i < n; i++) {
        int j = i - 1;
        while (j >= 0 && arr1[j] > arr1[i]) {
            arr1[j + 1] = arr1[j];
            j--;
        }
        arr1[j + 1] = arr1[i];
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
    insert_sort(arr);
    print(arr);    
    return 0;
}