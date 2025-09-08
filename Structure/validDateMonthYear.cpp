#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

// Leap year check function
bool isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return true;
    return false;
}

// Date validation function
bool isValidDate(Date d) {
    if (d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1)
        return false;

    int daysInMonth;

    switch (d.month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if (isLeapYear(d.year))
                daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
        default:
            return false;
    }

    if (d.day > daysInMonth)
        return false;

    return true;
}

int main() {
    Date d;

    cout << "Enter date (DD MM YYYY): ";
    cin >> d.day >> d.month >> d.year;

    if (isValidDate(d)) {
        cout << "✅ The date is valid." << endl;
    } else {
        cout << "❌ The date is invalid." << endl;
    }

    return 0;
}
