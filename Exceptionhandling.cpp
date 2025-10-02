#include <iostream>
using namespace std;

class BankAccount {
    double balance;

public:
    BankAccount(double initialBalance = 0) {
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount <= 0) {
            throw "Deposit amount must be positive!";  // throwing exception
        }
        balance += amount;
        cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount <= 0) {
            throw "Withdrawal amount must be positive!";
        }
        if (amount > balance) {
            throw "Insufficient funds!";
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << " | Remaining Balance: " << balance << endl;
    }

    // Show balance
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000); // initial balance = 1000

    try {
        account.showBalance();

        account.deposit(500);    // valid deposit
        account.withdraw(200);   // valid withdrawal

        account.withdraw(2000);  // ❌ will throw "Insufficient funds!"
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program ended safely ✅" << endl;
    return 0;
}
