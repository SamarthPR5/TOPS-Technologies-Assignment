#include <iostream>
using namespace std;

class MaxFinder; 

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}
    friend int findMax(const Number& num1, const Number& num2);
};

int findMax(const Number& num1, const Number& num2) {
    return (num1.value > num2.value) ? num1.value : num2.value;
}

int main() {
    Number num1(34);
    Number num2(934);

    int max = findMax(num1, num2);
    cout << "The maximum value is: " << max << endl;
}
