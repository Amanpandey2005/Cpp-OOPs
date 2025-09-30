#include <iostream>
using namespace std;
class human{
    protected:
    string name;
    int age ;
    int roll_no;
    public:
    void work(){
        cout << "I am working properly" << endl;
    }
    human(){

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

class teacher :public human{
    protected:
    string girlfriend;
    public:
    teacher(string name , int age , int roll_no , string girlfriend){
        this -> girlfriend = girlfriend;
        this -> name = name;
        this -> age = age;
        this -> roll_no = roll_no;
    }
    public:
    void dispaly(){
        cout << name << girlfriend << age <<roll_no << endl;
    }

};

int main(){
    student A1("Aman",20,021,120000);
    A1.work();
    A1.dispaly();
    teacher A2("Aman", 20,021,"Vertika");

    // Hiererchical Inheritance me default constructor Bahut jaruri h nahi to Error Ayega badhiya Wala
}