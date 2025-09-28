#include<iostream>
using namespace std;

class Student {
    string name;
    int age;
    int roll_no;

public:
    // Default Constructor
    Student() {
        cout << "Default Constructor Called" << endl;
    }

    // Inline constructor with initialization list
    Student(string s, int a, int r) : name(s), age(a), roll_no(r) {
       cout << "Inline Constructor Called" << endl;
    }

    // Overloaded constructor with different signature (int only)
    Student(int r, int a) {
        roll_no = r;
        age = a;
        name = "Unknown";
        cout << "Overloaded Constructor (int,int) Called" << endl;
    }

    // Copy Constructor
    Student(const Student& s3) {
        name = s3.name;
        age = s3.age;
        roll_no = s3.roll_no;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll_no << endl;
    }

    // destructor
    ~Student() {
        cout << "Destructor Called for " << name << endl;
    }
};

int main() {
    Student s1; // Default
    Student s2("Aman", 20, 34); // Inline
    s2.display();

    Student s3("Vertika", 22, 45); // Inline
    s3.display();

    Student s4(56, 23); // Overloaded int,int
    s4.display();

    Student s5(s3); // Copy Constructor
    s5.display();

    return 0;
}
