#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;
    int sec;

public:
    void setTime(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    Time addTime(Time t1)
    {
        Time t;
        t.setTime(0, 0, 0);
        t.sec = sec + t1.sec;
        if (t.sec >= 60)
        {
            t.sec -= 60;
            t.min++;

            t.min = min + t1.min;
            if (t.min >= 60)
            {
                t.min -= 60;
                t.hr++;
            }


        }t.hr = hr + t1.hr;
        return t;
    }

    void displayTime()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.setTime(18, 23, 25);
    t2.setTime(12, 33, 23);

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
30:0:48
*/