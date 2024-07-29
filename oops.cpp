#include<iostream>
using namespace std ;
class Hero{
    public:
    int health ;
    char level;
    int gethealth(){
        return health;
    }
    Hero(){
        cout << "Constructor called" << endl;
    }
    Hero(int health){

    }
       char getlevel()
       {
        return level;
       }

    void sethealth(int h, char name ){
        if (name == 'h'){
    health = h;
    }
    }
     
    void setlevel( char  a){
    level = a;
    }
};

int main(){
    cout << "hi" << endl;
    Hero h1 ;
    cout << "hello";
  /*  Hero *b = new Hero;
    b->health = 90;
    b->level = 'A';
    cout << b->level<< "  " << b-> health << endl;
 
cout << h1.health<<endl;
cout << h1.level<<endl;
h1.sethealth(34, 'h');
h1.setlevel('A');
cout << h1.gethealth()<< endl;
cout << h1.getlevel()<< endl;
*/
}