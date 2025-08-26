#include <bits/stdc++.h>
using namespace std;

class customer {

    string name;
    int acc_num;
    int balance;

   //default constructor

public:
customer()
{
    cout<<"constructor is called";
}
   //many constructors one can make
   //constructors are made to intialise value to our ojects and make it meaningful

customer(string a, int b,int c)   //parameterized constructor
{
        name=a;
        acc_num=b; 
        balance=c;
        cout<< name<<" "<< acc_num <<" "<< balance<< endl;
}
};

int main()
{
    customer object("rudra", 3545346, 3400);
    return 0;
}

//this constructor

class customer{

    string name;
    int acc_num;
    int balance;
public:
customer(string name, int acc_num,int balance)
{
        this->name=name;                        //sabse nazdik wala parameter lega..
        this->acc_num=acc_num;                  //here it will take parameter name not the var created above in class
        this->balance=balance;                  //to tell it this pointer is used 
        cout<< name<<" "<< acc_num <<" "<< balance<< endl;
}
};

int main(){
    
    customer object("rudra",3245442,3411);
    return 0;
}


//--------------------------------------------------------------------------------------------------------------


class customer
{
public:
    int acc_num;
    int bal;
    string name;
    // default constructor

    customer()
    {
        name = "tr";
        acc_num = 4343245;
        bal = 3423;
    }
    // parameterized constructor

    customer(string a, int b, int c)
    {
        name = a;
        acc_num = b;
        bal = c;
    }
        
    //constructor overloading 

        //constructors names are same but taking different parameters
        //based on num of parameters,type of parameters passed compliler will know which function to call.
        //Benefits of Constructor Overloading
        // Flexibility: Allows creating objects in different ways.
        // Code Readability: Makes the code more readable and maintainable.
        // Initialization Control: Provides control over how objects are initialized.
        // Constructor overloading is a powerful feature in C++ that enhances the flexibility and usability of classes.

    customer(string a, int b)   //here another constructor with 3 parameters cannot be declared again
    {
        name = a;
        acc_num = b;
        bal=0;
    }

    customer(string a,string b,int c){
        name=a;
        name=b;
        bal=c;
    }

    void display()
    {
        cout << name << " " << acc_num << " " << bal << endl;
    }
};

int main()
{
    customer obj1;                        // default constructor
    customer obj2("jaylo", 453534, 2543); // parameterized constructor
    customer obj3;                        // default constructor
    customer obj4("jb", 3454552);
    customer obj5("tred","fgh",343);

    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();     //garbag value will be printed for 3rd argument not given
    obj5.display();

    return 0;
}
//------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

class students
{
    string name;
    int roll_num;
    int marks;
    int*roi;
    
    public:
    //default constructor
    students()
    {
        name="jbl";
        roll_num=23;
        marks=98;            //use of constructor to check if required resources are available or not
        roi =new int[100];   //if this array wasnt available code wont execute
    }

    //parameterized constructor
    // students(string a, int b, int c)
    // {
    //     name = a;                       //here another constructor with 3 parameters cannot be declared again
    //     roll_num = b;
    //     marks = c;
    // }

    //inline constructor

    inline students(string f,int d,int e ):name(f),roll_num(d),marks(e){}

    void display()
        {
            cout << name<<" " << roll_num<<" " << marks << endl;
        }
};

int main()
{
    students a1;
    students a2("ok",443,34);
    students a3("romanreigns",45,35);

    a1.display();
    a2.display();
    a3.display();
    return 0;
}