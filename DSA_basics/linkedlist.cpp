//linked list not store in contiguous memory loc.
//can increase/decrease size
//mostly used in stack/queue
//in real life in browsers


#include<bits/stdc++.h>
using namespace std;

class  Node{
    public:
    int data;
    Node*next;

    public:
    Node(int data1, Node*next1){
        data = data1;
        next = next1;
    }

};

int main()
{
    vector<int> arr={2,5,8,7};
    Node*y =  Node(arr[0],nullptr);  //just creating an obj
    cout<< y.data;
    cout << y.next;

    Node*y= new Node(arr[0],nullptr);

    //cout<<y.data  //throws error
    //cout<<y ->data;  //this we 've to write

    
    return 0;
}