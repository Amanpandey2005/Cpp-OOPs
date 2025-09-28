#include<iostream>
using namespace std ;
class business{
    string name ;
    int *p;
public:
    business(string s){
        cout << "Constructor Called for " << s << endl;
        name = s;
    }
    ~business(){
        cout << "Destructor Called for " << name << endl;
        delete p;
    }
};

int main(){

    business b1("Aman");
    business b2("Vertika");
    return 0;
}

