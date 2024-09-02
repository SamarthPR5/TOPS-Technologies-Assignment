#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zipcode;

public:
    Address(const string& str, const string& c, const string& st, const string& zip)
        : street(str), city(c), state(st), zipcode(zip) {}

    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipcode << endl;
    }
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;
    Address address;

public:
    Student(const string& n, const string& sClass, int rNo, float m, const Address& addr)
        : name(n), studentClass(sClass), rollNumber(rNo), marks(m), address(addr) {}

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    void displayStudentInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.displayAddress();
    }
};

int main() {
    Address studentAddress("I403 Anand Villa Apartment", "Surat", "Gujarat", "395005");
    Student student("Samarth Patodekar", "9th", 31, 95.5, studentAddress);

    student.displayStudentInfo();
}
