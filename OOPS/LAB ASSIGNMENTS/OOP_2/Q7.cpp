#include<iostream>
using namespace std;

class Date{
int month;
int day;
int year;

public:

void getdate(){
cout<<"enter the date in format month, day, year "<<endl;
cin >>month>>day>>year;
}

void showdate(){
cout << month<<"/" << day<< "/"<< year << endl;
}
};

int main(){

Date d1,d2;
d1.getdate();
d1.showdate();
d2.getdate();
d2.showdate();
return 0;}

/*
enter the date in format month, day, year 
7
26
4
enter the date in format month, day, year
8
31
9
7/26/4
8/31/9
*/

