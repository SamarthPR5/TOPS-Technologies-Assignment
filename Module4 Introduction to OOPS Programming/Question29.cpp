#include <iostream>
using namespace std;
class SwapHelper;

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    friend void swapNumbers(Number& num1, Number& num2);
    void displayValue() const {
        cout << "Value: " << value << endl;
    }
};

void swapNumbers(Number& num1, Number& num2) {
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() {
    Number num1(23);
    Number num2(33);

    cout << "Before swapping:" << endl;
    cout << "Number 1: ";
    num1.displayValue();
    cout << "Number 2: ";
    num2.displayValue();
    swapNumbers(num1, num2);
    cout << "\nAfter swapping:" << endl;
    cout << "Number 1: ";
    num1.displayValue();
    cout << "Number 2: ";
    num2.displayValue();
}
