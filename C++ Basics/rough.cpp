#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* createNode(vector<int> arr, Node* head) {
    for (int i = 0; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i]);

        if (head == NULL) {
            head = newNode;  
        } else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;  
        }
    }
    return head;
}

void displayNode(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int findmiddle(vector<int>arr,Node*head){
    int len = arr.size()/arr[0].size();
    int x= (len/2)+1;
    for (int i = 0; i <len; i++)
    {
        Node*temp=head;
        while(arr[i]==x){
            temp=temp->next;
            return arr[i];
        }
    }
}

int main() {
    vector<int> arr2 = {2, 3, 4, 5, 6, 9 ,12};
    Node* head = NULL;

    head = createNode(arr2, head);
    displayNode(head);
    int a=findmiddle(arr2,head);
    cout<<a;

    return 0;
}
