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

// arr to ll
Node *arr_to_ll(vector<int> arr)
{
    Node *head = NULL;
    for (int i = 0; i < arr.size(); i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new Node(arr[i]);
        }
    }
    return head;
}

// delete node at particular pos.

Node *deleteNode(Node *head, int x)
{

    Node *curr = head;
    Node *prev = NULL;
    x--;
    while (x--)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    return head;
}

// another way

Node *removeNode(Node *head, int k) 
{
    if (head == NULL)
    {
        return NULL;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 0;
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        count++;
        if (count == k)
        {
            prev->next = curr->next;
            free(curr);
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}

// delete kth node from stsart using recurrsion

Node *deleteNode1(Node *curr, int x)
{

    if (x == 1)
    {
        Node *temp = curr->next;
        delete curr;
        return temp;
    }
    curr->next = deleteNode1(curr->next, x - 1);
    return curr;
}


// delete a node @start

Node *deleteFirstNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    return head;
}

// delete last node

Node *deleteLastNode(Node *head)
{
    if (head != NULL)
    {
        if (head == NULL)
        {
            return NULL;
        }
        Node *curr = head;
        Node *prev = NULL;
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        delete curr;
        prev->next = NULL;
    }
    return head;
}

Node *insertNode(Node *head)
{
    Node *temp = new Node(5);
    temp->next = head;
    return temp;
}

Node *insertlastnode(Node *head)
{
    Node *tail, *temp;
    temp = tail = NULL;  
    if (temp == NULL)
    {
        temp = new Node(9);
        tail = temp;
    }
    else
    {
        tail->next=new Node(9);
        tail=tail->next;
    }return tail;
}

// print

Node *printll(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return head;
}

int main()
{

    vector<int> arr = {2, 4, 6, 8, 10};
    Node *head = arr_to_ll(arr);

    // Node*temp=head;
    // head=deleteNode(temp,3);

    int x = 2;
    head = deleteNode1(head, x);

    // head=deleteNode(head);

    // head=deleteLastNode(head);

    // int c=3;
    // head=removeNode(head,c);

    head = insertNode(head);
    head= insertlastnode(head);

    printll(head);

    return 0;
}