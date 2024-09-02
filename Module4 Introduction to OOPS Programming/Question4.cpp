#include <iostream>
using namespace std;

class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator(double a = 0, double b = 0) : num1(a), num2(b) {}
    void setNumbers(double a, double b) {
        num1 = a;
        num2 = b;
    }

    double add() const {
        return num1 + num2;
    }

    double subtract() const {
        return num1 - num2;
    }

    double multiply() const {
        return num1 * num2;
    }

    double divide() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    void displayResults() const {
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }
};

int main() {
    double a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    Calculator calc(a, b);
    cout << "\nResults:" << endl;
    calc.displayResults();

}
