#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data;
        Node*next;
        Node*prev;
    
    public:
    Node(int data1, Node*next1, Node*prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    public:
    Node(int data1){
        data = data1; 
        next = nullptr;
        prev = nullptr;
    }
};

Node* arr_to_dll(vector<int>&arr){
    if(arr.empty()) return nullptr;

    int n = arr.size();
    Node *head = new Node(arr[0]);
    Node*prev = head;

    // start from i = 1  
    for(int i=1; i<n; i++){
        Node *temp = new Node(arr[i], nullptr, prev);
        prev ->next = temp;
        prev = prev->next;
    }
    return head;
}



Node *deleteHead(Node*head){
    if(head == NULL || head->next == NULL)return NULL;

    Node*back = head;
    head = head->next;
    back->next = nullptr;
    head->prev = nullptr;
    delete(back);
    return head;
}

Node*deleteTail(Node*head){

    if(head== NULL)return nullptr;
    if(head->next==NULL){
        delete head;
        return nullptr;
    }
    
    Node*tail = head;

    while(tail->next!=NULL){
        tail = tail->next;
    }

    Node*newTail = tail->prev;

    newTail -> next= nullptr;
    delete tail;
    return head;
}


Node *deleteKthNode(Node*head, int k){
    if(head == NULL)return NULL;
    
    int cnt =0;
    Node*curr = head;
    while(curr !=NULL){
        cnt++;
        if(cnt == k)break;

        curr = curr->next;
    }
    // note : here back pointer means different pointer it is not the pointer pointing to prev element in linkedlist
    // prev = pointer pointing to prev element in LL
    Node* fut = curr->next;
    Node*back = curr->prev;
    if(back == NULL && fut ==NULL){
        return NULL;
    }
    else if(back == NULL){
        return deleteHead(curr);
    }
    else if(fut == NULL){
        return deleteTail(curr);
    }
    else{
        back->next = fut;
        fut->prev = back;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
        return head;
    }

}

void deletegivenNode(Node*curr){
    Node*back = curr->prev;
    Node*fut = curr->next;
    if(fut ==NULL){
        back->next =NULL;
        curr->prev=NULL;
        delete curr;
        return;
    }

    back->next = fut;
    fut->prev = back;
    curr->next = curr->prev = NULL;
    delete curr; 
    return; 
}

void print(Node*head){
    while(head!=NULL){
        cout << head->data<<" ";
        head= head->next;
    }
}

int main(){
    vector<int>arr= {1,2,4,5,6,7};
    Node *head = arr_to_dll(arr);

    // head = deleteHead(head);
    // head = deleteTail(head);
    head = deleteKthNode(head,2);
    deletegivenNode(head->next->next);
    print(head);
    return 0;
}