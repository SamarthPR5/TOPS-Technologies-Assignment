#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;

public:
    Cricketer(const string& n = "", int a = 0) : name(n), age(a) {}

    void inputCricketerData() {
        cout << "Enter Cricketer's Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayCricketerData() const {
        cout << "Cricketer's Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    Batsman(const string& n = "", int a = 0, int runs = 0, int bestPerf = 0)
        : Cricketer(n, a), totalRuns(runs), bestPerformance(bestPerf), averageRuns(0) {}

    void inputBatsmanData() {
        inputCricketerData();
        
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        cout << "Enter Best Performance: ";
        cin >> bestPerformance;
        cin.ignore();


        int numberOfMatches;
        cout << "Enter Number of Matches: ";
        cin >> numberOfMatches;
        cin.ignore();

        if (numberOfMatches > 0) {
            calculateAverageRuns(totalRuns, numberOfMatches);
        } else {
            averageRuns = 0;
        }
    }

    void calculateAverageRuns(int runs, int matches) {
        if (matches > 0) {
            averageRuns = static_cast<float>(runs) / matches;
        } else {
            averageRuns = 0;
        }
    }

    void displayBatsmanData() const {
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << fixed << setprecision(2);
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {

    Batsman player;
    player.inputBatsmanData();
    cout << "\nBatsman Details:\n";
    player.displayBatsmanData();
}
