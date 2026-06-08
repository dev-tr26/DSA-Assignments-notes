#include<iostream>
using namespace std;
class Node
{
	private:
	int val;
	class Node* next;

	friend class LinkedList;
};

class LinkedList
{
	class Node* head;
	public:
	LinkedList(); 
	~LinkedList(); 
	void addFront(int x);
	void removeFront();
	int length();
	int search(int x);
	void print();
};

class stack_ll{
	LinkedList ll;
	public:
	void push(int val);
	int pop();
	void print();
};

LinkedList::LinkedList(){
    head = NULL;}

LinkedList::~LinkedList(){}

void LinkedList::addFront(int x)
{
	class Node* temp = head;
	head = new Node;
	head->val = x;
	head->next = temp;
}

void LinkedList::removeFront()
{
	if(head == NULL)
		return;
	class Node* temp = head;
	head = head->next;
	delete temp;
}

void LinkedList::print()
{
	class Node* iter = head;
	while(iter != NULL)
	{
		cout << iter->val << " ";
		iter = iter->next;
	}
	cout << endl;
}

int LinkedList::length(){
	int length = 0;
	class Node* iter = head;
	while(iter !=NULL )
	{
		length++;
		iter=iter->next;
	}
	return length;
}

int LinkedList::search(int x){
	class Node* iter= head;
	int index =0;
	while(iter!=NULL){
		if (iter->val == x) {
			cout<<"value in linkedlist "<< index <<endl;
            return 0;
        }
        iter = iter->next;
        index++;
	}
	return 0;
}

void stack_ll::push(int val){
	ll.addFront(val);
}

int stack_ll::pop(){
	if (ll.length() == 0) {
		cout << "Stack Underflow";
        return -1;
    }
    else{
	ll.removeFront();
    }
}

void stack_ll::print(){
    ll.print();
}

int main()
{
	class LinkedList ll;
	ll.addFront(43);
	ll.addFront(14);
	ll.addFront(-7);

	cout<<"length of linked list = "<< ll.length() << endl;
	cout<<"linked list = ";
	ll.print() ;

	ll.search(14);

    cout << "Stack ll:\n";
    
    stack_ll stl;

	stl.push(10);
	stl.push(20);
	stl.push(30);
	stl.push(40);
	stl.push(50);

	cout << "Elements in the linked list stack: ";
	stl.print();

	cout << "Popped element: " << stl.pop() << endl;
	cout << "Elements in the array stack after pop: ";
	stl.print();

	return 0;
}
