#include<iostream>
using namespace std ;
class customer{
    int account_no;
    string name;
    static int total_count;
    int balance;
    static int total_balance;
    
public:
    customer(string name, int account_no, int balance = 0){
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
        total_count++;
        total_balance += balance;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Account No: " << account_no << endl;
        cout << "Total Customers: " << total_count << endl;
        cout << "Balance: " << balance << endl;
    }
    void display_total_count(){
        cout << "Total Customers: " << total_count << endl;
    }
    void display_total_balance(){
        cout << "Total Balance: " << total_balance << endl;
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
            total_balance += amount;
        }
    }
};

int customer::total_count = 0;
int customer::total_balance = 0;

int main(){
    customer c1("Aman", 1234);
    c1.display();
    customer c2("Vertika", 5678);
    c2.display();
    c1.display_total_count(); 
   c2.deposit(500);
    // Accessing static member function using object
    c2.display_total_balance(); 
    // Accessing static member function using object
}