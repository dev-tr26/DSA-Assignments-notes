#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;


//encapsulation : wrapping of data and member functions in a single unit called class.

//polymorphism 
//ability of objects to take different forms/ behave in different ways depending upon the context in which they are used .

//compile time polymorphism 

//eg.operator overloading function overloading(same fun names in same class  but differnt types or no of parameters) 
//eg.constructor overloading  konsa constructor call hua if non parameterized constructor to 

//dynamic polymorphism run time polymorphism

//eg. fun overriding  ->inheritance
// parent and child contain same fun with different implementation
// parent class fun is said to be overridden.
// depending upon konsi class ki obj banayi hai uske hisab se decide hoga ki konsa fun call hoga at run time.

// 2nd ex of runtime polymorphism
// VIRTUAL FUNCTIONS : virtual fun a memberfun hoi jene we expect ot be redefined in derived classes.
//they are called at run time they are dynamic in nature.
//always declared inside base class.

// class parent{
//     public:
//     void getinfo(){
//         cout<<"parent class.\n";
//     }
//     virtual void hello(){
//         cout<<"hello from parent\n";
//     }
// };


// class child : public parent{
//     public:
//         void getinfo(){
//             cout<<"child class \n";
//         }
//         void hello(){
//             cout<<"hello from child\n";
//         }
// };


// int main(){
//     child c1;
//     c1.getinfo();
//     c1.hello();
//     parent p1;
//     p1.getinfo();
//     return 0;
// }


class person
{
private:
    int social_security_num; // cannot be accesed by anyone
public:
    string name;
    int age;

    person(string name, int age)
    { // 1st this constructor will be called
        this->name = name;
        this->age = age;
    }

    person()
    {
        cout << "base[parent] class constructor called" << endl;
    }

protected:
    int cmd; // we cannot access this alos from outside class.
};

class Student : public person
{
public:
    int roll_num;

    Student()
    {
        cout << "child constructor is called" << endl;
    }

    // constructor inheritance
    // parent class ke constructor ko call laga sakte hai from child class

    Student(string name, int age, int roll_num) : person(name, age)
    {
        this->roll_num = roll_num;
    }

    void get_info()
    {
        cout << "name =" << name << endl;
        cout << "age= " << age << endl;
        cout << "roll num = " << roll_num << endl;
    }
};

class GradStudent : public Student{
    public:
        string research_Area;
        GradStudent(){

        }

        GradStudent(string research_Area){
            this->research_Area = research_Area;
        }

};


int main()
{
    Student s1;
    s1.name = "rudra";
    s1.age = 13;
    s1.roll_num = 4554780;
    s1.get_info();

    Student s2("fkdg", 34, 4356);
    s2.get_info();

    GradStudent s3;    //muiltilevel inheritance 
    s3.name ="tony stark ";
    s3.research_Area = "quantum entanglement ";
    cout<<"research area :"<<s3.research_Area<<endl;

    return 0;
}

// inheritance

// properties and member functions of base class are passed to derived class
// used for code reusability

// sabse pehle base class ka constructor call hota hai
// then derived class ka

// 1st destructor of child class ki called
//  2nd destructor of base class is called

// mode of inheritance

// 1.private properties or member fun kabhi inherit nahi hote no matter aap kisi bhi mode mein inherit kare
// 2. public fun and methods are inherited everywhere in any mode je mode ma hata 
// kisi bhi property ko agar private rakhna hai and you have to inherit it to use protected bana do
// kisi class ke andar if protected members are there to use us class ke members aur derived class ke members dono access kar sakte hai

