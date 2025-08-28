#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount() : accountHolder("Unknown"), accountNumber(0), balance(0.0) {}

    BankAccount(string name, int accNum, double bal) : accountHolder(name), accountNumber(accNum), balance(bal) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
        }
    }

    void displayAccount() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1;
    BankAccount acc2("Sonika", 2025001, 150.0);
    acc1.deposit(100);
    acc1.withdraw(30);
    acc2.deposit(50);
    acc2.withdraw(200);
    acc1.displayAccount();
    acc2.displayAccount();
    return 0;
}