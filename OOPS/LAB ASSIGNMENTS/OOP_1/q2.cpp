#include<iostream>
using namespace std;

void swapbyvalue(int r1,int r2){
int temp;
temp=r1;
r1=r2;
r2=temp;
}

void swapbyref(int &t1,int &t2){
int temp;
temp=t1;
t1=t2;
t2=temp;
}

void swapbypointer(int *x1,int *x2){
int temp;
temp=*x1;
*x1=*x2;
*x2=temp;
}


int main(){
int a=4,b=9;
swapbyvalue(a,b);
cout<<"after swap by val a= "<<a <<"b= "<<b<<endl;

swapbyref(a,b);
cout<<"after swap by ref a= "<<a <<"b= "<< b<<endl;

swapbypointer(&a,&b);
cout<<"after swap by pointer a= "<<a <<" b= "<<b<<endl;

return 0;}

/*
after swap by val a= 4b= 9
after swap by ref a= 9b= 4
after swap by pointer a= 4 b= 9
*/