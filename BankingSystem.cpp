#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    string name;
    int accNumber;
    float balance;

    Account(string n, int num) {
        name = n;
        accNumber = num;
        balance = 0;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited ₹" << amount << endl;
    }

    void withdraw(float amount) {
        if (amount > balance)
            cout << "Insufficient balance" << endl;
        else {
            balance -= amount;
            cout << "Withdrew ₹" << amount << endl;
        }
    }

    void display() {
        cout << "Name: " << name << "\nAccount Number: " << accNumber << "\nBalance: ₹" << balance << "\n";
    }
};

int main() {
    Account acc("Mandar", 101);
    acc.deposit(1000);
    acc.withdraw(500);
    acc.display();

    return 0;
}
