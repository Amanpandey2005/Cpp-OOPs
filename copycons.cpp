#include<iostream>
using namespace std;

class Student {
    string name;
    int age;
    int roll_no;

public:
    Student() {
        cout << "Default Constructor Called" << endl;
    }

    // Inline constructor with initialization list
   // Student(string s, int a, int r) : name(s), age(a), roll_no(r) {
  //      cout << " Inline Constructor Called" << endl;
   // }

    // Overloaded constructor with (int, int)
    Student(string name,int age, int roll_no) {
       this -> name = name;
        this->age = age;
        this->roll_no = roll_no;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll_no << endl;
    }
// Copy Constructors 
    Student(Student& s3){
        name = s3.name;
        age = s3.age;
        roll_no = s3.roll_no;
    }
};

int main() {
    Student s1;
    Student s2("Aman", 20, 34);
    s2.display();
    Student s3("vertika",22, 45);
    s3.display();
    Student s4("Inline", 23, 56);
    s4.display();
    Student S5(s3);
    S5.display();
    return 0;
}
