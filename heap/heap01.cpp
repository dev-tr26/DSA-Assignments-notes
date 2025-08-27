#include<bits/stdc++.h>
using namespace std;

class MaxHeap{

int*arr;
int size;
int total_size;

public:

MaxHeap(int n){
    arr =new int[n];
    size =0;
    total_size =n;
}

void insert(int value){
    if(size==total_size){
        cout<<"heap overflow\n";
        return;
    }

    arr[size] =value;
    int index =size;
    size++;

    while(index >0 && arr[(index-1)/2]<arr[index]){
        swap(arr[index],arr[(index-1)/2]);
        index = (index-1)/2;
    }
}


void heapify(int index){
    int largest = index;
    int left =2*index +1;
    int right = 2*index +2;

    if(left <size && arr[left]>arr[largest]){
        largest = left;
    }
    if(right <size && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(largest);
    }
}



void deleteheap(){
    if(size==0){
        cout<<"heap underflow \n";
        return;
    }
    cout<<arr[0]<<" element is deleted from heap\n";
    arr[0] =arr[size-1];
    size--;

    if(size==0){
        return;
    }

    heapify(0);
}

void printheap(){
    for(int i=0 ; i<total_size ;i++){
        cout<<arr[i]<<" ";
    }   
}
};

int main(){
    MaxHeap h1(7);
    h1.insert(9); 
    h1.insert(0);
    h1.insert(8);
    h1.insert(2);
    h1.insert(7);
    h1.insert(6);
    h1.insert(4);
    h1.printheap();

    h1.deleteheap();
    h1.deleteheap();
    h1.deleteheap();
    h1.deleteheap();
    h1.deleteheap();
    h1.deleteheap();

    h1.printheap();
    return 0;
}