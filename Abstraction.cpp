#include <iostream>
using namespace std;

class BankAccount {
public:
    // Pure virtual functions → must be overridden in child class
    virtual void deposit(int amount) = 0;
    virtual void withdraw(int amount) = 0;
    virtual void displayBalance() = 0;

    virtual ~BankAccount() {
        cout << "Destructor called!" << endl;
    }
};

// Concrete class implementing abstraction
class SavingsAccount : public BankAccount {
private:
    int balance;

public:
    SavingsAccount(int initialBalance) {
        balance = initialBalance;
    }

    void deposit(int amount) override {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(int amount) override {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or Insufficient balance!" << endl;
        }
    }

    void displayBalance() override {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    // Using abstraction: we work with BankAccount pointer
    BankAccount* account = new SavingsAccount(2000);

    account->deposit(500);
    account->withdraw(300);
    account->displayBalance();

    delete account; // Free memory
    return 0;
}
