#include <iostream>
using namespace std;

class Calendar {
    int day, month, year; 

public:
    void setDate(int dd = 1, int mm = 12, int yyyy = 2025) {
        day = dd;
        month = mm;
        year = yyyy;
    }
    bool isLeap() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    int maxDays() {
        if (month == 2) return isLeap() ? 29 : 28;
        if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
        return 31;
    }
    bool valideDate() {
        return (month >= 1 && month <= 12 && day >= 1 && day <= maxDays());
    }
    int dayOfWeek() {
        return (day % 7); 
    }
    void printCalendar() {
        if (!valideDate()) {
            cout << "Invalid Date!" << endl;
            return;
        }
        cout << "Date: " << day << "/" << month << "/" << year << endl;
        cout << "Leap Year? " << (isLeap() ? "Yes" : "No") << endl;
        cout << "Days in Month: " << maxDays() << endl;
        cout << "Day of Week (simple): " << dayOfWeek() << endl;
    }
};

int main() {
    Calendar c;
    c.setDate(); 
    c.printCalendar();
    cout << endl;
    // c.setDate(15, 8, 2024); 
    // c.printCalendar();
}

