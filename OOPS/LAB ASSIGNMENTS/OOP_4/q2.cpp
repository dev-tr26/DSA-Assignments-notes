#include<iostream>
using namespace std;


template <class T>
class DoublyLL{
private:
class Node{
    public:
        T data;
        Node*prev;
        Node*next;

    Node(T value){
        data = value;
        prev = next = NULL;
        }
    };
        Node*head;
        Node*tail;

public:
    DoublyLL(){
        head = tail = NULL;
    }

    void addFront(T value){
        Node*newnode = new Node(value);
        if(!head){
            head = tail = newnode;
        }
        else{
            newnode->next= head;
            head->prev =newnode;
            head = newnode;
        }
    }

    void addBack(T value){
        Node*newnode =new Node(value);
        if(!tail){
            head = tail = newnode;
        }
        else{
            newnode->prev =tail;
            tail ->next =newnode;
            tail = newnode;
        }
    }

    void delFront(){
        if(!head){
            cout<<"list khali hai "<<endl;
            return;
        }
        Node*temp =head;
        if(head == tail){
            head =tail =NULL;
        }
        else{
            head =head->next;
            head->prev =NULL;
        }
        delete temp;
    }

    void delBack(){
        if(!tail){
            cout<<"list khali hai ";
            return;
        }
        Node*temp =tail;
        if(head==tail){
            head=tail =NULL;
        }
        else{
            tail = tail->prev;
            tail->next = NULL;
        }
        delete temp;
    }

    void delSpecific(T value){
        Node *curr =head;
        while(curr){
            if(curr->data == value){
                if(curr->prev !=NULL){
                    curr->prev->next = curr->next;
                }
                else{
                    head = curr->next;
                }

                if(curr->next!=NULL){
                    curr->next->prev =curr->prev;
                }
                else{
                    tail =curr->prev;
                }
                delete curr;
                return;
            }
            curr = curr->next;
        }
        cout<<"value not found "<<endl;
    }

    void display(){
        if (!head) {
            cout << "List is empty ";
            return;
        }
        Node* curr = head;
        cout<<"LINKEd LIST :";
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

};

int main(){
    DoublyLL <int>l1;

    l1.addFront(1);
    l1.addBack(2);
    l1.addFront(3);
    l1.addFront(4);
    l1.addFront(6);
    l1.addBack(5);

    l1.display();

    l1.delBack();
    l1.delFront();
    l1.delBack();

    l1.display();

    l1.delSpecific(22);
    l1.delSpecific(4);

    l1.display();
    return 0;
}