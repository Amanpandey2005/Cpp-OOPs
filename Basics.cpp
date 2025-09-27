#include<iostream>
using namespace std ;
class student{
public:
    string name;
    int age;
    int roll_no;
    int marks ;
};

int main(){
    student s1;
    s1.name = "Aman";
    s1.age = 20;
    s1.roll_no = 34;
    s1.marks = 90;
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.roll_no << endl; 
    cout << s1.marks << endl;
    return 0;
}