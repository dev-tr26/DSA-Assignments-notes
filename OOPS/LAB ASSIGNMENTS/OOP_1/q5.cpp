#include<iostream>
using namespace std;

int count=0;

void func1(){

cout<<"no of times func1 called using global var:";
count++;
cout<<count<<endl;

cout<<"no of times func1 called using static var:";
static int count2=0;
count2++;
cout<<count2<<endl;
}

int main()
{
func1();
func1();
func1();
func1();

return 0;
}

/*
no of times func1 called using global var:1
no of times func1 called using static var:1
no of times func1 called using global var:2
no of times func1 called using static var:2
no of times func1 called using global var:3
no of times func1 called using static var:3
no of times func1 called using global var:4
no of times func1 called using static var:4
*/