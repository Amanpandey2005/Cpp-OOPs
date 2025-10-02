#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr(5);

    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    ofstream fout("Zero.txt");
    if (!fout) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Write original data
    fout << "Original data: ";
    for (int i = 0; i < 5; i++) {
        fout << arr[i] << " ";
    }
    fout << endl;

    // Sort data
    sort(arr.begin(), arr.end());

    // Write sorted data
    fout << "Sorted data: ";
    for (int i = 0; i < 5; i++) {
        fout << arr[i] << " ";
    }
    fout << endl;

    fout.close();
    cout << "Data written successfully to Zero.txt ✅" << endl;

    return 0;
}
