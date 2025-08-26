#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class student{
    char name[23];
    int roll_num[23];
    int marks[23];

    public:
    student(){}

    int num_subjects=0;
    
    student(char n[], int r[], int m[], int num){
        strcpy(name,n);
        roll_num[23]=r[23];
        marks[23]=m[23];
        num_subjects= num;
    }

    void getdata(){
        cout<<"enter no of subjects "<<endl;
        cin>>num_subjects;

        cout<<"enter name "<<endl;
        cin>>name;
        cout<<"roll num , marks respectively"<<endl;
        for (int i = 0; i <num_subjects; i++)
        {
            cin>>name[i];
            cin>>roll_num[i];
            cin>>marks[i];
        }
    }

        void display(){
        for(int i=0; i<num_subjects; i++){
            cout<<"name= "<<name<<endl;;
            for(int i= 0 ; i < num_subjects;i++){
            cout<<"roll num= "<<roll_num[i]<<" "<<" marks of subject "<<i << "= "<<marks[i]<<endl;
        }
        }
    }
};

int main()
{
    int num_students;
    cout << "Enter number of students: "<<endl;
    cin >> num_students;

    student*students= new student[num_students];

    for (int i = 0; i <num_students; i++)
    {
        students[i].getdata();
    }
    for (int i = 0; i <num_students; i++)
    {
        students[i].display();
    }
    
    delete[]students;
    return 0;
}

//manipulators
int main()
{
    int a=3,b=78,c=3445;
    cout<<"without setw "<<a<<endl;
    cout<<"without setw "<<b<<endl;
    cout<<"without setw "<<c<<endl;

    cout<<"with setw "<<setw(4)<<a<<endl;
    cout<<"with setw "<<setw(4)<<b<<endl;
    cout<<"with setw "<<setw(4)<<c<<endl;
    return 0;
}