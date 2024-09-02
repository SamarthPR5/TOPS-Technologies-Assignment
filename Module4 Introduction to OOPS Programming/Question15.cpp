#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(const string& empName, int empID, double initialSalary)
        : name(empName), employeeID(empID), salary(initialSalary) {}

    void calculateSalary(double performanceRating) {
        if (performanceRating < 0 || performanceRating > 5) {
            cout << "Performance rating must be between 0 and 5." << endl;
            return;
        }

        double incrementPercentage = 0.0;

        if (performanceRating >= 4.5) {
            incrementPercentage = 0.20;
        } else if (performanceRating >= 3.5) {
            incrementPercentage = 0.10;
        } else if (performanceRating >= 2.5) {
            incrementPercentage = 0.05;
        } else {
            incrementPercentage = 0.0;
        }

        salary += salary * incrementPercentage;
    }

    void displayDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main() {
    Employee emp("Samarth Patodekar", 1, 600000.00);

    cout << "Initial Employee Details:" << endl;
    emp.displayDetails();

    double performanceRating;
    cout << "Enter performance rating (0 to 5): ";
    cin >> performanceRating;
    
    emp.calculateSalary(performanceRating);

    cout << "\nUpdated Employee Details:" << endl;
    emp.displayDetails();

}
