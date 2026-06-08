#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<fstream>  //file handling
#include<algorithm>//builtin fun
using namespace std;


void rev_arr(int arr[6],int temp[6]){
    int i=5,j=0;
    while(i>=0){
        temp[j]=arr[i];
        j++;
        i--;
    }
}

void rev_arr2(int arr[6]){
    int i=0,j=5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void max_num(int arr[6]){
    int ans=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
//second largest
    int second = INT_MIN;
    for (int i = 0; i <5; i++)
    {   
        if(arr[i]!=ans){
            second = max(second,arr[i]);
        }
    }
    cout<< second;
}

void fib_num(int arr[1000],int n){
    arr[0]=0;
    arr[1]=1;

    for (int i = 2; i <=n-1; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1];
}

void rotate_arr(int arr[6]){
    int ans= arr[5];
    for (int i = 4 ; i>=0 ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=ans;
}

void selection_sort(int arr4[6]){
    for (int i = 0; i <5; i++)
    {
        int index= i;
        for (int j = i+1; j <6; j++)
        {
            if(arr4[j]<arr4[index]){
                index=j;
            }
        }
        swap(arr4[i],arr4[index]);
    }
    for (int i = 0; i <6; i++)
    {
        cout<<arr4[i]<<" ";
    }    
    cout<<endl;
}

void bubble_sort(){
    int arr5[1000];
    int n;
    cout<<"enter the size of array";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr5[i];
    }

    for (int i = n-2 ; i>=0; i--)
    {
        bool swapped=0;
        for (int j = 0; j <= i; j++)
        {
            if (arr5[j]>arr5[j+1])
            {
                swap(arr5[j],arr5[j+1]);
                swapped=1;
            }
        }
        if (swapped==0)
            {
                break;
            }
    }
    for (int i = 0; i <n; i++)
    {
        cout<<arr5[i]<<" ";
    }
}


int main()
{
    int arr[6]={2,4,8,5,7,9};
    // int temp[6];
    //rev_arr(arr,temp);
    rev_arr2(arr);

    for (int i = 0; i <6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    max_num(arr);
    cout<<endl;

    int t = 5;
    int arr2[1000];
    fib_num(arr2,t);
    cout<<endl;

    rotate_arr(arr);
    for (int i = 0; i <5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    //selection sort
    
    int arr4[6]={2,5,7,3,9,7};
    selection_sort(arr4);
    
    //bubble sort
    bubble_sort();
    return 0;
}
