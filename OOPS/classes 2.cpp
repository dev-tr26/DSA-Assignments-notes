#include<bits/stdc++.h>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void setdata(int v1,int v2){
            a=v1;
            b=v2;
        }

        void setdata_by_sum(complex o1,complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void print_num(){
            cout<< "your complex num is" << a << "+i" << b << endl;
        }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c3.setdata_by_sum(c1,c2);
    c3.print_num();
    
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

class complex1 {
    int a;
    int b;

    public:
        void setdata(int v1,int v2){
            a=v1;
            b=v2;
        }

        void setdata_by_sum(complex1 o1 , complex1 o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void print_num(){
            cout<< "Your complex number is " << a << "+" << b <<"i" << endl;
        }
};

int main()
{
    complex1 c1,c2,c3;
    c1.setdata(1,2);
    c1.print_num();

    c2.setdata(3,4);
    c2.print_num();

    c3.setdata_by_sum(c1,c2);
    c3.print_num();  
    
    return 0;
}
