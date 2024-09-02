#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w = 0, double h = 0) : width(w), height(h) {}
    virtual double calculateArea() const = 0;
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w = 0, double h = 0) : Shape(w, h) {}

    double calculateArea() const override {
        return width * height;
    }

    void display() const {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;
    double width, height;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << "Enter height of the rectangle: ";
    cin >> height;

    rect.setDimensions(width, height);
    cout << "\nRectangle Details:\n";
    rect.display();

}
