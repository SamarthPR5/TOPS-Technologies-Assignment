#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor called." << endl;
    }
    ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

class Intermediate : public Base {
public:
    Intermediate() {
        cout << "Intermediate class constructor called." << endl;
    }
    ~Intermediate() {
        cout << "Intermediate class destructor called." << endl;
    }
};

class Derived : public Intermediate {
public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }
    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    Derived obj;
}
