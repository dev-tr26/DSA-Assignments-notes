#include<iostream>
using namespace std;

class Vector{
int n;
int*arr;
public:

Vector(int dimension){
    n=dimension;
    arr= new int[n];
}
Vector(){
n = 0;
arr = NULL;
}

Vector(Vector &v){
    n=v.n;
    arr =new int[n];
    for (int i = 0; i <n; i++)
    {
        arr[i]=v.arr[i];
    }
}

void setdata(){
    cout<<"enter vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

Vector add(Vector &v){
    Vector addition(n);
    for(int i=0;i<n ;i++){
        addition.arr[i] = arr[i] + v.arr[i];
    }
    return addition;
}

Vector operator+(const Vector &v ){
    Vector addition(n);
    for(int i=0;i<n ;i++){
        addition.arr[i] = arr[i] + v.arr[i];
    }
    return addition;
}

Vector sub(Vector&v){
    Vector subtr(n);
    for (int i = 0; i <n; i++)
    {
        subtr.arr[i]=arr[i]-v.arr[i];
    }
    return subtr;
}

Vector operator-(const Vector &v ){
    Vector subtr(n);
    for (int i = 0; i <n; i++)
    {
        subtr.arr[i]=arr[i]-v.arr[i];
    }
    return subtr;
}

Vector mul(Vector&v){
    Vector multi(n);
    for (int i = 0; i <n; i++)
    {
        multi.arr[i]=arr[i] * v.arr[i];
    }
    return multi;
}

Vector operator*(const Vector &v ){
    Vector multi(n);
    for (int i = 0; i <n; i++)
    {
        multi.arr[i]=arr[i] * v.arr[i];
    }
    return multi;
}

void getdata(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main(){
    Vector v1(3),v2(3),v3;
    v1.setdata();
    v1.getdata();
    v2.setdata();

    cout<<"addition"<<endl;
    v3=v1.add(v2);
    v3.getdata();
    
    cout<<"sub "<<endl;
    v3=v1.sub(v2);
    v3.getdata();

    cout<<"mul"<<endl;
    v3=v1.mul(v2);
    v3.getdata();

    cout<<"using operator overloading " <<endl;
    v3=v1+v2;
    v3.getdata();

    v3=v1-v2;
    v3.getdata();

    v3=v1*v2;
    v3.getdata(); 
    return 0;
}


/*
enter vector
1
2
3
1 2 3
enter vector
4
5
6
addition
5 7 9
sub
-3 -3 -3
mul
4 10 18
using operator overloading
5 7 9
-3 -3 -3
4 10 18

*/