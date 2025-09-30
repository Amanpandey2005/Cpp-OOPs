#include<iostream>
using namespace std;

class Engineer{
    protected:
    string name;
    string specialisation;

    public:
    void show(){
        cout <<"I am an Engineer in the field of " << specialisation << endl;
    }

    private:
    void money(){
        cout << "Money in my pocket is 100000" << endl;
    }
};

class human:public virtual Engineer{
    protected:
    string members;
    string company;

    public:
    void showcompany(){
        cout <<"I am an Engineer in " << company << endl;
    }

};

class youtuber:public virtual Engineer{
    protected:
    int Subscribers;

    public:
    void getsubscribers(){
        cout << "Subscribers on my youtube Channel are " << Subscribers << endl;
    }
};

class person: public human, public youtuber{
    string name;
    int age;

    public:
    person(string name , int age , string specialisation , int Subscribers){
        this -> name = name ;
        this -> age = age ;
        this -> specialisation = specialisation;
        this -> Subscribers = Subscribers;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout<< "Specialisation: "<< specialisation<<endl;
        cout << "Subscribers: " << Subscribers << endl;
    }
};

int main(){
    person p1("Aman",20,"Computer Science",5000);
    p1.display();
   // p1.money(); // Not Accessible as it is private in Engineer Class
   // Multiple inheritance me jisko pehle inhert karenge uska Constructor pehle call hoga.
   // Multiple inheritance me jisko pehle inhert karenge uska destructor Sabse baad me call hoga.
    return 0;
}