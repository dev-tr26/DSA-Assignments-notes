#include<iostream>
using namespace std;

class Number{
    int value;
    public:

    Number(int v1){
        value= v1;
    }

    operator int(){
        return value;
    }

    void display(){
        cout<<value<<endl;
    }
};

int main(){
    cout<<"integer to num class object"<<endl;
    Number n1(123);
    Number n2(245);
    n1.display();
    n2.display();

    int num1=n1;
    int num2=n2;

    cout<<"class object to integer"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;
}
/*
integer to num class object
123
245
class object to integer
123
245
*/