#include <iostream>
#include <stdexcept>

double operate(double a, double b) {
    return a + b;
}

double operate(double a, double b, char operation) {
    switch (operation) {
        case '-':
            return a - b;
        default:
            throw std::invalid_argument("Invalid operation for this function.");
    }
}
double operate(double a, double b, int multiplier) {
    return a * b;
}
double operate(double a, double b, bool divide) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}
int main() {
    double num1, num2;
    char op;
    int multiplier;
    bool divide;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Addition result: " << operate(num1, num2) << std::endl;

    std::cout << "Enter operation for subtraction (use '-'): ";
    std::cin >> op;
    try {
        std::cout << "Subtraction result: " << operate(num1, num2, op) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Enter an integer multiplier for multiplication: ";
    std::cin >> multiplier;
    std::cout << "Multiplication result: " << operate(num1, num2, multiplier) << std::endl;

    std::cout << "Perform division? (1 for yes, 0 for no): ";
    std::cin >> divide;
    if (divide) {
        try {
            std::cout << "Division result: " << operate(num1, num2, divide) << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    } else {
        std::cout << "Division not performed." << std::endl;
    }

}
