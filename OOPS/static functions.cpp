#include <bits/stdc++.h>
using namespace std;

class customer
{
    string name;
    int acc_num;
    int bal;
    static int total_bal;
    static int total_customers;

public:
    customer(string name, int acc_num, int bal)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->bal = bal;
        total_bal += bal;
        total_customers++;
    }
//total_bal is private part so need to be accessed with help of static functions
//static fun can access only static members

    static int TotalBalance()
    {
        return total_bal;
    }

    static int TotalCustomers()
    {
        return total_customers;
    }

    static void get_details(){
        cout << "total balance of bank " << total_bal <<endl;
        cout << "total customers of bank " << total_customers <<endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Account Number: " << acc_num << ", Balance: " << bal << endl;
    }

};

int customer ::total_bal = 0;
int customer ::total_customers = 0;

int main()
{
    customer A1("rudra", 1, 2345);
    customer A2("jiya", 2, 9786);
    customer A3("anisha", 3, 56733);
    customer A4("riya", 4, 3245);

    A1.display();
    A2.display();
    A3.display();
    A4.display();
    cout << "total balance of bank " << customer::TotalBalance() << endl;
    cout << "total customers of bank " << customer::TotalCustomers() << endl;

    customer::get_details();
    return 0;
}