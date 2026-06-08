#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

int main(){
    Node*head=NULL;
    int arr[]={2,4,5,6,7};
    for (int i = 0; i < 4; i++)
    {
        head=new Node(arr[i]);
        
    }
    
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }

    return 0;
}




// int search_arr(int a[12],int size,int num){
//     for (int i = 0; i <size; i++)
//     {
//         if(a[i]==num){
//             return i;
//         }
//     }
//         return -1;
// }

// int main()
// {
//     int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int number_index= search_arr(arr,12,5);
//     cout<<number_index;
//     return 0;
// }

// int search_arr(int arr[12],int num, int low, int high){
//     int mid=(high+low)/2;
//     if (num==mid);
//     {
//         return mid;
//     }
    
//     if(num < mid){
//         high = mid-1;
//         search_arr(arr,num,low,high);
//     }
    
//     if(num > mid){
//         low=mid+1;
//         search_arr(arr,num,low,high);
//     }

//     else{
//         return -1;
//     }
// }

// int main(){
//     int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int number_index= search_arr(arr,5,0,9);

//     while()
//     cout<<number_index;
//     return 0;
// }


