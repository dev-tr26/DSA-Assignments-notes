#include<iostream>
using namespace std;

class Number
{
    int ones,tens,hundreds;
public:

    Number(){
        hundreds =0;
        tens=0;
        ones=0;
    }

    Number(int h,int t,int o){
        hundreds=h;
        tens=t;
        ones=o;
    }

    Number operator++(int){
            Number n(hundreds,tens,ones);
            ones++;
            if(ones==10){
                ones=0;
                tens++;
            }
            if(tens==10){
                tens=0;
                hundreds++;
            }
            return n;
    }

    Number operator--(int){
            Number n(hundreds,tens,ones);
            ones--;
            if(ones<0){
                tens--;
                ones=9;
            }
            if(tens<0){
                hundreds--;
                tens=9;
            }
            return n;
    }

    Number operator++(){
            Number n(hundreds,tens,ones);
            n.ones++;
            if(n.ones==10){
                n.ones=0;
                n.tens++;
            }
            if(n.tens==10){
                n.tens=0;
                n.hundreds++;
            }
            ones=n.ones;
            tens=n.tens;
            hundreds=n.hundreds;
            return n;
    }

    Number operator--(){
            Number n(hundreds,tens,ones);
            n.ones--;
            if(n.ones< 0){
                n.ones= 9;
                n.tens--;
            }
            if(n.tens<0){
                n.tens=9;
                n.hundreds--;
            }
            ones=n.ones;
            tens=n.tens;
            hundreds=n.hundreds;
            return n;
    }

    void display(){
        cout<<hundreds<<tens<<ones;
    }
};

int main(){
    Number n1(1,9,9);
    Number n4(1,3,1);
    Number n2(3,9,9);
    Number n3(2,4,1);

    cout<<"prefix"<<endl;
    ++n2;
    n2.display();
    cout<<endl;
    
    --n3;
    n3.display();
    cout<<endl;

    cout<<"postfix"<<endl;
    n1.display();
    cout<<endl;

    n1++;
    n1.display();

    cout<<endl;

    n4.display();
    cout<<endl;
    n4--;
    n4.display();
    return 0;
}

/*
prefix
400
240
postfix
199
200
131
130
*/