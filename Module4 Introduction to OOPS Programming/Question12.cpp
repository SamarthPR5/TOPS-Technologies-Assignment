#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    Car(const string& comp = "", const string& mod = "", int yr = 0)
        : company(comp), model(mod), year(yr) {}

    void setDetails(const string& comp, const string& mod, int yr) {
        company = comp;
        model = mod;
        year = yr;
    }

    string getCompany() const {
        return company;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
    void displayDetails() const {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar;

    myCar.setDetails("Audi", "etron", 2024);
    cout << "Car Details:" << endl;
    myCar.displayDetails();

    cout << "\nIndividual Details:" << endl;
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

}
