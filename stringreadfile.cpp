#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("Z1.txt");
    fout << "Hello India" << endl;
    fout << "Hello Rohit" << endl;
    fout << "Hello Bhai" << endl;

    fout.close();
    ifstream fin;
    fin.open("Z1.txt");

    string line;
    while(getline(fin,line)){
        cout << line << endl;
    }
    fin.close();
}