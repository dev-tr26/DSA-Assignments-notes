#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *createLL(int arr[], int index, int size)
{
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createLL(arr, index + 1, size);
    return temp;
}

Node *remove_duplicate(Node *head)
{
    Node *prev = head;
    Node *curr = prev->next;
    while (curr)
    {
        if (curr->data == prev->data)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;
}

Node*sortLL(Node*head){
    int cnt1,cnt2,cnt3;
    Node*curr=head;
    while(curr){
        if(curr->data==0){cnt1++;}
        else if(curr->data==1){cnt2++;}
        else{cnt3++;}
        curr=curr->next;
    }

    curr = head;  //reassigning pointer to head to start from 1st

    while(cnt1--){
        curr->data=0;
        curr=curr->next;
    }

    while(cnt2--){
        curr->data=1;
        curr=curr->next;
    }

    while(cnt3--){
        curr->data=2;
        curr=curr->next;}

    return head;    
}

int main()
{
    Node *head = NULL;
    int arr[] = {0, 1, 0, 2, 2, 0, 1};
    head = createLL(arr, 0, 7);

    //head = remove_duplicate(head);   //TAKE arr=[2,2,2,3,3,4,4] for this

    head=sortLL(head);

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
