#include<iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream fin;
    fin.open("Zoom.txt");
    char c;
    c = fin.get();
    while(!fin.eof()){
        cout << c;
        c= fin.get();
    };
    fin.close();

}