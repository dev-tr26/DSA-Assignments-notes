#include<iostream>
using namespace std;

class complex{
int real;
int img;
public:

void setNum(int r,int i){
real=r;
img=i;
}


complex add(complex c1){
complex c;
c.real =real+c1.real;
c.img =img+c1.img;
return c;
}

complex sub(complex c1){
complex c;
c.real =real-c1.real;
c.img =img-c1.img;
return c;
}

complex mul(complex c1){
complex c;
c.real = (real * c1.real) - (img * c1.img);
c.img = (real * c1.img) + (img * c1.real);
return c;
}

void printNum(){cout<< real <<"+ "<< img <<"i"<<endl;
}
};

int main(){
complex c1,c2,c3,c4,c5;
c1.setNum(4,9);
c2.setNum(3,2);
c1.printNum();
c2.printNum();

cout<<endl;

c4=c1.add(c2);
c4.printNum();
c5=c1.sub(c2);
c5.printNum();
c3=c1.mul(c2);
c3.printNum();
}
/*
4+ 9i
3+ 2i

7+ 11i
1+ 7i
12+ 18i
*/