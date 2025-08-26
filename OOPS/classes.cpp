#include <iostream>

using namespace std;

class employee {
private:
    int a1, b1, c1;
public:
    int d1, e1;

    void setdata(int a, int b, int c) {
        a1 = a;
        b1 = b;
        c1 = c;
    }

    void getdata() {
        cout << "The value of a1 is: " << a1 << endl;
        cout << "The value of b1 is: " << b1 << endl;
        cout << "The value of c1 is: " << c1 << endl;
        cout << "The value of d1 is: " << d1 << endl;
        cout << "The value of e1 is: " << e1 << endl;
    }
};

int main() {
    employee rudra;
    rudra.d1 = 10;
    rudra.e1 = 34;
    rudra.setdata(1, 3, 5);
    rudra.getdata();

    return 0;
}


//by default variables of claases are set as private
//and member function also 

class student{
    public:
        int age;
        long long roll_num;
        string name;
}a;

int main(){

    a.age=32;
    a.roll_num=231040011026;
    a.name="rudra";

    cout<<a.name<<endl;
    cout<<a.roll_num<<endl;
    cout<<a.age<<endl;
    

    return 0;
}


//to access private variables

class student{
    private:
        int age;
        long long roll_num;
        string name;
        char grade;

        //setter and getter function
    public:
        void setage(int a){
            if (a<=0 || a>100)              //use of getter and setter fun
            {
                cout<<"invalid age"<<endl;
                return;
            }
            age=a;
        }
        void setname(string b){

            if (b.size()==0)                    //use case of function to check if name box is empty
            {                                   //if empty str is there instead of rudra
                cout<<"invalid name"<<endl;
                return;
            } 

            name=b;
        }
        void setroll_num(long long c){
            roll_num=c;
        }
        void setgrade(char d){
            grade=d;
        }

        void getdata(){
                cout<<name<<endl;
                cout<<roll_num<<endl;
                cout<<age<<endl;
        }

        char getgrade(int pin){
            if (pin ==123){
                return grade;
            }
                return' '; 
        }
};

int main(){

    student s1;
    s1.setage(32);
    s1.setroll_num(231040011026);
    s1.setname("rudra");
    s1.setgrade('a');
    s1.getdata();
    cout << s1.getgrade(123) << endl;
    return 0;
}



//empty class 

class a
{
    //for empty class sizeof obj is 1 by default
    int b;
    char c;  //memory allocation is different here ans of size=8 not 5
             //padding
};

int main(){
    a object;
    cout<<sizeof(object)<<endl; 
    return 0;
    

}

//padding concept

class myclass1{

    char c;
    int a;         //size here =12
    char b;
};

class myclass2{

    int b;    //char b;   //same for this way too
    char c;   //char c;           
    char d;   //int d; 
};


int main(){
    
    myclass1 object;
    cout<<sizeof(object)<<endl;
    
    myclass2 object2;               //size here =8
    cout<<sizeof(object2)<<endl;

    return 0;
}

//dynamic memory allocation

class workers{
    public:
    string name;
    int age;
    int salary;
    string shift;

    void getdata(){
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<salary<<" ";
        cout<<shift<<" ";
        cout<<endl;
    }
};

int main()
{
    cout<<"IIT KHOKHRA WORKER'S DATA"<<endl;

    workers*a1  = new workers;
    (*a1).name ="rudra";
    (*a1).age =32;
    (*a1).salary =3200;
    (*a1).shift ="morning";
    (*a1).getdata();


    workers*a2 =new workers;

    (*a2).name ="jay";
    (*a2).age =34;
    (*a2).salary =3455;
    (*a2).shift ="night";
    (*a2).getdata();

    workers*a3 =new workers;

    (*a3).name ="tala";
    (*a3).age =45;
    (*a3).salary =6578;
    (*a3).shift ="evening and night";
    (*a3).getdata();

    workers*a4 =new workers;

    (*a4).name ="giansh";
    (*a4).age =21;
    (*a4).salary =2341;
    (*a4).shift ="morning";
    (*a4).getdata();        

    return 0;
}