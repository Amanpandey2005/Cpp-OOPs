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
    student *s = new student;
    s->name = "Aman";
    s->age = 20;
    s->roll_no = 34;
    s->marks = 90;
    cout << s->name << endl;
    cout << s->age << endl;
    cout << s->roll_no << endl; 
    cout << s->marks << endl;
    return 0;
}