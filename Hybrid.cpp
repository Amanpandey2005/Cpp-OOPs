#include<iostream>
using namespace std;

//student 
//boy
//girl
//male
//female

class student{
    protected:
    string name ;
    int roll_no;

    public:
    void getstudent(){
        cout << "I am a student" << endl;
    }
};

class boy: public student{
    protected:
    string school;
    public:
    void getboy(){
        cout <<"I am a boy" << endl;
    }
};

class girl: public student{
    protected:
    string school;
    public:
    void getgirl(){
        cout <<"I am a girl" << endl;
    }
};


class male: public student, public boy{
    public:
    string commonname;
    void getmale(){
        cout <<"I am a male" << endl;
    }
};

class female: public student, public girl {
    public:
    string femalecommonname;
    void getfemale(){
        cout <<"I am a female" << endl;
    }
};

int main(){
    male m;
    m.getmale();
    female f;
    f.getfemale();
    girl g;
    g.getgirl();
    boy b;
    b.getboy();
}