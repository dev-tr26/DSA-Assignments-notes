#include <iostream>
using namespace std;

// template<class T>
// class vector{
//     public:
//     T*arr;
//     int size;
//     vector(T m){
//         size=m;
//         arr= new T[size];
//     }

//     T dotProduct(vector&v){
//     T d=0;
//     for (int i = 0; i < size ; i++)
//     {
//         d+=this->arr[i]*v.arr[i];
//     }
//     return d;
// }
// };

// muiltiple parameters in template class

// template<class T1,class T2>
// class myClass{
//     public:
//     T1 data1;
//     T2 data2;
//     myClass(T1 a, T2 b){
//         data1 =a;
//         data2 =b;
//     }
//     void display(){
//         cout<<this->data1<<endl;
//         cout<<this->data2<<endl;    }
// };

// class template with default parameters

template <class T1 = int, class T2 = float, class T3 = char>
class rudra
{
public:
    T1 a;
    T2 b;
    T3 c;
    rudra(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
        cout << "c= " << c << endl;
    }

    template <class T>
void swap(T &o, T &p)
{
    T temp = o;
    o = p;
    p = temp;
}

//another wayto write
//void swap();
};

// template <class T>
// void classname<T> ::swap(){}

void func(int a){
    cout<<"i am 1st func" << a<<endl;
}

template <class T>
void func(T a){
    cout<<"i am templatised func"<<a<<endl;
}

int main()
{

    rudra<> obj(4, 6.5, 'r');
    obj.display();

    rudra<char, float, int> obj2('f', 9.4, 3);
    obj2.display();

    int f = 5, g = 9;
    swap(f, g);
    cout << "after swap:" << endl;
    cout << f << " " << g<<endl;

    func(4); //excat match takes highest priority
    
    //i.e when both same functions are overloaded same func will be executed jem k 4 is int  

    // myClass <int,char> obj(1,'s');
    // obj.display();

    // vector <int>v1(3);
    // v1.arr[0]=6;
    // v1.arr[1]=1;
    // v1.arr[2]=4;

    // vector <int>v2(3);
    // v2.arr[0]=1;
    // v2.arr[1]=3;
    // v2.arr[2]=2;

    // vector <float>v3(3);
    // v3.arr[0]=6.3;
    // v3.arr[1]=1.2;
    // v3.arr[2]=4.7;

    // vector <float>v4(3);
    // v4.arr[0]=1.7;
    // v4.arr[1]=3.0;
    // v4.arr[2]=2.5;

    // int a = v1.dotProduct(v2);
    // cout<<  a << endl;
    // float b = v3.dotProduct(v4);
    // cout <<  b << endl;
    return 0;
}