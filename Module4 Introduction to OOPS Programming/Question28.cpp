#include <iostream>

double calculateArea(double length, double breadth) {
    return length * breadth;
}

double calculateArea(double base, double height, bool isTriangle) {
    if (isTriangle) {
        return 0.5 * base * height;
    }
}

double calculateArea(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    double length, breadth, base, height, radius;

    std::cout << "Enter length and breadth of rectangle: ";
    std::cin >> length >> breadth;
    std::cout << "Area of rectangle: " << calculateArea(length, breadth) << std::endl;

    std::cout << "Enter base and height of triangle: ";
    std::cin >> base >> height;
    std::cout << "Area of triangle: " << calculateArea(base, height, true) << std::endl;

    std::cout << "Enter radius of circle: ";
    std::cin >> radius;
    std::cout << "Area of circle: " << calculateArea(radius) << std::endl;
}
