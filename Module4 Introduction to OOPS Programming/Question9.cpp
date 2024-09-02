#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    Person() : name(""), age(0), country("") {}

    Person(const string& n, int a, const string& c) : name(n), age(a), country(c) {}

    void setName(const string& n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(const string& c) {
        country = c;
    }

    // Getter functions
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getCountry() const {
        return country;
    }
};

int main() {
    Person person1("Vishal", 30, "India");

    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;
    cout << "Country: " << person1.getCountry() << endl;

    person1.setName("Samarth");
    person1.setAge(16);
    person1.setCountry("India");

    cout << "Updated Name: " << person1.getName() << endl;
    cout << "Updated Age: " << person1.getAge() << endl;
    cout << "Updated Country: " << person1.getCountry() << endl;
}
