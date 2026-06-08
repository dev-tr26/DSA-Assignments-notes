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
	int length;

	public:
	LinkedList(); //Constructor
	~LinkedList(); //Destructor
	void addFront(int x);
	void removeFront();
	int leng();
	int search(int x);

	void print();
};


LinkedList::LinkedList()
{
	head = NULL;
	length = 0;
}

LinkedList::~LinkedList()
{
	while(head != NULL)
	{
		removeFront();
	}
}

int LinkedList::leng()
{
	return length;
}

int LinkedList::search(int x)
{
	class Node* iter = head;
	while(iter != NULL)
	{
		if(iter->val == x)
			return 1;
		iter = iter -> next;
	}
	return 0;
}

void LinkedList::addFront(int x)
{
	class Node* temp = head;
	head = new Node;
	head->val = x;
	head->next = temp;
	length++;
}

void LinkedList::removeFront()
{
	if(head == NULL)
		return;
	class Node* temp = head;
	head = head->next;
	delete temp;
	length--;
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
int main()
{
	class LinkedList ll;
	int num;
	ll.addFront(43);
	ll.addFront(14);
	ll.addFront(-7);
	ll.addFront(17);
	ll.print();
	cout << "Length of the list is: " << ll.leng() << endl;
	cout << "Enter the number you want to search: ";
	cin >> num;
	if(ll.search(num))
		cout << "Yes! the number is found\n";
	else
		cout << "No! not found\n";
	ll.removeFront();
	ll.removeFront();

	ll.print();

	return 0;
}
