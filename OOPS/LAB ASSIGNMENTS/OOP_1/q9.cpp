#include<iostream>
using namespace std;

struct rectangle
{
float length;
float width;

void setvalue(float len ,float wid){
    length=len;
    width=wid;
}

void printvalue(){
    cout<<"length of rectangle= "<<length <<" width of rectangle "<<width<<endl;
}

void area(float len ,float wid){
    float area= len*wid;
    cout<<"area of rectangle= "<< area<<endl;
}

void perimeter(float len ,float wid){
    float peri=2*(len + wid);
    cout<<"perimeter of rectangle = "<<peri<<endl;
}
};

int main(){;
rectangle a1;
a1.setvalue(4.5,2.5);
a1.printvalue();
a1.area(4.5,2.5);
a1.perimeter(4.5,2.5);
return 0;
}
/*
length of rectangle= 4.5 width of rectangle 2.5
area of rectangle= 11.25
perimeter of rectangle = 14
*/