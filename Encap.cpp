#include <iostream>    
using namespace std;
class Encap {
private:
    string name;
    int balance;
    int age;
    int roll_no;
public:
Encap(string name , int age , int roll_no, int balance){
        this -> name = name ;
        this -> age = age ;
        this -> roll_no = roll_no;
        this -> balance = balance;
}
 void deposit(int amount){
    if(amount>0){
        balance+= amount;
    }
    else{
        cout << "Invalid Amount" << endl;
    }
 }

 void withdraw(int amount){
    if(amount > 0){
        balance -= amount;
    }
    else{
        cout << "Invalid Withdrawl Amount" << endl;
    }
 }

 void finalbalance(){
    cout <<"The Final Balance is " << balance << endl;
 }
    
};

int main(){
    Encap E1("Aman",20,021,2000);
    E1.deposit(500);
    E1.withdraw(300);
    E1.finalbalance();

}