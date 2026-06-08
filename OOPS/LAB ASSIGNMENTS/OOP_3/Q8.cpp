#include<iostream>
using namespace std;

class Complex{
    float real;
    float imaginary;

    friend Complex SumComplex(Complex &c1,Complex &c2);
    friend Complex SubComplex(Complex &c1,Complex &c2);
    friend Complex MulComplex(Complex &c1,Complex &c2);
    friend Complex DivComplex(Complex &c1,Complex &c2);

    public:
    void setComplex(float r,float i){
        real=r;
        imaginary=i;
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

    Complex SumComplex(Complex &c1,Complex &c2){
        Complex c;
        c.real=c1.real+c2.real;
        c.imaginary=c1.imaginary+c2.imaginary;
        return c;
    }

    Complex SubComplex(Complex &c1,Complex &c2){
        Complex c;
        c.real = c1.real-c2.real;
        c.imaginary= c1.imaginary-c2.imaginary;
        return c;
    }

        Complex MulComplex(Complex &c1,Complex &c2){
        Complex c;
        c.real = (c1.real*c2.real )- (c1.imaginary *c2.imaginary);
        c.imaginary= (c1.real*c2.imaginary)+ (c1.imaginary *c2.real);
        return c;
    }

        Complex DivComplex(Complex &c1,Complex &c2){
        Complex c;
        c.real = ((c1.real * c2.real) + (c1.imaginary * c2.imaginary))/(c2.real*c2.real + c2.imaginary*c2.imaginary);
        c.imaginary =((c1.imaginary * c2.real) - (c1.real * c2.imaginary))/(c2.real*c2.real + c2.imaginary*c2.imaginary);
        return c;
    }

int main()
{
    Complex c1,c2,c3; 
    c1.setComplex(2,3);
    c2.setComplex(7,5);

    c3=SumComplex(c1,c2);
    c3.displayComplex();

    c3=SubComplex(c1,c2);
    c3.displayComplex();

    c3=MulComplex(c1,c2);
    c3.displayComplex();

    c3=DivComplex(c1,c2);
    c3.displayComplex();    
    return 0;
}

/*
9+ 8i
-5-2i
-1+ 31i
0.391892+ 0.148649i
*/