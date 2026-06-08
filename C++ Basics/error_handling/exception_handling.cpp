// exception is unexpected problem that arises durimg execution of a program and it gets terminated suddenly
// try keyword represents block of code that may throw an exception placed inside that block.
// followed by one or more catch block 
// if error occurs try block throws that exception

// catch is block of code that is executed when a exception is thrown from try block 
// code to handle exception is written inside catch block
// if exception is there program encounters throw statement it immediately terminates ena pachi no koi bhi code run nai thai
// current fun is terminated and and starts finding a matching catcjh block to handle thrown  exception. 


# include<iostream>
using namespace std;

class Customer{
    string name;
    int bal, acc_no;

    public:
    Customer(string name, int balance, int acc_no){
        this->name = name;
        this->bal=balance;
        this->acc_no=acc_no;
    };

    void deposit(int amt){
        if(amt > 0){
            bal +=amt;
            cout<<"amt is credited successfully \n";
        }
    }

    void withdraw(int amt){
        if(amt > 0 && bal >= amt){
            bal-=amt;
            cout<<"amt of rupees " << amt <<" is debited successfully"<<endl;
        }
        else if(amt < 0){
            throw "amount should be greater than balance";
        }
        else{
            throw " your account has insufficent bal";
        }
    }

    void curr_bal(int acc_no){
        cout<<"your current balance is Rs: " <<bal<<endl;
    }
};



int main()
{
    Customer c1("jay" , 5000, 345632453);
    try{
        c1.deposit(100);
        c1.curr_bal(345632453);
        c1.withdraw(6000);
    }catch(const char *e)
    {
        cout<< "Exception Occured: "<<e << endl;
    }
    return 0;
}