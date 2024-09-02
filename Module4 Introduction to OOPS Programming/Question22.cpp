#include <iostream>

class Students {
protected:
    int rollNumber;

public:
    Students(int r) : rollNumber(r) {}

    void setRollNumber(int r) {
        rollNumber = r;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};

class Test : public Students {
protected:
    int marks1;
    int marks2;

public:
    Test(int r, int m1, int m2) : Students(r), marks1(m1), marks2(m2) {}

    void setMarks(int m1, int m2) {
        marks1 = m1;
        marks2 = m2;
    }

    int getMarks1() const {
        return marks1;
    }

    int getMarks2() const {
        return marks2;
    }
};

class Result : public Test {
public:
    Result(int r, int m1, int m2) : Test(r, m1, m2) {}

    int getTotalMarks() const {
        return getMarks1() + getMarks2();
    }

    void display() const {
        std::cout << "Roll Number: " << getRollNumber() << std::endl;
        std::cout << "Marks in Subject 1: " << getMarks1() << std::endl;
        std::cout << "Marks in Subject 2: " << getMarks2() << std::endl;
        std::cout << "Total Marks: " << getTotalMarks() << std::endl;
    }
};

int main() {
    Result studentResult(12, 98, 90);
    studentResult.display();
}
