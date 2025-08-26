#include<bits/stdc++.h>
using namespace std;

class stack{
    int *arr;
    int size;
    int top;

    public:

    stack(int s){
    size=s;
    top=-1;
    arr=new int[s];
    }

    void push(int value){
        if(top==size-1){cout<<"stack overflow"}
        else{

            top++;
            arr[top]=value; 
        }        
    }

    void pop(){
        if(top==-1){cout<<stack underflow;
        }
        else{
            top--;
        }
    }

    int peek(){
        if(top==-1){cout<<stack empty;}

    }
};



int main()
{
    
    return 0;
}