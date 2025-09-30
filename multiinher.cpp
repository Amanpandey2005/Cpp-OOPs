#include<iostream>
using namespace std;

class human{

    protected:
    string name;
    public:
    void getname (){
        cout << "My name is " << name << endl;
    }
};

class employee: public human{

    protected:
    int salary;
    public:
    void getsalary(){
        cout << "My salary is " << salary << endl;
    }
};

class manager:public employee{

    protected:
    string department;
   public:
    void getdepartment(){
        cout << "My departmebt is " << department << endl;
    }

    manager(string name , int salary, string department){
        this -> name = name ;
        this -> salary = salary ;
        this -> department = department;
    }

};

int main(){
    manager m1("Aman",120000,"IT");
    m1.getname();
    m1.getsalary();
    m1.getdepartment();
}
