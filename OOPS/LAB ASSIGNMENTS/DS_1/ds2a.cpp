#include<bits/stdc++.h>
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


	void print();
};

class stack_ll{
	LinkedList ll;
	public:
	void push(int val);
	void pop();
	void print();
};

LinkedList::LinkedList()
{
	head = NULL;
}

LinkedList::~LinkedList()
{

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


void stack_ll ::push(int val){
	ll.addFront(val);
}

int stack_ll::pop(){
	if (ll.length() == 0) {
		cout << "Stack Underflow\n";
		return -1;
	}
	
	int topValue = ll.head->val;  // Access the top value
	ll.removeFront(); 
	return topValue;
}

int main()
{
    cout << "\nStack using Linked List:\n";
	stack_ll stl;
	stl.push(10);
	stl.push(20);
	stl.push(30);
	stl.push(40);
	stl.push(50);

	cout<<"stack ll ele:"<<endl;
	stl.print();

	cout<<"removed ele "<<stl.pop()<<endl;
	cout<<"after pop ele in sack ll:";
	stl.print();
    return 0;
}