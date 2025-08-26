#include<bits/stdc++.h>
using namespace std;

//arrays in class

class shop{
    int itemID[100];
    int itemprice[100];
    int counter;

    public:
        void initCounter(void){counter = 0;}
        void setprice(void);
        void displayprice(void);
};

void shop :: setprice(void){
    cout<<"enter the item ID "<< counter << endl;
    cin>>itemID[counter];
    cout<<"enter the price of item" <<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop :: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
            cout<< "the price of item having item id " << itemID[i] << " is " <<  itemprice[i] <<endl;;
    }
}

int main()
{
    shop fruits_veggie;
    fruits_veggie.initCounter();
    fruits_veggie.setprice();
    fruits_veggie.setprice();
    fruits_veggie.setprice();
    fruits_veggie.setprice();
    fruits_veggie.displayprice();

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// //forward declaration

// // class c2;

// // class c1
// // {
// //     int val;
// //     friend void exchange(c1 &, c2 &);
// // public:
// //     void indata(int f)
// //     {
// //         val = f;
// //     }
// //     void display()
// //     {
// //         cout << val << endl;
// //     }
// // };

// // class c2
// // {
// //     int val2;
// //     friend void exchange(c1 &, c2 &);

// // public:
// //     void indata(int a)
// //     {
// //         val2 = a;
// //     }

// //     void display()
// //     {
// //         cout << val2 << endl;
// //     }
// // };

// // void exchange(c1 &x, c2 &y)
// // {
// //     int tmp = x.val;
// //     x.val = y.val2;
// //     y.val2 = tmp;
// // }

// // int main()
// // {
// //     c1 oc1;
// //     c2 oc2;

// //     oc1.indata(34);
// //     oc2.indata(98);

// //     cout<<"before exchange c1= ";
// //     oc1.display();
// //     cout<< "and c2= ";
// //     oc2.display();

// //     exchange(oc1, oc2);

// //     cout << "value of c1 after swap is ";
// //     oc1.display();

// //     cout << "value of c after swap is ";
// //     oc2.display();

// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// class swapnum{
//     int a,b;
//     public:

//         void setvalues(int x,int y){
//             a=x;
//             b=y;
//         }

//         void swap1(){
//             a = a+b;
//             b = a-b;
//             a = a-b;
//         }
//         void display(){
//             cout<<"after swap: a= "<< a << " ,b= " << b <<endl;
//         }
// };

// int main(){
//     swapnum r;

//     r.setvalues(2,6);
//     cout<<"before swap: a= ";
//     r.display();

//     r.swap1();
    
//     cout<<" after swap ";
//     r.display();

//     return 0;
// }

class parent{
    public:
    void getinfo(){
        cout<<"parent class.\n";
    }
    virtual void hello(){
        cout<<"hello from parent\n";
    }
};

class child : public parent{
    public:
        void getinfo(){
            cout<<"child class \n";
        }
        void hello(){
            cout<<"hello from child\n";
        }
};

int main(){
    child c1;
    c1.getinfo();
    c1.hello();

    parent p1;
    p1.getinfo();
    p1.hello();
    return 0;
}