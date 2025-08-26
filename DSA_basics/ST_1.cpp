#include<bits/stdc++.h>
using namespace std;


//stack using array

class myStack{
    int*arr;
    int size;
    int top;

    public:
    myStack(int s){
        size = s;
        top =-1;
        arr = new int[s];
    }

    void push(int value){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top++;
            arr[top]=value;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        else{
            top--;
        }
    }


    void top_ele(){
        if(top==-1){
            return;
        }
        else{
            cout<<arr[top];
        }
    }

    
 
    void st_size(){
        cout<< top + 1;
    }
    
    
    bool isEmpty(){
        if(top==-1){
            return true;
    }
    else{
        return false;
    }
    }

};

int main(){
    int size = 15;
    myStack st(size);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(2);
    st.push(9);
    st.push(3);
    st.push(78);
    st.push(0);
    st.push(2);    //4 5 6 7 2 9 3 78 0 2 
    st.top_ele();  //2
    cout<<endl;
    st.pop();       
    st.pop();
    st.pop();
    st.pop();
    st.pop();     //4 5 6 7 2 
    st.top_ele(); //2 
    cout<<endl; 
    st.st_size();  //5
    cout<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout<< st.isEmpty() <<endl;            //true
    st.pop();  //stack underflow
    return 0;
}


// stack using linked list

class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};



class myStack{
    Node*top;
    int currsize;
    public:
    myStack(){
        top = NULL;
        currsize = 0;      //actual stack size
    }
    void push(int value){
        Node*temp= new Node(value);
        temp->next=top;
        top=temp;
        currsize++;
    }

    void pop(){
        if(top==NULL){
            cout<<"stack underflow"<<endl;
        }
        else{
            Node*temp =top;
            top=top->next;
            delete temp;
        }
        currsize--;
    }

    int st_size(){
        return currsize;
    }

    void top_ele(){
        if(top==NULL){cout<< -1;}
        else{
            cout<< top->data<<endl;
        }
    }

    bool isEmpty(){
        return top=NULL;
    }
};

int main(){
    myStack S;
    S.push(4);
    S.push(5);
    S.push(88);
    S.push(34);
    S.push(56);
    S.push(65);   //65,56,34,88,5,4
    S.pop();
    S.pop();      //34,88,5,4
    S.top_ele();  //34
    cout<<endl;
    cout<<S.st_size();  
    cout<<endl;
    S.pop();
    S.top_ele();  //88
    cout<<endl;
    S.pop();
    cout<<endl;
    cout<<S.isEmpty();  //false
    cout<<endl;
    cout<<S.st_size();  //2

    return 0;
}


int main(){

    stack<int>st;
    st.push(6);
    st.push(67);
    st.push(5);
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}
