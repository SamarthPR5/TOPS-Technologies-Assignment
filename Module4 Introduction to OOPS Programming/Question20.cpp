#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    void initializePerson(const std::string& n, int a) {
        name = n;
        age = a;
    }
    void displayPerson() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    void initializeStudent(const std::string& n, int a, float p) {
        initializePerson(n, a);
        percentage = p;
    }

    void displayStudent() const {
        displayPerson();
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    void initializeTeacher(const std::string& n, int a, float s) {
        initializePerson(n, a);
        salary = s;
    }

    void displayTeacher() const {
        displayPerson();
        std::cout << "Salary: Rs. " << salary << std::endl;
    }
};

int main() {
    Student student;
    student.initializeStudent("Samarth", 16, 99);
    std::cout << "Student Details:" << std::endl;
    student.displayStudent();

    std::cout << std::endl;

    Teacher teacher;
    teacher.initializeTeacher("Anjana", 30, 50000);
    std::cout << "Teacher Details:" << std::endl;
    teacher.displayTeacher();

}
