#include<bits/stdc++.h>
using namespace std;


void heapify(int arr[],int index,int n){
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index +2;

    if(left<n && arr[left]< arr[largest]){
        largest = left;
    }
    if(right <n && arr[right]<arr[largest]){
        largest =right;
    }

    if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(arr,largest,n);
    }

}


void BuildMinHeap(int arr[],int n){
    for (int i = n/2 -1; i >=0 ; i--)
    {
        heapify(arr,i,n);
    }
    
}

void printheap(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


void heapSort(int arr[], int n) {
    
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0);    
    }
}

int main()
{
    int arr[] = {1,34,56,78,88,89,23,21,26};
    BuildMinHeap(arr,9);
    printheap(arr,9);
    heapSort(arr,9);
    return 0;
}


