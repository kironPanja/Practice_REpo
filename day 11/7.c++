#include <iostream>
using namespace std;

void printCalendar(int day = 1, int month = 12, int year = 2025) {
    cout << "-------------------------" << endl;
    cout << "      Calendar Date      " << endl;
    cout << "-------------------------" << endl;
    cout << "Day   : " << day << endl;
    cout << "Month : " << month << endl;
    cout << "Year  : " << year << endl;
    cout << "-------------------------" << endl;
}

int main() {
    cout << "Default Calendar:" << endl;
    printCalendar();
//     cout << "\nCustom Calendar:" << endl;
//     int d, m, y;
//     cout << "Enter Day: ";
//     cin >> d;
//     cout << "Enter Month: ";
//     cin >> m;
//     cout << "Enter Year: ";
//     cin >> y;
//     printCalendar(d, m, y);
}

