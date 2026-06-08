#include<iostream>
using namespace std;

class Time{

int hh;
int mm;
int ss;
public:

    Time(){
        hh=0;
        mm=0;
        ss=0;
    }

    Time(int h, int m ,int s){
        hh=h;
        mm=m;
        ss=s;
    }

    void displayTime()
    {
        cout << hh << ":" << mm << ":" << ss << endl;
    }

bool operator>(const Time &t){
        if (hh > t.hh) {
            return true;
        }
        else if (hh == t.hh) {
            if (mm > t.mm) {
                return true;
            }
            else if (mm == t.mm) {
                return ss > t.ss;
            }
        }
        return false;
    }


bool operator<(const Time &t){
        if (hh < t.hh) {
            return true;
        }
        else if (hh == t.hh) {
            if (mm < t.mm) {
                return true;
            }
            else if (mm == t.mm) {
                return ss < t.ss;
            }
        }
        return false;
    }

bool operator==(const Time &t){
        if(hh==t.hh && mm==t.mm && ss==t.ss){
            return true;
        }
    }
};

int main(){
    Time t1(13,43,56);
    Time t2(13,43,55);

    t1.displayTime();
    t2.displayTime();

    if(t1 > t2){
        cout<<"t1 is greater than t2";
    }
    else if(t1<t2){
        cout<<"t2 is greater than t1"<<endl;
    }
    else if(t1==t2){
        cout<<"t1 = t2"<<endl;
    }

    return 0;
}

/*
13:43:56
13:43:55
t1 is greater than t2
*/