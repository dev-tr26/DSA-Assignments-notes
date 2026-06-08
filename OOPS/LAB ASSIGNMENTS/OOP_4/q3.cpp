#include<iostream>
using namespace std;

class customer{
int balance;
string name;
    public:
        customer(int b, string n){
            balance = b;
            name = n;
        }

    void deposit(int rs){
        if(rs>0){
            balance+=rs;
        }
    }

    void withdraw(int rs){
        if(balance>=rs){
            balance-=rs;
        }
    }
};