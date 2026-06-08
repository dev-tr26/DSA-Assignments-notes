#include<iostream>
using namespace std;

int ADD(int a ,int b){
return a+b;}

float ADD(float c ,float d){
return c+d;}

int ADD(char e, char f){
return int(e)+int(f);}

int main(){
int a1=3,b1=4,sum,sum3;
sum= ADD(a1,b1);

float c1=6.56,d1=5.98,sum2;
sum2= ADD(c1,d1);

char e1='t',f1='r';
sum3= ADD(e1,f1);

cout<<"intgers sum= "<<sum<<endl;
cout<<"float number sum= "<<sum2<<endl;
cout<<"ascii values sum= "<<sum3<<endl;
return 0;}

/*
intgers sum= 7
float number sum= 12.54
ascii values sum= 230
*/