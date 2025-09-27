#include<iostream>
using namespace std ;
class Student{
private:
    string name;
    int age;
    int roll_no;
    int marks;
    string grade;

public:
    // Setter methods
    void setName(string studentName) {
        name = studentName;
    }
    void setAge(int studentAge) {
        age = studentAge;
    }
    void setRollNo(int studentRollNo) {
        roll_no = studentRollNo;
    }
    void setMarks(int studentMarks) {
        marks = studentMarks;
    }
    void setGrade(string studentGrade) {
        grade = studentGrade;
    }

    void getName() {
        cout << name << endl;
    }
    void getAge() {
        cout << age << endl;
    }
    void getRollNo() {
        cout << roll_no << endl;
    }
    void getMarks() {
        cout << marks << endl;
    }
    // We Gives Password protection here
    string getGrade(int pin) {
        if(pin == 1234){
            return grade;
        }
        else{
            return " ";
        }
    }
};

int main(){
    Student s1;
    s1.setName("Aman");
    s1.setAge(20);
    s1.setRollNo(34);
    s1.setMarks(90);
    s1.setGrade("A");
    
    s1.getName();
    s1.getAge();
    s1.getRollNo();
    s1.getMarks();
    // Works As a Password Protection
    cout << s1.getGrade(1234) << endl;
    
    return 0;
}