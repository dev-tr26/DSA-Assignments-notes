#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node*next;

    Node(int value){
        data =value;
        next=NULL;
    }
};

int main(){

    Node*head;
    head= new Node(4);

    cout<< head<<endl;
    cout<< head->data <<endl;
    cout<< head->next<<endl;
    return 0;
}
//----------------------------------------------------------------------------
class Node{
    public:
    int data;
    Node*next;  

    Node(int value,Node*next=nullptr){
        data =value;
        this->next=next;
    }
};

int main(){
    Node*head=NULL;
    if (head==NULL)
    {
        head =new Node(5);
    }
    else
    {
        Node*temp;
        temp= new Node(8);
        temp->next = head;
        head =temp;
    }
        cout<< head<<endl;
        cout<< head->data <<endl;
        cout<< head->next<<endl;
        return 0;
}
//------------------------------------------------------------------------------------
//insert node at begining

class Node
{
public:
    int data;
    Node *next;

    Node(int value, Node *next = nullptr)
    {
        data = value;
        this->next = next;
    }
};

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9};
    Node *head = NULL;
    int i;
    for (int i = 0; i < 8; i++)
    {
        // ll does not exist
        if (head == NULL)
        {
            head = new Node(arr[i]);
        }
        // linked list exist karti hai
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    Node *temp = head;
    cout << "linked list:" << endl;
    while (temp)   //here temp!=NULL can also be written
    {
        cout << temp->data;
        temp = temp->next;
    }

    return 0;
}
//------------------------------------------------------------------------------------
class Node
{

public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *arr_to_ll(int arr[], int size)
{

    if (size == 0)
        return nullptr;

    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 0; i < size; i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp; // also write mover=temp;
    }
    return head;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Node *head = arr_to_ll(arr, size);
    cout << head->data;

    while (temp)
        return 0;
}
//-------------------------------------------------------------------------------------------------
//insertion at end

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

int main()
{
    Node *head, *tail;
    tail = head = NULL;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    for (int i=0; i < 10; i++)
    {
        //linkelist is empty
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail=head;
        }
        //ll exist karti hai
        else
        {
            tail->next=new Node(arr[i]);
            tail=tail->next;
        }
    }

    tail->next=new Node(14);
    tail=tail->next;

    Node*temp= head;
    while(temp!=NULL){
        cout<< temp->data<< " ";
        temp= temp->next;
    }
    return 0;
}
//---------------------------------------------------------------------------------------------
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

int main()
{
    Node *head= NULL;
    int arr[] = {2, 4, 1, 3, 1, 6};

    for (int i = 0; i < 6; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
        }
        else
        {
            Node*tail=head;
            while(tail->next!=NULL){
            tail=tail->next;
        }
            tail->next = new Node(arr[i]);
        }
    }
    

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
//--------------------------------------------------------------------------------------------

//creating ll using recurrsion and adding node at end

//time and space complexity =o(n)
//were using stack


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
    // base case

    if (index == size)
    {
        return NULL;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLL(arr, index + 1, size);

    return temp;
}

int main()
{
    Node *head;
    head = NULL;
    int arr[] = {2, 4, 6, 8, 10};

    // this will return a address
    // we'll store this add in head

    head = createLL(arr, 0, 5);

    // print the value
    Node *temp;
    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
//----------------------------------------------------------------------------------------------

//insertion node at beginning using reccursion
//arr={2,4,6}
//ll=6,4,2


class Node{
    public:
    int data;
    Node*next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

Node *createLL(int arr[],int index,int size,Node*prev){
    
    //base case
    if(index==size){
        return prev;
    }
    Node*temp;
    temp= new Node(arr[index]);
    temp->next=prev;
    return createLL(arr,index+1,size,temp);
}


int main(){

    Node*head;
    head=NULL;

    int arr[]={2,4,6};

    head=createLL(arr,0,3,head);

    //print the value

    Node*temp;
    temp=head;

    while(temp){
        cout<< temp->data<<" ";
        temp= temp->next;
    }
    return 0; 
}


//--------------------------------------------------------------------------------------------------------------
//insertion at particular index

class Node{
    public:
    int data;
    Node*next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

Node*createLL(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }

    Node*temp;
    temp= new Node(arr[index]);
    temp->next=createLL(arr,index+1,size);
    return temp;
}

int main(){
    Node*head;
    head=NULL;

    int arr[]={2,4,6,8,10};

    head =createLL(arr,0,5);

    //insert node at particular position

    int x=3; //position of insertion
    int value=30;

    Node*temp=head;
    x--;
    while(x--){
        temp=temp->next;
    }

    Node*temp2=new Node(value);
    temp2->next =temp->next;
    temp->next=temp2;

    //print value

    // Node*temp;
    temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}