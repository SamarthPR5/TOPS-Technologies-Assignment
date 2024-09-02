#include <iostream>
using namespace std;


template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapping (int):" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swapValues(x, y);

    cout << "After swapping (int):" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    double a = 9.5, b = 133.3;
    cout << "\nBefore swapping (double):" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapValues(a, b);

    cout << "After swapping (double):" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    char p = 'A', q = 'B';
    cout << "\nBefore swapping (char):" << endl;
    cout << "p = " << p << ", q = " << q << endl;

    swapValues(p, q);
    cout << "After swapping (char):" << endl;
    cout << "p = " << p << ", q = " << q << endl;
}
