#include<iostream>
using namespace std;

class DateTime{

int year,month,day,hh,mm,ss;

public:
    DateTime(int year ,int month,int day){
        year=1970;
        month=1;
        day=1;
        hh=0;
        mm=0;
        ss=0;
    }
        bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

int daysInMonth(int month, int year) {
    if (month == 2) { 
        if (isLeapYear(year)) {
            return 29; 
        } else {
            return 28; 
        }
    }

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }

    return 31;
    }

    long long toUnixTime() {
        long long totalSec = 0;

        for (int y = 1970; y < year; ++y) {
            totalSec += isLeapYear(y) ? 366 * 24 * 3600 : 365 * 24 * 3600;
        }
        for (int m = 1; m < month; ++m) {
            totalSec += daysInMonth(m, year) * 24 * 3600;
        }
        totalSec += (day - 1) * 24 * 3600;
        totalSec += hh * 3600 + mm * 60 + ss;
        return totalSec;
    }    
    
    DateTime fromUnixTime(long long unixTime) {
    int y = 1970;
    int m = 1;  
    int d = 1;  
    int h = 0;   
    int min = 0;  
    int s = 0;    

    long long secondsInYear;

if (isLeapYear(y)) {
    secondsInYear = 366 * 24 * 3600; 
} else {
    secondsInYear = 365 * 24 * 3600; 
}

while (unixTime >= secondsInYear) {
    unixTime -= secondsInYear;
    y++;
    if (isLeapYear(y)) {
        secondsInYear = 366 * 24 * 3600; 
    } else {
        secondsInYear = 365 * 24 * 3600;
    }
}
    return DateTime(y, m, d, h, min, s);
}


    void display(){
        cout<< day<<"-"<<month<<"-"<<year<<" "<<hh<<":"<<mm<<":"<<ss<<endl;
    }
};

int main(){
    DateTime dt(2024, 10, 18, 12, 30, 45);
    cout << "date time of present";
    dt.display();

    long long unixTime = dt.toUnixTime();
    cout << "Unix Time: " << unixTime << " total seconds since 1 Jan 1970"<<endl;

    DateTime dtFromUnix;
    dtFromUnix = dtFromUnix.fromUnixTime(unixTime);
    cout << "Converted back to DateTime: ";
    dtFromUnix.display();
    return 0;
}