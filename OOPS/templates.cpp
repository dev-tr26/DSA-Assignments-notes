#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template< class T>
class Vector{
    public:
    T*arr;
    T size;
        Vector(int m){
            size = m ;
            arr = new T[size];
        }
    T dotProduct(Vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
            return d;
    }
};

int main()
{
    Vector <int>v1(3);
    v1.arr[0]=4;
    v1.arr[1]=2;
    v1.arr[2]=3;

    Vector <int>v2(3);
    v2.arr[0]=1;
    v2.arr[1]=1;
    v2.arr[2]=1;

    int a = v1.dotProduct(v2);
    cout<< a<<" ";
    return 0;
}

// class templates muiltiple parameters

template<class T1 ,class T2 , class T3>
class myClass{
    public:
        T1 data1;
        T2 data2;
        T3 data3;   // more than one data types can be passed

    myClass(T1 a, T2 b, T3 c){
        data1 =a;
        data2 =b;
        data3 =c;
    }
    void display(){
        cout<<this->data1<<endl;
        cout<<this->data2<<endl;
        cout<<this->data3<<endl;
    }
};


int main(){
    myClass <int,float,char> obj(1, 3.456 ,'t');
    obj.display();
    return 0;
}


// default parameters in templates ke kai specify na kairu hoi while creation of obj to aa use karvana

template<class T1 = int , class T2 = float>
class Harry{
    public:
        T1 data1;
        T2 data2;
    
    Harry(T1 c ,T2 r){
        data1 =c;
        data2 = r;
    }

    void display(){
        cout<<data1<<" "<<data2;
    }
};

int main(){

    Harry <>h1(2, 5.54);
    h1.display();

    cout <<endl;
    Harry <char,char>h2('T','R');
    h2.display();

    return 0;
}

// function templates 

template<class T1 ,class T2>
float funAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a , T&b){
    T temp =a;
    a=b;
    b=temp;
}

int main(){
    float a;
    int x =56;
    int y =653;
    swapp(x,y);
    cout <<x <<endl;
    a = funAvg(5,4.5);
    cout<<a;
    return 0;
}



