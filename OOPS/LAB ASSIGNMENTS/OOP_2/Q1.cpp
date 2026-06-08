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

    Complex sumComplex(Complex &c1){
        Complex c;
        c.real=real+c1.real;
        c.imaginary=imaginary+c1.imaginary;
        return c;
    }

    Complex operator+(const Complex &c1){
        Complex c;
        c.real = real + c1.real;
        c.imaginary = imaginary + c1.imaginary;
        return c;
    }

    Complex subComplex(Complex &c1){
        Complex c;
        c.real = real-c1.real;
        c.imaginary= imaginary-c1.imaginary;
        return c;
    }

    Complex operator-(const Complex &c1){
        Complex c;
        c.real = real - c1.real;
        c.imaginary = imaginary - c1.imaginary;
        return c;
    }

    Complex mulComplex(Complex &c1){
        Complex c;
        c.real = (real*c1.real )- (imaginary *c1.imaginary);
        c.imaginary= (real*c1.imaginary)+ (imaginary *c1.real);
        return c;
    }

    Complex operator*(const Complex &c1){
        Complex c;
        c.real = (real * c1.real) - (imaginary * c1.imaginary);
        c.imaginary = (real * c1.imaginary) + (imaginary * c1.real);
        return c;
    }

    void conjugateComplex(){
        if(imaginary>=0){
            cout<<real<<"-"<<imaginary<<"i"<<endl;
        }
        else{
            cout<<real<<"+"<<-imaginary<<"i"<<endl;
        }
    }

    void displayComplex(){
        cout<<real;

        if(imaginary>=0){
            cout<<"+"<<imaginary<<"i"<<endl;
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

    c1.displayComplex();
    c2.displayComplex();

    c3 =c1.sumComplex(c2);
    c3.displayComplex();

    c3 =c1.subComplex(c2);
    c3.displayComplex();

    c3 =c1.mulComplex(c2);
    c3.displayComplex();

    c1.conjugateComplex();
    c2.conjugateComplex();

    cout<<"using operator overloading " <<endl;
    c3=c1+c2;
    c3.displayComplex();

    c3=c1-c2;
    c3.displayComplex();

    c3=c1*c2;
    c3.displayComplex();
    return 0;
}

/*
2+3i
7+5i
9+8i
-5-2i
-1+31i
2-3i
7-5i
using operator overloading
9+8i
-5-2i
-1+31i
*/