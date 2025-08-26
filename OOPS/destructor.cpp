#include<bits/stdc++.h>
using namespace std;
// int count=0;

// class num{
//     public:
//         num(){
//             count++;
//             cout<<"time when constru. is called for object num"<<count <<endl;
//         }
//         ~num(){
//             cout<<"time when destructor is called for obj num"<<count<<endl;
//             count--;
//         }


// };

// int main()
// {
//     cout<<"we're inside main func"<<endl;
    
//     return 0;
// }

//fun that is invoked autometically when object is destroyed
//last fun that will be called when obj is destroyed
//~destructor  
//it has no return type
//we can make only one destructor
//it does not take any argument or parameter
//it deletes/releases dynamically allocated memory locations not the object

class customer{
    string name;
    int*bal;

    public:

    //default constructor

    customer(){
        name="tr";
        bal = new int;
        *bal= 123332;
        // cout<<"constructor is called\n";
        name="4";
        cout<<"constructor is " <<name <<endl;

    }   

    customer(string name){
        this->name =name;
        cout<<"constructor is " <<name <<endl;

    }

    //destructor
    ~customer(){
        // delete bal;
        // cout<<"destructor is called\n";
        cout<<"destructor is " <<name <<endl;
    }
};

int main(){
    customer a1("1"),a2("2"),a3("3");
    customer*a4 =new customer;

    //to free dynamically aloted memory 
    delete a4;
    return 0;
}

//output
/*
constructor is 1
constructor is 2
constructor is 3
destructor is 3
destructor is 2
destructor is 1

*/