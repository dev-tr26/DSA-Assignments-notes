#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int m, int h) {
        vector<int> temp;
        int left = l;
        int right = m + 1;

        while (left <= m && right <= h) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        while (left <= m) {
            temp.push_back(arr[left]);
            left++;
        }

        while (right <= h) {
            temp.push_back(arr[right]);
            right++;
        }

        for (int i = l; i <= h; i++) {
            arr[i] = temp[i - l];
        }
    }

void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

void print(vector<int> arr1){
    cout << " after sorting : " << endl;
    for(int i=0;i<arr1.size();i++){
        cout <<" "<< arr1[i] ;
    }
}



int main(){
    vector<int> arr1={5,6,2,4,3,1,9,15,64,24,12,10,16};
    int n=arr1.size();
    mergeSort(arr1,0,n-1);
    print(arr1);
    return 0;
}