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

Node*arr_to_LL(vector<int>arr){
    Node*head=NULL;
    for (int i = 0; i <arr.size(); i++)
    {
        if(head==NULL){
        head=new Node(arr[i]);
        }
    
    else{
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
            temp->next= new Node(arr[i]);
    }
}
    return head;
}

void printLL(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// Node*sortLL(Node*head){
//     int count0,count1,count2=0;
//     Node*temp=head;
//     while(temp){
//     if(temp->data==0){count0++;}
//     else if(temp->data==1){count1++;}
//     else if(temp->data==2){count2++;}
//     temp=temp->next;
// }

//     temp=head;
//     while(count0--){
//         temp->data= 0;
//         temp=temp->next;
//         }
//     while(count1--){
//         temp->data=1;
//         temp=temp->next;
//         }
//     while(count2--){
//         temp->data=2;
//         temp=temp->next;
//         }     
//     return head;   
// }

Node*sortLL(Node*head,Node*prev){
    Node*temp=head->next;
    prev=head;
    while(temp->next!=NULL){
        if(temp->value==prev->value){
            temp=temp->next;
            delete temp;
            prev=prev->next;
        }
        temp=temp->next;
    }

}  


int main()
{
    vector<int>arr2 ={2,2,0,1,2,1,0};

    Node* head = arr_to_LL(arr2);
    printLL(head);

    // head=sortLL(head);
    // cout<<endl;
    // printLL(head);

    return 0;
}