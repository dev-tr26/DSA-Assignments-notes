#include<iostream>
using namespace std;

class Number
{
    int ones,tens,hundreds;
    friend Number postfix_add(Number &n1);
    friend Number postfix_sub(Number &n1);
    friend Number prefix_add(Number &n1);
    friend Number prefix_sub(Number &n1);

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

    void display(){
        cout<<hundreds<<tens<<ones;
    }
};

    Number postfix_add(Number &n){
            Number temp = n;
            // Number n(hundreds,tens,ones);
            n.ones++;
            if(n.ones==10){
                n.ones=0;
                n.tens++;
            }
            if(n.tens==10){
                n.tens=0;
                n.hundreds++;
            }
            return temp;
    }

    Number postfix_sub(Number &n){
            Number temp =n;
            // Number n(hundreds,tens,ones);
            n.ones--;
            if(n.ones<0){
                n.tens--;
                n.ones=9;
            }
            if(n.tens<0){
                n.hundreds--;
                n.tens=9;
            }
            return temp;
    }  

    Number prefix_add(Number &n){
            // Number n(hundreds,tens,ones);
            n.ones++;
            if(n.ones==10){
                n.ones=0;
                n.tens++;
            }
            if(n.tens==10){
                n.tens=0;
                n.hundreds++;
            }

            return n;
    }      

    Number prefix_sub(Number &n){
            // Number n(hundreds,tens,ones);
            n.ones--;
            if(n.ones< 0){
                n.ones= 9;
                n.tens--;
            }
            if(n.tens<0){
                n.tens=9;
                n.hundreds--;
            }
            return n;
    }



int main(){

    Number n1(1,9,9);
    Number n4(1,3,1);
    Number n2(3,9,9);
    Number n3(2,4,1);
    Number n;

    cout<<"prefix"<<endl;
    n=prefix_add(n2);
    n2.display();
    cout<<endl;
    
    n=prefix_sub(n3);
    n3.display();
    cout<<endl;

    cout<<"postfix"<<endl;
    n1.display();
    cout<<endl;

    n=postfix_add(n1);
    n1.display();

    cout<<endl;

    n4.display();
    cout<<endl;
    n=postfix_sub(n4);
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