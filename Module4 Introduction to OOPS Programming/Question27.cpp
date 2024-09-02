#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;
    
public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    ~String() {
        delete[] str;
    }
    String operator+(const String& other) const {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        
        strcpy(newStr, str);
        strcat(newStr, other.str);
        String temp(newStr);
        delete[] newStr;
        return temp;
    }

    void display() const {
        cout << str;
    }
};

int main() {
    String s1("Hello, ");
    String s2("world!");
    String s3 = s1 + s2;
    cout << "Concatenated string: ";
    s3.display();
    cout << endl;
}
