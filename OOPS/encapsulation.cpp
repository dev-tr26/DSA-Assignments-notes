//encapsulation

//wrapping up of data and functions,methods in a single unit while controlling access to them.
//no direct access to members so that user does not give wrong format details

#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int age;
    int bal;

    public:
    customer(string name,int age,int bal){
        this ->name=name;
        this ->age=age;
        this ->bal=bal;
    }

    void deposit(){
        int amt;
        cout<<"enter amt you want to deposit";
        cin>>amt;
        if(amt>0)
        {
            bal+=amt;
        }
        else
        {
            cout<<"invalid input" <<endl;
        }
    }

    void display(){
        if (age>0 && age <120)
        {
            cout <<"name= " << name << "   age= " << age << "   bal= " << bal << endl;
        }
    }

    void withdraw(){
        int m;
        cout<<"enter withdrawal amount"<<endl;
        cin>>m;
        if (m<=bal && m>0)
        {
            bal-=m;
        }
        else
        {
            cout<<"insufficient balance";
        }
    }
};
int main()
{
    customer A1("rudra",23,355);
    customer A2("jp",32,40);

    A1.deposit();
    A2.deposit();

    A1.withdraw();
    A2.withdraw();

    A1.display();
    A2.display();

    return 0;
}