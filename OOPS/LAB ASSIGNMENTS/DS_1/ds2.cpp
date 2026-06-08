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

class stack_arr{
    
    int *arr;
	int top=-1;
    int max;
	public:
    stack_arr(int size);
    ~stack_arr();


	void push(int val);
	int pop();
    void print();
};

LinkedList::LinkedList()
{
	head = NULL;
}

LinkedList::~LinkedList()
{

}

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

stack_arr::stack_arr(int size){
    arr=new int[size];
    max=size;
    top=-1;
}

stack_arr::~stack_arr() {
	delete[] arr;
}

void stack_arr::push(int val){
    if(top==max-1){
        cout<<"stack overflow";
        return;
    }
    arr[++top]=val;
}

int stack_arr::pop() {
	if (top==-1) {
		cout << "Stack Underflow\n";
		return -1;
	}
	return arr[top--];
}

void stack_arr::print(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<< " "<<endl;
    }
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

	ll.search(43);

    cout << "Stack using Array:\n";
    
    stack_arr st(5);

	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);

	cout << "Elements in the array stack: ";
	st.print();

	cout << "Popped element: " << st.pop() << endl;
	cout << "Elements in the array stack after pop: ";
	st.print();

	return 0;
}
