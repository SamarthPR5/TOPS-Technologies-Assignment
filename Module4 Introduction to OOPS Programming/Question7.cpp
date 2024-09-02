#include <iostream>

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void setRadius(double r)
    {
        radius = r;
    }

    double getRadius() const
    {
        return radius;
    }

    double calculateArea() const
    {
        return 3.14 * radius * radius;
    }

    double calculateCircumference() const
    {
        return 2 * 3.14 * radius;
    }

    void display() const
    {
        std::cout << "Circle with radius: " << radius << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
        std::cout << "Circumference: " << calculateCircumference() << std::endl;
    }
};

int main()
{
    Circle myCircle(5.0);
    myCircle.display();
    myCircle.setRadius(10.0);
    myCircle.display();
}
