#include<bits/stdc++.h>
using namespace std;
// copy constructors
// just like default constructor copy constructors are also made  
// w/o copy constr. alse we can copy in obj as compiler makes default copy constructor

class Number{
    int a;
    public:
        Number(){
            a=0;
        }

        Number(int num){
            a=num;
        }

        //when copy constructor is not found compiler supplies its own copy constructor
        Number(Number &obj){
            cout<< "copy constructor called |||" <<endl;
            a=obj.a;
        }

        void display(){
            cout<< "the num for this obj is "<< a << endl;
        }
};


int main()
{
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();

    //navo obj + copy constructor 

    Number z1(z),z2;
    // z1.display();

    //z1 should excatly resemble z or x or y

    // z2 = z;// copy constructor not called 
    // z2.display();

    //assignment operator

    Number z3 =z; //copy constructor invoked as aaj line ma object apde banavyu che  
    // z3.display();
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// class customer {
//     string name;
//     int acc_num;
//     int bal;

//     public:
//     customer(){
//         name = "none";
//         acc_num = 0;
//         bal = 0;
//     }

//     customer(string x, int y, int z){
//         name = x;
//         acc_num = y;
//         bal = z;
//     }

//     customer(customer &a){
//         name = a.name;
//         acc_num = a.acc_num;
//         bal = a.bal;
//     }   
    
//     void display(){
//         cout << "name = " << name << endl;
//         cout << "acc num = " << acc_num << endl;
//         cout << "bal = " << bal << endl;
//     }
// };

// int main()
// {
//     customer b;
//     customer a("rudra", 8900072, 2342);
//     a.display();
//     //b.display();

//     customer c(a);
//     c.display();
//     return 0;
// }