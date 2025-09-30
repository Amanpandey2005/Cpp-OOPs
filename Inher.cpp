#include <iostream>
using namespace std;
class Inheritance{
    public:
    string Religion;
    protected:
    string name;
    int age, weight;
};

class Student:protected Inheritance{

    private:
    int roll_no, fees;

   public:
    void setData(string n, int a, int w, int r, int f) {
        name = n;
        age = a;
        weight = w;
        roll_no = r;
        fees = f;
    }

    void setReligion(string r) {
        Religion = r;
    }

    void displayreligion() {
        cout << "Religion: " << Religion << endl;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Fees: " << fees << endl;
    }
};

int main(){
    Student S1;
    S1.setData("Aman", 20, 70, 101, 5000);
   S1.setReligion("Hindu");
    S1.displayData();
    S1.displayreligion();
    return 0;
}