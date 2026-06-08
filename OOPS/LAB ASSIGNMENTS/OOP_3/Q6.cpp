#include<iostream>
using namespace std;

class DateTime {

    int year, month, day, hh, mm, ss;

public:
    
DateTime(int y, int mo, int d, int h = 0, int mi = 0, int s = 0) {
    year = y;
    month = mo;
    day = d;
    hh = h;
    mm = mi;
    ss = s;
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
        int y = 1970, m = 1, d = 1, h = 0, min = 0, s = 0;


        while (true) {
            long long secondsInYear = isLeapYear(y) ? 366 * 24 * 3600 : 365 * 24 * 3600;
            if (unixTime < secondsInYear) break;
            unixTime -= secondsInYear;
            y++;
        }

        while (true) {
            int daysInCurrentMonth = daysInMonth(m, y);
            if (unixTime < daysInCurrentMonth * 24 * 3600) break;
            unixTime -= daysInCurrentMonth * 24 * 3600;
            m++;
        }

        d += unixTime / (24 * 3600);
        unixTime %= (24 * 3600);

        h = unixTime / 3600;
        unixTime %= 3600;
        min = unixTime / 60;
        s = unixTime % 60;

        return DateTime(y, m, d, h, min, s);
    }

    void display() {
        cout << day << "-" << month << "-" << year << " "<< hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    DateTime dt(2024, 10, 18, 12, 30, 45);
    cout << "Original DateTime: ";
    dt.display();

    long long unixTime = dt.toUnixTime();
    cout << "Unix Time: " << unixTime << " seconds since 1 Jan 1970" << endl;
    
    DateTime dtFromUnix = dtFromUnix.fromUnixTime(unixTime); 
    cout << "Converted back to DateTime: ";
    dtFromUnix.display();

    return 0;
}
/*
Original DateTime: 18-10-2024 12:30:45
Unix Time: 1729254645 seconds since 1 Jan 1970
Converted back to DateTime: 18-10-2024 12:30:45
*/