#include <iostream>
using namespace std;


inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    int product = multiply(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
    int number;
    cout << "Enter a number to find its cube: ";
    cin >> number;
    int cubicValue = cube(number);
    cout << "The cube of " << number << " is " << cubicValue << endl;

}
