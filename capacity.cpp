#include<iostream>
using namespace std ;
class capacity
{
private:
   char c;
   int a ;
   int b;
};
int main(){
    capacity c1;
    cout << "The Size of the Object is " << sizeof(c1) << endl;
}