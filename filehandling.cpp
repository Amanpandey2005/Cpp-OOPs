#include<iostream>
using namespace std;
#include<fstream>

int main(){
    ofstream fout;
    fout.open("Zoom.txt");

    fout<<"Hello India" ;
    fout.close();
}