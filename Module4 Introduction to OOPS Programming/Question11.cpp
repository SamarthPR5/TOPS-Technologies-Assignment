#include <iostream>
using namespace std;

class ArithmeticOperations {
private:
    double num1;
    double num2;

public:
    ArithmeticOperations(double a, double b) : num1(a), num2(b) {}


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
       return num1/num2;
    }
};

int main() {
    ArithmeticOperations calc(50.0, 1.0);
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;
}
