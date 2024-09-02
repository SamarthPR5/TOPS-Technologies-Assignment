#include <iostream>
using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double a, double b, double c) : side1(a), side2(b), side3(c) {}
    bool isEquilateral() const {
        return (side1 == side2 && side2 == side3);
    }

    bool isIsosceles() const {
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }

    bool isScalene() const {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }

    void displayType() const {
        if (isEquilateral()) {
            cout << "The triangle is Equilateral." << endl;
        } else if (isIsosceles()) {
            cout << "The triangle is Isosceles." << endl;
        } else if (isScalene()) {
            cout << "The triangle is Scalene." << endl;
        } else {
            cout << "Invalid triangle sides." << endl;
        }
    }
};

int main() {
    Triangle triangle1(12.0, 20.0, 5.0);
    Triangle triangle2(70.0, 70.0, 70.0);
    Triangle triangle3(9.0, 6.0, 23.0);

    cout << "Triangle 1: ";
    triangle1.displayType();

    cout << "Triangle 2: ";
    triangle2.displayType();

    cout << "Triangle 3: ";
    triangle3.displayType();
}
