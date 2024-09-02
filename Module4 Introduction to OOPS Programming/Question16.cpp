#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int year) const {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }

    bool isValidDay(int day, int month, int year) const {
        // Check for valid month
        if (month < 1 || month > 12) {
            return false;
        }

        int daysInMonth[] = {31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        return (day > 0 && day <= daysInMonth[month - 1]);
    }

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {
        if (!isValidDay(day, month, year)) {
            throw invalid_argument("Invalid date.");
        }
    }

    void setDate(int d, int m, int y) {
        if (isValidDay(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date provided. Date not set." << endl;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void displayDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    try {
        Date myDate(20, 7, 2024);


        cout << "Initial Date: ";
        myDate.displayDate();

        myDate.setDate(15, 8, 2024);
        cout << "Updated Date: ";
        myDate.displayDate();

        myDate.setDate(31, 2, 2023);
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
}
