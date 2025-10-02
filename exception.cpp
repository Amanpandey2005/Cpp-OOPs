#include <iostream>
#include <stdexcept>  // for standard exceptions
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        if (initialBalance < 0) {
            throw invalid_argument("Initial balance cannot be negative!");
        }
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Deposit amount must be positive!");
        }
        balance += amount;
        cout << "Deposited: $" << amount << ", New Balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Withdrawal amount must be positive!");
        }
        if (amount > balance) {
            throw runtime_error("Insufficient balance!");
        }
        balance -= amount;
        cout << "Withdrawn: $" << amount << ", Remaining Balance: $" << balance << endl;
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << endl;
    }
};

int main() {
    try {
        BankAccount account("Aman Pandey", 5000);  // Initial balance $5000
        account.displayBalance();

        // Test deposit
        account.deposit(2000);  

        // Test invalid deposit
        account.deposit(-500);  

        // Test withdrawal
        account.withdraw(1000);

        // Test insufficient balance
        account.withdraw(10000);  

    } 
    catch (const invalid_argument &e) {
        cout << "Invalid Amount Error: " << e.what() << endl;
    } 
    catch (const runtime_error &e) {
        cout << "Insufficient Balance Error: " << e.what() << endl;
    } 
    catch (...) {  // catch any other unexpected exception
        cout << "An unexpected error occurred!" << endl;
    }

    cout << "Program ended safely ✅" << endl;
    return 0;
}
