#include<iostream>
using namespace std;

class Time{

int hh;
int mm;
int ss;

friend bool GreaterThan(Time &t1 ,Time & t2);
friend bool LessThan(Time &t1, Time &t2);
friend bool EqualTo(Time &t1, Time &t2);

public:
    Time(){
        hh=0;
        mm=0;
        ss=0;
    }
    Time(int h ,int m, int s){
        hh=h;
        mm=m;
        ss=s;
    }
    
    void displayTime()
    {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

bool GreaterThan(Time &t1 , Time &t2 ){
        if (t1.hh > t2.hh) {
            return true;
        }
        else if (t1.hh == t2.hh) {
            if (t1.mm > t2.mm) {
                return true;
            }
            else if (t1.mm == t2.mm) {
                return t1.ss > t2.ss;
            }
        }
        return false;
    }


bool LessThan(Time &t1 , Time &t2){
        if (t1.hh < t2.hh) {
            return true;
        }
        else if (t1.hh == t2.hh) {
            if (t1.mm < t2.mm) {
                return true;
            }
            else if (t1.mm == t2.mm) {
                return t1.ss < t2.ss;
            }
        }
        return false;
    }

bool EqualTo(Time &t1 , Time &t2){
        return(t1.hh==t2.hh && t1.mm==t2.mm && t1.ss==t2.ss);
    }

int main(){
    Time t1(21,17,46);
    Time t2(11,34,22);

    t1.displayTime();
    t2.displayTime();

    if (GreaterThan(t1, t2)) {
        cout << "t1 is greater than t2" << endl;
    } 
    else if (LessThan(t1, t2)) {
        cout << "t1 is less than t2" << endl;
    } 
    else if (EqualTo(t1, t2)) {
        cout << "t1 is equal to t2" << endl;
    }
    return 0;
}

/*
21:17:46
11:34:22
t1 is greater than t2
*/