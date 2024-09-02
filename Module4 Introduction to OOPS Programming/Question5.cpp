#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(const string& accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs. " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: Rs. " << amount << endl;
            } else {
                cout << "Insufficient funds." << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    void displayAccount() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount myAccount("123456789", 1000.00);
    myAccount.displayAccount();
    myAccount.deposit(500.00);
    myAccount.withdraw(100.00);
    myAccount.withdraw(1000.0);
    myAccount.displayAccount();
}
