#include<iostream>
using namespace std;
class human{
    protected:
    string name ;
    int age ;
    int roll_no;
    public:
    void work(){
        cout << "I am working properly" << endl;
    }
    human(string name, int age , int roll_no){
        this -> name = name;
        this -> age = age;
        this -> roll_no = roll_no;
    }
    void dispaly(){
        cout << name << age << roll_no << endl;
    }
};

class student:public human
{
    int fees;
    public:
    student(string name , int age , int roll_no , int fees):human(name , age , roll_no){
        this -> fees = fees;
    }

    void dispaly(){
        cout << name << age << roll_no << fees << endl;
    }
};

int main(){
    student A1("Aman",20,021,120000);
    A1.work();
    A1.dispaly();
    // Constructor Pehle Inherited Class Ki Constructor ko Call krega phir Derived ya Khud ki class ke..
    // destructor Pehle Derived ya khud ki Class ka Destructor Call karege phir dusri Class ka
}