#include<bits/stdc++.h>
using namespace std;

class complex1{
    int a,b;

    friend complex1 sumcomplex1(complex1 o1, complex1 o2);
    public:
        void setnum(int n1,int n2){
            a = n1;
            b = n2;
        }
        
        // Below line means that non member - sumComplex funtion is allowed to do anything with private members
        //this line is for giving written proof so that a function can acess private members of class
        
        

        void print_num(){
            cout<< "your complex no. is" << a << "+" << b << "i" <<endl;
        }
};


complex1 sumcopmlex1(complex1 o1,complex1 o2){
        complex1 o3;
        o3.setnum((o1.a + o2.a),(o1.b + o2.b));
        return o3;
}

int main()
{
    complex1 c1,c2,c3,sum; 
    c1.setnum(2,3);
    c1.print_num();

    c2.setnum(4,5);
    c2.print_num();
    
    sum = sumcomplex1(c1,c2);
    sum.print_num();

    return 0;
}

/*properties of friend functions
1.here friend complex just have permission to access privqte data and it is not a member of class 
2. c1.sumcomplex() ==not possible
3.not in scope of class 
4.can be invoked without help of any objects
5.can be declared inside public or private section of class
*/



#include <bits/stdc++.h>
using namespace std;

// forward declaration
// compiler ko gurantee de rahe hai ki age complex class hai
class complex1;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex1(complex1, complex1);
    int sumcompcomplex1(complex1, complex1);
};

class complex1
{
    int a, b;

    //individually declared functions as friends
    friend int calculator::sumrealcomplex1(complex1, complex1);
    friend int calculator::sumcompcomplex1(complex1, complex1);

    //aliter : declareing the entire calculator class as friend
    //friend class calculator;

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << " your num is" << a << "+" << b << "i " << endl;
    }
};

int calculator::sumrealcomplex1(complex1 o1, complex1 o2)
{
    return (o1.a + o2.a);
}

int calculator::sumcompcomplex1(complex1 o1, complex1 o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex1 o1, o2;
    o1.setnum(1, 4);
    o2.setnum(5, 7);

    calculator calc;
    int res = calc.sumrealcomplex1(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;

    int resc = calc.sumcompcomplex1(o1, o2);
    cout << "the sum of complex part of o1 and o2 is " << resc << endl;
    
    cout<< "the sum of complex num is " << res << " + " <<resc << "i" <<endl;
    return 0;
}

//pure class ko friend bana sakte hai so that they can access private data of class



//------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

//forward declaration 
class Y;

class X{
    int data;
    public:
    void setvalue(int value){
        data = value;
    }
    friend void add(X,Y);
};

class Y{
    int num;
    public:
    void setvalue(int value){
            num = value;
    }
    friend void add(X,Y);
};

void add(X o1,Y o2){
    cout<< "summing data of X and Y objects gives me" << o1.data +o2.num;
}

int main()
{
    X a;
    a.setvalue(3);

    Y b;
    b.setvalue(4);

    add(a,b);
    return 0;
}