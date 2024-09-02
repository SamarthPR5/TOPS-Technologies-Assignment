#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int rollNumber;

public:
    void setPersonDetails(const std::string& n, int r) {
        name = n;
        rollNumber = r;
    }

    void displayPersonDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

class Marks {
protected:
    float subject1;
    float subject2;
    float subject3;

public:
    void setMarks(float s1, float s2, float s3) {
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
    }

    void displayMarks() const {
        std::cout << "Marks in Subject 1: " << subject1 << std::endl;
        std::cout << "Marks in Subject 2: " << subject2 << std::endl;
        std::cout << "Marks in Subject 3: " << subject3 << std::endl;
    }
};

class MarkSheet : public Person, public Marks {
public:
    void displayMarkSheet() const {
        std::cout << "Mark Sheet" << std::endl;
        std::cout << "-----------" << std::endl;
        displayPersonDetails();
        displayMarks();
    }
};

int main() {
    MarkSheet studentMarkSheet;

    studentMarkSheet.setPersonDetails("Samarth Patodekar", 12);
    studentMarkSheet.setMarks(99.5, 92.0, 97.0);
    studentMarkSheet.displayMarkSheet();
}
