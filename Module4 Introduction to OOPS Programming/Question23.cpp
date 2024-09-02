#include <iostream>
using namespace std;

class Base {
public:
    int publicValue;

    Base(int pubVal, int protVal, int privVal) 
        : publicValue(pubVal), protectedValue(protVal), privateValue(privVal) {}
    void showPublic() const {
        cout << "Base class publicValue: " << publicValue << endl;
    }

protected:
    int protectedValue;
    void showProtected() const {
        cout << "Base class protectedValue: " << protectedValue << endl;
    }

private:
    int privateValue;
    void showPrivate() const {
        cout << "Base class privateValue: " << privateValue << endl;
    }
    friend void accessPrivate(const Base& obj);
};
void accessPrivate(const Base& obj) {
    cout << "Accessing privateValue from friend function: " << obj.privateValue << endl;
}
class Derived : public Base {
public:
    Derived(int pubVal, int protVal, int privVal) 
        : Base(pubVal, protVal, privVal) {}

    void showAccess() const {
        cout << "Derived class accessing publicValue: " << publicValue << endl;
        cout << "Derived class accessing protectedValue: " << protectedValue << endl;
    }
};

int main() {
    Derived obj(100, 200, 300);
    obj.showPublic();
    obj.showAccess();
    accessPrivate(obj);

}
