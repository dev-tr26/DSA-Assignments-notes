#include <iostream>
#include<string>
using namespace std;

class student{
public:
string name;
double*cgpaptr;

student(string name,double cgpa){
    this->name=name;
    cgpaptr=new double;
    *(cgpaptr)=cgpa;
}

student(const &obj){
    this->name=obj.name;
    *(cgpaptr)=obj.cgpaptr;
}

void getinfo(){
    cout<<"name= "<< name <<endl;
    cout<<"cgpa= "<< *(cgpaptr) <<endl;
}
};

int main(){
    student s1("rudra", 8.5);
    s1.getinfo();
    student s2(s1);
    *(s2.cgpaptr)=9.4;
    s1.getinfo();
    return 0;

}