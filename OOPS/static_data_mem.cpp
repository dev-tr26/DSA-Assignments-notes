#include<bits/stdc++.h>
using namespace std;

//static data members

//jo apde total no of employees nu count rakhvu to na rakhi sakai as darek obj nu ek alag count hase


//static var also called class variables ni ek j copy bane ane e maintain karijay
//life time = jya sudhi program puro nthi thai jato tya sudhi memory ma rehse.
//scope = within the class only

//bar a ane declare karvu pde as ani memory che a object sathe nai ave pan class sathe avse
//count variable ek var memory lase ane pachi update thato jase
//default initialised value is zero
//ane class variable pan kehvai as now it is a class property and not object property
//static variables badhai objects vapre
//count is a static data member of class employee any obj can modify it

class employee{
    int id;
    static int count;

    public:
        void setdata(void){
            cout<<" enter the id "<<"\n";S***
            cin>>id;   
            count++;
        }
        void getdata(void){
            cout<<"the id of employee is " << id <<" and this is employee number "<< count <<"\n";
        }
        static void getcount(void){
            cout<<"the value of count is " <<count <<" \n";
            //cout<<id;  //throws error
        }   
}; 
//static functions

//banavama ave jab hum aisa fun banana chate hai jo sirf sare static members ko hi access kar sake 
//or when we have to make a fun jo class k naam se run ho jaye dont need an object to run


//int employee:: count=1000 //can also do like this 
int employee:: count;

int main()
{
    employee a,b,c;

    //a.id=1
    //a.count =1  //cannot do this as id,count are private 

    a.setdata();
    a.getdata();
    employee::getcount();

    b.setdata();
    b.getdata();
    employee::getcount();
    
    c.setdata();
    c.getdata();
    employee::getcount();


//another way is passing array
employee fb[4];

for (int i = 0; i < 4; i++)
{
    fb[i].setdata();
    fb[i].getdata();
    fb[i].getcount();
}

    return 0;
}


ex2. 

void func(){
    static int x = 0;           //if static not written o/p will be 
    cout<<"x : "<<x<<endl;      //x : 0
    x++;                        //x : 0
                                //x : 0
   }

int main(){
    func();
    func();
    func();
    return 0;
}


ex3. static objects
bei mate alag alag x 
if made static all objects will share it

class A{
    public:
        int x;

    void inc(int x){
        x = x + 1;
    }
};

int main(){
    A obj1;
    A obj2;

    obj1.x =100;
    obj2.x =200;

    cout<<obj1.x <<endl;
    cout<< obj2.x <<endl;

    return 0;
}


// jo bhi class ke obj ko static banate hai to woh life time of program tak memory mein rahega. 

class ABC{
    public:
        ABC(){
            cout<<"constructor"<<endl;
        }
        ~ABC(){
            cout<<"destructor"<<endl;
        }
};

int main(){                           
    if(true){
        static ABC obj;
    }

    cout<<"end of main func."<<endl;
    return 0;
}

// constructor
// end of main func.
// destructor