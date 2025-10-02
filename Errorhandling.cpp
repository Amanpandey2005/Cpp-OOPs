#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 0;

    try {
        if (y == 0) {
            throw "Division by zero not allowed!";  // throwing exception
        }
        cout << "Result: " << x / y << endl;
    }
    catch (const char* msg) {   // catching exception
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program ended safely." << endl;
    return 0;
}
