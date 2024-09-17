#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int getDaysInMonth(int year, int month) {
    if (month == 2) { 
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; 
    } else {
        return 31; 
    }
}
int main() {
    int year, month;
    cout << "Input Year: ";
    cin >> year;
    cout << "Input Month: ";
    cin >> month;
    if (month < 1 || month > 12) {
        cout << "Invalid month!" << endl;
        return 1;
    }
    int days = getDaysInMonth(year, month);
    cout << "Number of days of the year " << year << " and month " << month << " is: " << days << endl;
    return 0;
}
