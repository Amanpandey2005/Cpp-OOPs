#include <iostream>
#include <new>  // for std::bad_alloc
using namespace std;

int main() {
    try {
        // Trying to allocate a very large array
        int* arr = new int[1000000000000];  

        cout << "Memory allocated successfully!" << endl;

        // Use the memory (example: just free it)
        delete[] arr;
    }
    catch (bad_alloc &e) {
        cout << "Exception caught: Memory allocation failed!" << endl;
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program ended safely ✅" << endl;
    return 0;
}
