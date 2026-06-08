#include <iostream>
using namespace std;

class Time
{
    int hrs;
    int mins;
    int secs;

public:
    Time(){
        hrs=0;
        mins=0;
        secs=0;
    }
    Time(int h, int m, int s)
    {
        hrs = h;
        mins = m;
        secs = s;
    }

    Time addTime(const Time &t1)
    {
        Time t(0,0,0);
        t.secs = secs + t1.secs;
        if (t.secs >= 60)
        {
            t.secs -= 60;
            t.mins++;
        }
            t.mins = mins + t1.mins;
            if (t.mins >= 60)
            {
                t.mins -= 60;
                t.hrs++;
            }
        t.hrs = hrs + t1.hrs;
        return t;}

    void displayTime()
    {
        cout << hrs << ":" << mins << ":" << secs << endl;
    }
    
    };

int main()
{
    Time t3;
    Time t1(18, 23, 25);
    Time t2(12, 33, 23);

    cout<<"time 1:"<<endl;
    t1.displayTime();

    cout<<"time2"<<endl;
    t2.displayTime();

    t3 = t1.addTime(t2);
    cout<<"sum= "<<endl;
    t3.displayTime();
    return 0;
}
/*
time 1:
18:23:25
time2
12:33:23
sum=
30:56:48
*/