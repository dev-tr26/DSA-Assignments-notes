#include<iostream>
using namespace std;

class Complex{
    float real;
    float imaginary;

    public:
    void setComplex(float r,float i){
        real=r;
        imaginary=i;
    }

    Complex operator+(const Complex &c1){
        Complex c;
        c.real = real + c1.real;
        c.imaginary = imaginary + c1.imaginary;
        return c;
    }

    Complex operator-(const Complex &c1){
        Complex c;
        c.real = real - c1.real;
        c.imaginary = imaginary - c1.imaginary;
        return c;
    }

    Complex operator*(const Complex &c1){
        Complex c;
        c.real = (real * c1.real) - (imaginary * c1.imaginary);
        c.imaginary = (real * c1.imaginary) + (imaginary * c1.real);
        return c;
    }

     Complex operator/(const Complex &c1){
        Complex c;
        c.real = ((real * c1.real) + (imaginary * c1.imaginary))/(c1.real*c1.real + c1.imaginary*c1.imaginary);
        c.imaginary =((imaginary * c1.real) - (real * c1.imaginary))/(c1.real*c1.real + c1.imaginary*c1.imaginary);
        return c;
    }
    
    void displayComplex(){
        cout<<real;

        if(imaginary>=0){
            cout<<"+"<<" "<<imaginary<<"i"<<endl;
        }
        else{
            cout<<imaginary<<"i"<<endl;
        }
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setComplex(2,3);
    c2.setComplex(7,5);

    c3=c1+c2;
    c3.displayComplex();

    c3=c1-c2;
    c3.displayComplex();

    c3=c1*c2;
    c3.displayComplex();

    c3=c1/c2;
    c3.displayComplex();    
    return 0;
}

/*
9 + 8i
-5 - 2i
-1 + 31i
0.391892 + 0.148649i
*/