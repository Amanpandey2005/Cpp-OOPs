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

    human(){
        cout << "human constructor Caalled"<< endl;
    }
    ~human(){
        cout << "human destructor Caalled" << endl;
    }
};

class student:public human
{
    int fees;
    public:
    student(){
        cout << "Student Constructor Called"<< endl;
    }
    ~student(){
        cout << "Student Destructor Called" << endl;
    }
};

int main(){
    student A1;
    // Constructor Pehle Inherited Class Ki Constructor ko Call krega phir Derived ya Khud ki class ke..
    // destructor Pehle Derived ya khud ki Class ka Destructor Call karege phir dusri Class ka
}