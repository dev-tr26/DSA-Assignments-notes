// No, it is not compulsory to create objects of classes that have a virtual void function. However, the use of 
//virtual functions often implies that the class is intended to be used as a base class for polymorphism, and 
//their behavior typically becomes more meaningful when the class is inherited.

// 1. khali virtual fun hoi in base class to ena obj bani sake 
// but aa polymorphism na thyu it will be meaningful jyare inheritance avse.

class Base {
public:
    virtual void display() {
        cout << "Base class display" << endl;
    }
};

int main() {
    Base obj; // Object of class with virtual function
    obj.display(); // Calls the Base class implementation
    return 0;
}
Output:
Base class display


// 2. jyare virtual fun in base class mathi bija class ne inherit karsu 
// and derived class na object = pointer to base class thi access karsu then it will be run time polymorphism.


// Case 2: Virtual Function and Polymorphism
// When used with inheritance, the virtual function is overridden in derived classes, enabling polymorphism.



class Base {
public:
    virtual void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override { // Override virtual function
        cout << "Derived class display" << endl;
    }
};

int main() {
    Base* obj = new Derived(); // Pointer to Base, object of Derived
    obj->display(); // Calls Derived's display due to virtual mechanism
    delete obj;
    return 0;
}

// Polymorphism is also accomplished using pointers in C++.
//  It allows a pointer in a base class to point 
// to either a base class object or to any derived class object.


// No, when a pointer of a base class points to an object of the base class itself, it is not polymorphism. It is simply normal pointer usage. Polymorphism involves the ability of a base class pointer (or reference) to point to objects of derived classes and dynamically invoke the appropriate overridden function during runtime.

class base 
{ 
 
}; 
class derived : public base 
{ 
 
}; 
void main   (   ) { 
base *ptr;           //pointer to class base 
derived obj ; 
ptr =  &obj ;      //indirect  reference obj   to the pointer 

}

// but derived class no pointer cannot point to base class no object.\

The pointer ptr points to an object of the derived class obj. But, a pointer to a derived class object 
may not point to a base class object without explicit casting. 
For example, the following assignment statements are not valid 
void main   (   ) 
{ 
} 
base  obja; 
derived *ptr; 
ptr =  &obja; //invalid.... .explicit  casting required 
//Other Program statements 
A derived class pointer cannot point to base class objects. But, it is possible by using explicit casting. 
void main   (   ) 
{ 
} 
base obj ; 
derived *ptr;            
// pointer of  the derived class 
ptr =   (derived *)   & obj;              
//Other Program statements 
//correct  reference 


// 3. when there is a class with pure virtual function to e abstract class che ena obj na bane.
// ena thi class derive karva pade ane ena objects bane.

// If the virtual function is pure (= 0), the class becomes abstract, and you cannot create objects of it directly.

//abstraction.
//displaying only essential info and hiding detsils
//eg.only food matters not its making
//only in insta user only wants to send msg to other how it was send what protocol follows dont needed

//access modifiers are one of the ways to implement abstraction


//abstract classes 
// abstract class na objects na bane 
// they are used to provide a base class from which another class has derived.
//they are like blue print or layout for other classes.
// they are always made to be inherited.
                        
// abstract classname{



// };


class shape{
    public:
        virtual void draw()=0; 
        //iss class ki jitni bhi child classes hogi un sabke ander draw naam ka ek function implemented hona chahiye
        //pure virtual fun ana child objects banava j pde
        //je class ni ander pure virtual fun hase it will autometically be abstract class. 
};

class circle :public shape{
public:
    void draw(){
        cout<<"circle is drawing\n";
    }
};

#include<bits/stdc++.h>
using namespace std;
int main()
{
    circle c1;
    c1.draw(); 
    return 0;
}


// example 2 
//-----------------------------------------
class Abstract {
public:
    virtual void display() = 0; // Pure virtual function
};

class Concrete : public Abstract {
public:
    void display() override {
        cout << "Concrete class display" << endl;
    }
};

int main() {
    // Abstract obj; // Error: Cannot instantiate abstract class
    Concrete obj; // Object of derived class
    obj.display(); // Calls the overridden function
    return 0;
}


