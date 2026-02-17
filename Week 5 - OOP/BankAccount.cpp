// Week 5 & 6: Bank Account Class
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string name, double initialMoney) {
        owner = name;
        balance = (initialMoney > 0) ? initialMoney : 0;
    }

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void showInfo() {
        cout << "Owner: " << owner << " | Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAcc("Ahmed", 100.00);
    myAcc.deposit(50);
    myAcc.showInfo();
    return 0;
}