#include <iostream>
using namespace std;

class Doctor {
public:
    string name;
    string specialization;

    Doctor(string n, string s) : name(n), specialization(s) {}
};

class Patient {
    string pname;
    int age;
    Doctor &doc;
public:
    Patient(string n, int a, Doctor &d) : pname(n), age(a), doc(d) {}

    void display() {
        cout << "Patient: " << pname << ", Age: " << age
             << "\nDoctor: " << doc.name << " (" << doc.specialization << ")\n";
    }
};

int main() {
    Doctor d1("Dr. Mehta", "Cardiologist");
    Patient p1("Aman", 30, d1);
    p1.display();
    return 0;
}
