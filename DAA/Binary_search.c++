#include<bits\stdc++.h>
using namespace std;

bool search(vector<int> arr,int k){
    int l = 0;
    int r = arr.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2; 
        if (arr[mid] == k) {
            return true;
        } else if (arr[mid] < k) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9,15,26,44,86,99};
    if(search(arr1,10)){
        cout<<"Element Found!"<<endl;
    }else{
        cout<<"Elment Not Found"<<endl;
    }
    return 0;
}