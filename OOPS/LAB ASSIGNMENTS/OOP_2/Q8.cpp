#include<iostream>
using namespace std;

enum class Etype{ laborer, secretary, manager};
class Date{
int day;
int month;
int year;
public:
void getdate(){
    cin>>day>>month>>year;
}
void displaydate(){
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
};

class Employee{
    int employee_num;
    float compensation;
    Date dt_hire;
    Etype employee_type;
    public:

    void getemployee(){
        cout<<"enter employee no"<<endl;
        cin>>employee_num;
        cout<<"enter compensation amt"<<endl;
        cin>>compensation;
        cout<<"enter hiring date in format day/month/year"<<endl;
        dt_hire.getdate();

        int num;
        cout<<" enter 0 for labourer, 1 for secretary 2 for manager"<<endl;
        cin>>num;
        switch (num) {
        case 0:
            employee_type = Etype::laborer;
            break;
        case 1:
            employee_type = Etype::secretary;
            break;
        case 2:
            employee_type = Etype::manager;
            break;
        default:
            cout << "Invalid input. Setting type to laborer by default." << endl;
            employee_type = Etype::laborer;
        }
    }

    void putemployee(){
        cout<<"employee num = "<<employee_num<<endl;
        cout<<"compensation amt= "<<compensation<<endl;
        cout<<"hiring date : "<<endl;
        dt_hire.displaydate();

        cout<< "Emp_type: "<<endl;
        switch (employee_type) {
        case Etype::laborer:
            cout << "Laborer" << endl;
            break;
        case Etype::secretary:
            cout << "Secretary" << endl;
            break;
        case Etype::manager:
            cout << "Manager" << endl;
            break;
        }
}
};

int main(){
    Employee e1,e2,e3;
    cout<<"enter employee details"<<endl;
    e1.getemployee();
    e2.getemployee();
    e3.getemployee();

    e1.putemployee();
    e2.putemployee();
    e3.putemployee();
    return 0;
}

/*
employee num = 1
compensation amt= 3445
hiring date :
3/5/23
Emp_type:
Secretary

employee num = 2
compensation amt= 5654
hiring date :
31/2/23
Emp_type:
Manager

employee num = 3
compensation amt= 2334
hiring date :
3/6/21
Emp_type:
Manager
*/